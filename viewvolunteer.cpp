#include "viewvolunteer.h"
#include "ui_viewvolunteer.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QLabel>
#include <QMap>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QHBoxLayout>

ViewVolunteer::ViewVolunteer(int eventId, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewVolunteer)
    , currentEventId(eventId)
{
    ui->setupUi(this);

    qDebug() << "ViewVolunteer opened with eventId =" << currentEventId;

    layout = new QVBoxLayout();
    layout->setAlignment(Qt::AlignTop | Qt::AlignHCenter);


    QHBoxLayout *hLayout = new QHBoxLayout();
    hLayout->addStretch();
    hLayout->addLayout(layout);
    hLayout->addStretch();


    QVBoxLayout *vLayout = new QVBoxLayout();
    vLayout->addStretch();
    vLayout->addLayout(hLayout);
    vLayout->addStretch();


    QWidget *scrollContent = new QWidget();
    scrollContent->setLayout(vLayout);

    QScrollArea *scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);
    scrollArea->setWidget(scrollContent);
    scrollArea->setStyleSheet("background-color: black; border: none;");


    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(scrollArea);

    setLayout(mainLayout);
    loadVolunteersBySubevent();
}

ViewVolunteer::~ViewVolunteer()
{
    delete ui;
}

void ViewVolunteer::loadVolunteersBySubevent()
{
    QSqlQuery debugQuery;


    debugQuery.exec("SELECT id, name, event_id, assigned_place_id FROM volunteers");
    qDebug() << " Volunteers Table:";
    while (debugQuery.next()) {
        qDebug() << "  ID:" << debugQuery.value(0).toInt()
        << "Name:" << debugQuery.value(1).toString()
        << "Event ID:" << debugQuery.value(2).toInt()
        << "Assigned Place ID:" << debugQuery.value(3).toInt();
    }


    debugQuery.exec("SELECT id, sub_event_name, event_id FROM places");
    qDebug() << " Places Table:";
    while (debugQuery.next()) {
        qDebug() << "  ID:" << debugQuery.value(0).toInt()
        << "Sub Event:" << debugQuery.value(1).toString()
        << "Event ID:" << debugQuery.value(2).toInt();
    }


    QMap<QString, QStringList> subeventVolunteers;

    QSqlQuery query;
    query.prepare(R"(
        SELECT p.sub_event_name, v.name
        FROM volunteers v
        JOIN places p ON v.assigned_place_id = p.id
        WHERE v.event_id = :eventId AND p.event_id = :eventId
    )");
    query.bindValue(":eventId", currentEventId);

    if (!query.exec()) {
        qDebug() << "SQL Query Error:" << query.lastError().text();
        return;
    }

    int count = 0;
    while (query.next()) {
        QString subEvent = query.value(0).toString();
        QString volunteerName = query.value(1).toString();
        subeventVolunteers[subEvent].append(volunteerName);
        count++;
    }

    qDebug() << "Total Volunteers Matched:" << count;

    if (count == 0) {
        layout->addWidget(new QLabel(" No volunteer assignments found."));
        return;
    }


    for (auto it = subeventVolunteers.begin(); it != subeventVolunteers.end(); ++it) {
        QString subEvent = it.key();
        QStringList names = it.value();


        QString namesList = names.join("<br>&nbsp;&nbsp;&nbsp;&bull;&nbsp;");
        QString labelText = QString("<b>%1:</b><br>&nbsp;&nbsp;&nbsp;&bull;&nbsp;%2")
                                .arg(subEvent, namesList);

        QLabel *label = new QLabel(labelText);
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);
        label->setStyleSheet("color: white; background-color: #333; padding: 10px; margin: 8px; font-size: 20px; border-radius: 6px;");
        layout->addWidget(label);
    }
}
