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

UserDashboard::UserDashboard(int userId, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::UserDashboard),
currentUserId(userId)
{
    ui->setupUi(this);

    // Setup scroll area for main event list
    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);
    scrollArea->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    scrollArea->setMinimumWidth(500);

    eventWidget = new QWidget();
    eventLayout = new QVBoxLayout(eventWidget);
    eventLayout->setAlignment(Qt::AlignTop);
    eventWidget->setLayout(eventLayout);

    scrollArea->setWidget(eventWidget);

    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addWidget(scrollArea);
    ui->eventContainer->setLayout(mainLayout);

    loadEvents();
}

UserDashboard::~UserDashboard()
{
    delete ui;
}

void UserDashboard::loadEvents()
{
    // Clear old widgets
    QLayoutItem *child;
    while ((child = eventLayout->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
    }

    QSqlQuery query("SELECT id, name FROM events");
    if (!query.exec()) {
        qDebug() << "Failed to fetch events:" << query.lastError().text();
        QMessageBox::critical(this, "Error", "Unable to load events.");
        return;
    }

    while (query.next()) {
        int eventId = query.value("id").toInt();
        QString name = query.value("name").toString();

        QPushButton *eventButton = new QPushButton(name, this);
        eventButton->setFixedWidth(400);
        eventButton->setStyleSheet(
            "QPushButton {"
            "  padding: 12px; "
            "  font-size: 14px; "
            "  background-color: white; "
            "  border: 1px solid #ccc; "
            "  border-radius: 6px;"
            "}"
            "QPushButton:hover {"
            "  background-color: #465C88; "
            "  border: 1px solid #999;"
            "  color:white;"
            "}"
            );

        QHBoxLayout *hLayout = new QHBoxLayout();
        hLayout->addStretch();
        hLayout->addWidget(eventButton);
        hLayout->addStretch();

        QWidget *container = new QWidget();
        container->setLayout(hLayout);

        eventLayout->addWidget(container);

        // Open event details on click
        connect(eventButton, &QPushButton::clicked, this, [this, eventId]() {
            loadEventDetail(eventId);
        });
    }
}

void UserDashboard::loadEventDetail(int eventId)
{
    // Clear old widgets
    QLayoutItem *child;
    while ((child = eventLayout->takeAt(0)) != nullptr) {
        delete child->widget();
        delete child;
    }

    // Query event details
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

    // Top event details
    QLabel *eventTitle = new QLabel(eventName);
    eventTitle->setStyleSheet("font-size: 20px; font-weight: bold;");
    QLabel *venueLabel = new QLabel("Venue: " + venue);
    QLabel *dateLabel = new QLabel("Date: " + date + "  Time: " + time);
    QLabel *organizerLabel = new QLabel("Organizer: " + organizer);

    eventLayout->addWidget(eventTitle);
    eventLayout->addWidget(venueLabel);
    eventLayout->addWidget(dateLabel);
    eventLayout->addWidget(organizerLabel);

    // Divider
    QFrame *line = new QFrame();
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    eventLayout->addWidget(line);

    // Sub-events
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
            bookBtn->setStyleSheet(
                "QPushButton {background-color: #0078D7; color: white; padding: 6px; border-radius: 4px;}"
                "QPushButton:hover {background-color: #005A9E;}"
                );

            connect(bookBtn, &QPushButton::clicked, this, [subEventId, eventId]() {
                QSqlQuery bookQuery;
                bookQuery.prepare("INSERT INTO booking (id, event_id, subevent_id) VALUES (:uid, :eid, :seid)");
                bookQuery.bindValue(":uid", 1); // Replace with actual logged-in user ID
                bookQuery.bindValue(":eid", eventId);
                bookQuery.bindValue(":seid", subEventId);
                if (!bookQuery.exec()) {
                    QMessageBox::critical(nullptr, "Error", "Booking failed: " + bookQuery.lastError().text());
                } else {
                    QMessageBox::information(nullptr, "Success", "Booking confirmed!");
                }
            });

            subLayout->addWidget(details);
            subLayout->addStretch();
            subLayout->addWidget(bookBtn);
            subEventWidget->setLayout(subLayout);

            eventLayout->addWidget(subEventWidget);
        }
    }
}
