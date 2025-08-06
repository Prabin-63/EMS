#include "userdashboard.h"
#include "ui_userdashboard.h"
#include <QPushButton>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QLabel>
#include <QFrame>
#include "ticketwindow.h"
#include<login.h>

UserDashboard::UserDashboard(int userId, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::UserDashboard),
    currentUserId(userId),
    currentEventId(-1)
{
    ui->setupUi(this);

    // Fetch user name
    QString userName = "User";
    QSqlQuery query;
    query.prepare("SELECT name FROM users WHERE id = :id");
    query.bindValue(":id", currentUserId);
    if (query.exec() && query.next()) {
        userName = query.value("name").toString();
    }
    ui->Nameuser->setText("Hi " + userName);

    // Setup scroll area
    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);
    scrollArea->setMinimumWidth(500);

    eventWidget = new QWidget();
    eventLayout = new QVBoxLayout(eventWidget);
    eventLayout->setAlignment(Qt::AlignTop);
    scrollArea->setWidget(eventWidget);

    QHBoxLayout *wrapperLayout = new QHBoxLayout();
    wrapperLayout->addStretch();
    wrapperLayout->addWidget(scrollArea);
    wrapperLayout->addStretch();

    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addLayout(wrapperLayout);
    mainLayout->addStretch();
    ui->eventContainer->setLayout(mainLayout);

    loadEvents();
}

UserDashboard::~UserDashboard()
{
    delete ui;
}

void UserDashboard::loadEvents()
{
    // Clear previous widgets
    QLayoutItem *child;
    while ((child = eventLayout->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
    }

    QSqlQuery query("SELECT id, name FROM events");
    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Unable to load events.");
        return;
    }

    while (query.next()) {
        int eventId = query.value("id").toInt();
        QString name = query.value("name").toString();

        QPushButton *eventButton = new QPushButton(name, this);
        eventButton->setFixedWidth(400);
        eventButton->setStyleSheet(
            "QPushButton { padding: 12px; font-size: 14px; background-color: white; border: 1px solid #ccc; border-radius: 6px; }"
            "QPushButton:hover { background-color: #465C88; border: 1px solid #999; color:white; }"
            );

        QHBoxLayout *hLayout = new QHBoxLayout();
        hLayout->addStretch();
        hLayout->addWidget(eventButton);
        hLayout->addStretch();

        QWidget *container = new QWidget();
        container->setLayout(hLayout);
        eventLayout->addWidget(container);

        connect(eventButton, &QPushButton::clicked, this, [this, eventId]() {
            loadEventDetail(eventId);
        });
    }
}

