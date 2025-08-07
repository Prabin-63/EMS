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
#include <profile.h>
#include <booking.h>
#include <helpcenter.h>

scheduling::scheduling(dashboard *dash, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::scheduling),
    place_manage(nullptr),
    dashboardWindow(nullptr),
    dash(dash),
    prof(nullptr)
{
    ui->setupUi(this);
    connect(ui->Gotodash_subevent, &QPushButton::clicked, this, &scheduling::on_Gotodash_subevent_clicked);
    this->showMaximized();
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


    int userId = SessionManager::instance().getUserId();
    if (userId == -1) {
        QMessageBox::critical(this, "Session Error", "No user is logged in.");
        return;
    }


    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database connection is not open.");
        return;
    }


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

    qint64 lastId = query.lastInsertId().toLongLong();


    QMessageBox::information(this, "Success", "Event scheduled successfully!");


    ui->Name->clear();
    ui->Location->clear();
    ui->Date->clear();
    ui->Time->clear();
    ui->Contact->clear();


    QMessageBox::StandardButton reply = QMessageBox::question(this,
                                                              "Manage Sub Event",
                                                              "Do you want to manage sub event?",
                                                              QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {

        if (place_manage) {
            delete place_manage;
            place_manage = nullptr;
        }

        place_manage = new placemanage(userId, static_cast<int>(lastId));
        place_manage->show();
        this->close();
    }

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

void scheduling::on_Profile_clicked()
{
    prof = new Profile(dash);
    prof->show();
    this->close();
}

void scheduling::on_Booking_clicked()
{
    book = new Booking(dash);
    book->show();
    this->close();
}

void scheduling::on_Help_Center_clicked()
{
    help = new HelpCenter(dash);
    help->show();
    this->close();
}
