#include "scheduling.h"
#include "ui_scheduling.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDate>
#include <QTime>
#include "sessionmanager.h"
#include <placemanage.h>
#include <dashboard.h>
#include<QTimer>

scheduling::scheduling(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::scheduling),

    place_manage(nullptr),
    dashboardWindow(nullptr)
{
    ui->setupUi(this);
    connect(ui->Gotodash_subevent, &QPushButton::clicked, this, &scheduling::on_Gotodash_subevent_clicked);
}

scheduling::~scheduling()
{
    delete ui;
    delete dashboardWindow;
    delete place_manage;
}

void scheduling::on_Gotodash_subevent_clicked()
{
    QString name = ui->Name->text().trimmed();
    QString venue = ui->Location->text().trimmed();
    QString date = ui->Date->text().trimmed();
    QString time = ui->Time->text().trimmed();
    QString contact = ui->Contact->text().trimmed();

    // Validate fields
    if (name.isEmpty() || venue.isEmpty() || date.isEmpty() || time.isEmpty() || contact.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    QRegularExpression nameRegex("^[A-Za-z\\s'-]{2,50}$");
    if (!nameRegex.match(name).hasMatch()) {
        QMessageBox::warning(this, "Invalid Name", "Please enter a valid Event name.");
        return;
    }

    QRegularExpression venueRegex("^[A-Za-z\\s'-]{2,50}$");
    if (!venueRegex.match(venue).hasMatch()) {
        QMessageBox::warning(this, "Invalid Venue", "Please enter a valid Venue name.");
        return;
    }

    QRegularExpression contactRegex("^(98|97)\\d{8}$");
    if (!contactRegex.match(contact).hasMatch()) {
        QMessageBox::warning(this, "Invalid Contact", "Contact number must start with 98 or 97 and be 10 digits.");
        return;
    }

    // Get logged-in user ID
    int userId = SessionManager::instance().getUserId();
    if (userId == -1) {
        QMessageBox::critical(this, "Session Error", "No user is logged in.");
        return;
    }

    // Ensure DB is open
    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is not open.");
        return;
    }

    // Prepare and execute SQL query
    QSqlQuery query;
    query.prepare("INSERT INTO events (user_id, name, venue, date, time, organizer_contact) "
                  "VALUES (:user_id, :name, :venue, :date, :time, :contact)");
    query.bindValue(":user_id", userId);
    query.bindValue(":name", name);
    query.bindValue(":venue", venue);
    query.bindValue(":date", date);
    query.bindValue(":time", time);
    query.bindValue(":contact", contact);

    if (!query.exec()) {
        qDebug() << "Insert failed:" << query.lastError().text();
        QMessageBox::critical(this, "Database Error", "Failed to save event: " + query.lastError().text());
        return;
    }
      query.finish();
      query.clear();

    // Get last inserted ID
    qint64 lastId = query.lastInsertId().toLongLong();
    query.finish();  // 🔒 Ensure query finishes

    // Show success message
    QMessageBox::information(this, "Success", "Event scheduled successfully!");

    // Clear input fields
    ui->Name->clear();
    ui->Location->clear();
    ui->Date->clear();
    ui->Time->clear();
    ui->Contact->clear();

    // Ask to manage subevent
    QTimer::singleShot(200, this, [=]() {
        QMessageBox::StandardButton reply = QMessageBox::question(this,
                                                                  "Manage Sub Event",
                                                                  "Do you want to manage sub event?",
                                                                  QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes || reply == QMessageBox::No) {
            if (place_manage) {
                delete place_manage;
            }
            place_manage = new placemanage(userId, static_cast<int>(lastId));
            place_manage->show();
            this->close();
        }
    });
}

void scheduling::on_dashboard_2_clicked()
{
    int userId = SessionManager::instance().getUserId();
    if (userId == -1) {
        QMessageBox::critical(this, "Session Error", "No user is logged in.");
        return;
    }

    if (!dashboardWindow) {
        dashboardWindow = new dashboard(userId);
    }

    dashboardWindow->show();
    this->hide();
}