void UserDashboard::loadEventDetail(int eventId)
{
    currentEventId = eventId;

    QLayoutItem *child;
    while ((child = eventLayout->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
    }

    QSqlQuery eventQuery;
    eventQuery.prepare("SELECT name, venue, date, time, organizer_contact FROM events WHERE id = :id");
    eventQuery.bindValue(":id", eventId);

    QString eventName, venue, date, time, organizer;
    if (eventQuery.exec() && eventQuery.next()) {
        eventName = eventQuery.value("name").toString();
        venue = eventQuery.value("venue").toString();
        date = eventQuery.value("date").toString();
        time = eventQuery.value("time").toString();
        organizer = eventQuery.value("organizer_contact").toString();
    } else {
        QMessageBox::critical(this, "Error", "Unable to load event details.");
        return;
    }

    QLabel *eventTitle = new QLabel(eventName);
    eventTitle->setStyleSheet("font-size: 20px; font-weight: bold;");
    QLabel *venueLabel = new QLabel("Venue: " + venue);
    QLabel *dateLabel = new QLabel("Date: " + date + "  Time: " + time);
    QLabel *organizerLabel = new QLabel("Organizer: " + organizer);

    eventLayout->addWidget(eventTitle);
    eventLayout->addWidget(venueLabel);
    eventLayout->addWidget(dateLabel);
    eventLayout->addWidget(organizerLabel);

    QFrame *line = new QFrame();
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    eventLayout->addWidget(line);

    // Tickets button
    QPushButton *ticketButton = new QPushButton("🎟️ View My Tickets");
    ticketButton->setStyleSheet("background-color: #28a745; color: white; padding: 6px;");
    ticketButton->setFixedWidth(200);
    connect(ticketButton, &QPushButton::clicked, this, &UserDashboard::on_pushButton_2_clicked);
    eventLayout->addWidget(ticketButton);

    QSqlQuery subQuery;
    subQuery.prepare("SELECT id, sub_event_name, location, time, contact_person FROM places WHERE event_id = :eid");
    subQuery.bindValue(":eid", eventId);

    if (subQuery.exec()) {
        while (subQuery.next()) {
            int subEventId = subQuery.value("id").toInt();
            QString subName = subQuery.value("sub_event_name").toString();
            QString subLocation = subQuery.value("location").toString();
            QString subTime = subQuery.value("time").toString();
            QString contact = subQuery.value("contact_person").toString();

            QWidget *subEventWidget = new QWidget();
            QHBoxLayout *subLayout = new QHBoxLayout(subEventWidget);

            QLabel *details = new QLabel(
                "<b>" + subName + "</b><br>"
                                  "Location: " + subLocation + "<br>"
                                "Time: " + subTime + "<br>"
                            "Contact: " + contact
                );

            QPushButton *bookBtn = new QPushButton("Book");
            bookBtn->setFixedWidth(100);
            bookBtn->setStyleSheet("QPushButton {background-color: #0078D7; color: white; padding: 6px; border-radius: 4px;} QPushButton:hover {background-color: #005A9E;}");

            // Check existing booking
            bool alreadyBooked = false;
            QSqlQuery checkBooked;
            checkBooked.prepare("SELECT COUNT(*) FROM booking WHERE id = :user_id AND subevent_id = :subevent_id");
            checkBooked.bindValue(":user_id", currentUserId);
            checkBooked.bindValue(":subevent_id", subEventId);

            if (checkBooked.exec() && checkBooked.next() && checkBooked.value(0).toInt() > 0) {
                alreadyBooked = true;
            }

            if (alreadyBooked) {
                bookBtn->setText("Booked");
                bookBtn->setEnabled(false);
                bookBtn->setStyleSheet("background-color: gray; color: white; padding: 6px; border-radius: 4px;");
            }

            connect(bookBtn, &QPushButton::clicked, this, [=]() {
                QSqlQuery checkQuery;
                checkQuery.prepare("SELECT COUNT(*) FROM booking WHERE id = :user_id AND subevent_id = :subevent_id");
                checkQuery.bindValue(":user_id", currentUserId);
                checkQuery.bindValue(":subevent_id", subEventId);
                if (!checkQuery.exec()) {
                    QMessageBox::critical(this, "Error", "Check failed: " + checkQuery.lastError().text());
                    return;
                }

                checkQuery.next();
                if (checkQuery.value(0).toInt() > 0) {
                    QMessageBox::warning(this, "Already Booked", "You have already booked this sub-event.");
                    return;
                }

                QSqlQuery bookQuery;
                bookQuery.prepare("INSERT INTO booking (id, event_id, subevent_id) VALUES (?, ?, ?)");
                bookQuery.addBindValue(currentUserId);
                bookQuery.addBindValue(eventId);
                bookQuery.addBindValue(subEventId);

                if (bookQuery.exec()) {
                    QMessageBox::information(this, "Success", "Booking confirmed!");
                    bookBtn->setText("Booked");
                    bookBtn->setEnabled(false);
                    bookBtn->setStyleSheet("background-color: gray; color: white; padding: 6px; border-radius: 4px;");
                } else {
                    QMessageBox::critical(this, "Error", "Booking failed: " + bookQuery.lastError().text());
                }
            });

            subLayout->addWidget(details);
            subLayout->addStretch();
            subLayout->addWidget(bookBtn);
            subEventWidget->setLayout(subLayout);
            eventLayout->addWidget(subEventWidget);
        }
    } else {
        QMessageBox::critical(this, "Error", "Failed to load sub-events.");
    }
}

void UserDashboard::on_pushButton_2_clicked()
{
    if (currentEventId == -1) {
        QMessageBox::warning(this, "No Event Selected", "Please select an event first.");
        return;
    }

    ticketwindow *tickets = new ticketwindow(currentUserId, currentEventId);
    tickets->setAttribute(Qt::WA_DeleteOnClose);
    tickets->show();
}
void UserDashboard::on_Logout_clicked()
{
    this->hide();
    login *loginWindow = new login();
    loginWindow->show();
    }        // Show login window again

