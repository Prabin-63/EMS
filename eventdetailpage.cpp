#include "eventdetailpage.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QPushButton>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QHBoxLayout>

EventDetailPage::EventDetailPage(int userId, QWidget *parent)
    : QWidget(parent), currentUserId(userId)
{
    // Debug: Check what userId is being passed to constructor
    qDebug() << "=== EventDetailPage Constructor Debug ===";
    qDebug() << "Received userId parameter:" << userId;
    qDebug() << "Stored currentUserId:" << this->currentUserId;

    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    // Event detail section
    eventNameLabel = new QLabel("Event Name", this);
    eventNameLabel->setStyleSheet("font-size: 20px; font-weight: bold;");
    venueLabel = new QLabel("Venue:", this);
    dateTimeLabel = new QLabel("Date & Time:", this);
    organizerLabel = new QLabel("Organizer:", this);

    mainLayout->addWidget(eventNameLabel);
    mainLayout->addWidget(venueLabel);
    mainLayout->addWidget(dateTimeLabel);
    mainLayout->addWidget(organizerLabel);

    // Sub-event scroll section
    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);

    subEventContainer = new QWidget();
    subEventLayout = new QVBoxLayout(subEventContainer);
    subEventLayout->setAlignment(Qt::AlignTop);
    subEventContainer->setLayout(subEventLayout);

    scrollArea->setWidget(subEventContainer);
    mainLayout->addWidget(scrollArea);

    setLayout(mainLayout);
}

