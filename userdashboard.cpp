#include "userdashboard.h"
#include "ui_userdashboard.h"
#include "sessionmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>


userdashboard::userdashboard(int userId, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::userdashboard),
    userId(userId)  // store userId

{
    ui->setupUi(this);

// Load events when dashboard opens
loadUserEvents();

// Connect combo box selection to load event details
    connect(ui->eventComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
          this, &userdashboard::onEventChanged);

}
userdashboard::~userdashboard()
{
    delete ui;
}
void userdashboard::onEventChanged(int index)
{
    int selectedId = ui->eventComboBox->itemData(index).toInt();

    if (selectedId == -1) {
        eventId = -1;
        ui->statusbar->clearMessage();
        return;
    }

    eventId = selectedId;
    qDebug() << "Selected event ID:" << eventId;
}
void userdashboard::loadUserEvents()
{
    ui->eventComboBox->clear();

    QSqlQuery query;
    query.prepare("SELECT id, name FROM events");

    if (query.exec()) {
        ui->eventComboBox->addItem("Select an Event", -1);
        while (query.next()) {
            int id = query.value(0).toInt();
            QString name = query.value(1).toString();
            ui->eventComboBox->addItem(name, id);
        }
    } else {
        qDebug() << "Failed to load events:" << query.lastError().text();
    }
    query.finish();
}

void userdashboard::loadEventData(int eventId)
{
    QSqlQuery q;
    q.prepare("SELECT name FROM events WHERE id = ?");
    q.addBindValue(eventId);

    if (q.exec() && q.next()) {
        QString eventName = q.value(0).toString();
        ui->statusbar->showMessage("Selected Event: " + eventName);
    } else {
        ui->statusbar->clearMessage();
    }
    q.finish();
}
