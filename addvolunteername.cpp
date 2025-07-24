#include "addvolunteername.h"
#include "ui_addvolunteername.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QRandomGenerator>
#include <algorithm>

AddVolunteerName::AddVolunteerName(int eventId, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddVolunteerName)
    , currentEventId(eventId)
{
    ui->setupUi(this);
    ui->scrollArea->setWidgetResizable(true);
    setupVolunteerFields();
}

AddVolunteerName::~AddVolunteerName()
{
    delete ui;
}

int AddVolunteerName::getTotalVolunteersFromDB()
{
    QSqlQuery query;
    int total = 0;

    query.prepare("SELECT SUM(required_volunteers) FROM places WHERE event_id = :eventId");
    query.bindValue(":eventId", currentEventId);

    if (query.exec()) {
        if (query.next()) {
            total = query.value(0).toInt();
        }
    } else {
        qDebug() << "DB Error: " << query.lastError().text();
    }

    return total;
}

void AddVolunteerName::setupVolunteerFields()
{
    // Create a container widget that holds all QLineEdits
    QWidget *container = new QWidget(this);
    layout = new QVBoxLayout(container);  // Set layout directly on container

    int totalVolunteers = getTotalVolunteersFromDB();

    for (int i = 0; i < totalVolunteers; ++i) {
        QLineEdit *lineEdit = new QLineEdit(this);
        lineEdit->setPlaceholderText(QString("Enter name of volunteer %1").arg(i + 1));
        lineEdit->setStyleSheet("color: white; background-color: grey; padding: 6px; font-size: 16px;");

        layout->addWidget(lineEdit);
        lineEdits.append(lineEdit);
    }

    container->setMinimumHeight(totalVolunteers * 50);  // Ensure scrolling
    container->setLayout(layout);

    ui->scrollArea->setWidget(container);  // Set as scroll area's widget
}

void AddVolunteerName::assignVolunteersToSubevents()
{
    QVector<int> volunteerIds;
    QSqlQuery query;

    // 1. Get unassigned volunteers
    query.prepare("SELECT id FROM volunteers WHERE event_id = :eventId AND assigned_place_id IS NULL");
    query.bindValue(":eventId", currentEventId);
    if (query.exec()) {
        while (query.next()) {
            volunteerIds.append(query.value(0).toInt());
        }
    } else {
        qDebug() << "Error fetching volunteers:" << query.lastError().text();
        return;
    }

    if (volunteerIds.isEmpty()) {
        QMessageBox::information(this, "No Volunteers", "No unassigned volunteers found.");
        return;
    }

    // 2. Shuffle volunteers
    std::shuffle(volunteerIds.begin(), volunteerIds.end(), *QRandomGenerator::global());

    // 3. Get places with volunteer needs
    QVector<QPair<int, int>> places; // <place_id, required_count>
    query.prepare("SELECT id, required_volunteers FROM places WHERE event_id = :eventId");
    query.bindValue(":eventId", currentEventId);
    if (query.exec()) {
        while (query.next()) {
            int placeId = query.value(0).toInt();
            int required = query.value(1).toInt();
            places.append(qMakePair(placeId, required));
        }
    } else {
        qDebug() << "Error fetching places:" << query.lastError().text();
        return;
    }

    // 4. Assign volunteers
    int vIndex = 0;
    QSqlQuery updateQuery;
    for (const auto& place : places) {
        int placeId = place.first;
        int required = place.second;

        for (int i = 0; i < required && vIndex < volunteerIds.size(); ++i) {
            int volunteerId = volunteerIds[vIndex++];

            updateQuery.prepare("UPDATE volunteers SET assigned_place_id = :placeId WHERE id = :volunteerId");
            updateQuery.bindValue(":placeId", placeId);
            updateQuery.bindValue(":volunteerId", volunteerId);

            if (!updateQuery.exec()) {
                qDebug() << "Error assigning volunteer:" << updateQuery.lastError().text();
            }
        }
    }

    QMessageBox::information(this, "Success", "Volunteers assigned randomly to subevents.");
}

void AddVolunteerName::on_Savevolunteers_clicked()
{
    QSqlQuery query;

    for (QLineEdit* lineEdit : lineEdits) {
        QString name = lineEdit->text().trimmed();

        if (!name.isEmpty()) {
            query.prepare("INSERT INTO volunteers (name, event_id) VALUES (:name, :eventId)");
            query.bindValue(":name", name);
            query.bindValue(":eventId", currentEventId);

            if (!query.exec()) {
                qDebug() << "Failed to insert volunteer:" << query.lastError().text();
                QMessageBox::warning(this, "Database Error",
                                     "Could not save volunteer: " + query.lastError().text());
            }
        }
    }

    QMessageBox::information(this, "Success", "Volunteers saved successfully. Now assigning...");
    assignVolunteersToSubevents();
}