void EventDetailPage::loadEventDetails(int eventId)
{
    currentEventId = eventId;

    // Debug output to verify we're using the correct userId
    qDebug() << "=== EventDetailPage LoadEventDetails Debug ===";
    qDebug() << "Loading event details for userId:" << this->currentUserId;
    qDebug() << "EventId:" << eventId;

    // Load main event details
    QSqlQuery eventQuery;
    eventQuery.prepare("SELECT name, venue, date, time, organizer_contact FROM events WHERE id = :id");
    eventQuery.bindValue(":id", eventId);

    if (eventQuery.exec() && eventQuery.next()) {
        eventNameLabel->setText(eventQuery.value("name").toString());
        venueLabel->setText("Venue: " + eventQuery.value("venue").toString());
        dateTimeLabel->setText("Date & Time: " + eventQuery.value("date").toString() + " " + eventQuery.value("time").toString());
        organizerLabel->setText("Organizer: " + eventQuery.value("organizer_contact").toString());
    } else {
        QMessageBox::critical(this, "Error", "Failed to load event details.");
        return;
    }

    // Clear previous sub-events
    QLayoutItem *child;
    while ((child = subEventLayout->takeAt(0)) != nullptr) {
        if (child->widget()) child->widget()->deleteLater();
        delete child;
    }

    // Load sub-events
    QSqlQuery subEventQuery;
    subEventQuery.prepare("SELECT id, sub_event_name, location, time, contact_person FROM places WHERE event_id = :event_id");
    subEventQuery.bindValue(":event_id", eventId);

    if (subEventQuery.exec()) {
        while (subEventQuery.next()) {
            int subEventId = subEventQuery.value("id").toInt();
            QString subName = subEventQuery.value("sub_event_name").toString();
            QString subLocation = subEventQuery.value("location").toString();
            QString subTime = subEventQuery.value("time").toString();
            QString contact = subEventQuery.value("contact_person").toString();

            // Sub-event frame
            QWidget *subEventWidget = new QWidget();
            QHBoxLayout *subLayout = new QHBoxLayout(subEventWidget);

            QLabel *details = new QLabel(subName + "\nLocation: " + subLocation + "\nTime: " + subTime + "\nContact: " + contact);

            QPushButton *bookBtn = new QPushButton("Book");
            bookBtn->setFixedWidth(100);
            bookBtn->setStyleSheet("background-color: #0078D7; color: white; padding: 5px; border-radius: 4px;");

            // Check if user has already booked this sub-event
            bool alreadyBooked = false;
            if (this->currentUserId != -1) {
                QSqlQuery checkBooked;
                // Use 'id' column for user_id based on your database schema
                checkBooked.prepare("SELECT COUNT(*) FROM booking WHERE id = :user_id AND subevent_id = :subevent_id");
                checkBooked.bindValue(":user_id", this->currentUserId);
                checkBooked.bindValue(":subevent_id", subEventId);
                if (checkBooked.exec() && checkBooked.next() && checkBooked.value(0).toInt() > 0) {
                    alreadyBooked = true;
                }
            }

            if (alreadyBooked) {
                bookBtn->setText("Booked");
                bookBtn->setEnabled(false);
                bookBtn->setStyleSheet("background-color: gray; color: white; padding: 5px; border-radius: 4px;");
            }

            // Booking logic
            connect(bookBtn, &QPushButton::clicked, this, [this, subEventId, bookBtn]() {
                qDebug() << "=== EventDetailPage Booking Button Clicked ===";
                qDebug() << "Using userId:" << this->currentUserId;
                qDebug() << "SubEventId:" << subEventId;
                qDebug() << "CurrentEventId:" << currentEventId;

                if (currentUserId == -1) {
                    QMessageBox::warning(this, "Not Logged In", "Please log in to book this sub-event.");
                    return;
                }

                // Check for duplicate booking
                QSqlQuery checkQuery;
                // Use 'id' column for user_id based on your database schema
                checkQuery.prepare("SELECT COUNT(*) FROM booking WHERE id = :user_id AND subevent_id = :subevent_id");
                checkQuery.bindValue(":user_id", currentUserId);
                checkQuery.bindValue(":subevent_id", subEventId);

                if (!checkQuery.exec()) {
                    qDebug() << "Check query failed:" << checkQuery.lastError().text();
                    QMessageBox::critical(this, "Error", "Failed to check existing booking: " + checkQuery.lastError().text());
                    return;
                }

                checkQuery.next();
                if (checkQuery.value(0).toInt() > 0) {
                    QMessageBox::warning(this, "Already Booked", "You have already booked this sub-event.");
                    return;
                }

                // Validate foreign keys exist
                QSqlQuery validateUser;
                validateUser.prepare("SELECT COUNT(*) FROM users WHERE id = :uid");
                validateUser.bindValue(":uid", this->currentUserId);
                if (validateUser.exec() && validateUser.next()) {
                    qDebug() << "User exists in database:" << (validateUser.value(0).toInt() > 0);
                    if (validateUser.value(0).toInt() == 0) {
                        QMessageBox::critical(this, "Error", "User ID does not exist in database.");
                        return;
                    }
                }

                QSqlQuery validateSubEvent;
                validateSubEvent.prepare("SELECT COUNT(*) FROM places WHERE id = :seid");
                validateSubEvent.bindValue(":seid", subEventId);
                if (validateSubEvent.exec() && validateSubEvent.next()) {
                    qDebug() << "SubEvent exists in database:" << (validateSubEvent.value(0).toInt() > 0);
                    if (validateSubEvent.value(0).toInt() == 0) {
                        QMessageBox::critical(this, "Error", "Sub-event ID does not exist in database.");
                        return;
                    }
                }

                // Insert booking
                QSqlQuery bookingQuery;
                // Use 'id' column for user_id based on your database schema
                bookingQuery.prepare("INSERT INTO booking (id, event_id, subevent_id) "
                                     "VALUES (:user_id, :event_id, :subevent_id)");
                bookingQuery.bindValue(":user_id", currentUserId);
                bookingQuery.bindValue(":event_id", currentEventId);
                bookingQuery.bindValue(":subevent_id", subEventId);

                qDebug() << "=== EventDetailPage Insert Booking Query Debug ===";
                qDebug() << "Query:" << bookingQuery.lastQuery();
                qDebug() << "Values - userId:" << currentUserId << "eventId:" << currentEventId << "subEventId:" << subEventId;

                if (bookingQuery.exec()) {
                    qDebug() << "Booking SUCCESS in EventDetailPage!";
                    QMessageBox::information(this, "Success", "Sub-event booked successfully.");
                    bookBtn->setText("Booked");
                    bookBtn->setEnabled(false);
                    bookBtn->setStyleSheet("background-color: gray; color: white; padding: 5px; border-radius: 4px;");
                } else {
                    qDebug() << "Booking FAILED in EventDetailPage!";
                    qDebug() << "Error:" << bookingQuery.lastError().text();
                    qDebug() << "Error type:" << bookingQuery.lastError().type();
                    qDebug() << "Database error:" << bookingQuery.lastError().databaseText();
                    qDebug() << "Driver error:" << bookingQuery.lastError().driverText();
                    QMessageBox::critical(this, "Booking Failed", "Could not complete booking: " + bookingQuery.lastError().text());
                }
            });

            subLayout->addWidget(details);
            subLayout->addStretch();
            subLayout->addWidget(bookBtn);
            subEventWidget->setLayout(subLayout);

            subEventLayout->addWidget(subEventWidget);
        }
    } else {
        QMessageBox::critical(this, "Error", "Failed to load sub-events: " + subEventQuery.lastError().text());
    }
}
