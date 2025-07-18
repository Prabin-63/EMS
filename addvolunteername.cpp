#include "addvolunteername.h"
#include "ui_addvolunteername.h"
#include "database.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

AddVolunteerName::AddVolunteerName(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddVolunteerName)
{
    ui->setupUi(this);

    ui->scrollArea->setWidget(ui->scrollAreaWidgetContents);
    ui->scrollArea->setWidgetResizable(true);

    volunteerLayout = new QVBoxLayout();
    ui->scrollAreaWidgetContents->setLayout(volunteerLayout);

    // Load events into combo box
    loadEvents();


}

AddVolunteerName::~AddVolunteerName()
{
    delete ui;
}

void AddVolunteerName::loadEvents()
{
    ui->eventComboBox->clear();

    QSqlQuery query;
    if (!query.exec("SELECT id, name FROM events ORDER BY name")) {
        qDebug() << "Failed to load events:" << query.lastError().text();
        return;
    }

    // Add a placeholder item
    ui->eventComboBox->addItem("-- Select Event --", QVariant(-1));

    while (query.next()) {
        int id = query.value(0).toInt();
        QString name = query.value(1).toString();
        ui->eventComboBox->addItem(name, id);
    }
}

