#include "placemanage.h"
#include "ui_placemanage.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QSpinBox>
#include <QScrollArea>
#include <database.h>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include<addvolunteername.h>

placemanage::placemanage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::placemanage)
{
    ui->setupUi(this);

    if (!ui->subEventContainer->layout()) {
        QVBoxLayout *layout = new QVBoxLayout(ui->subEventContainer);
        ui->subEventContainer->setLayout(layout);
    }

    connect(ui->generateButton, &QPushButton::clicked, this, &placemanage::on_generateButton_clicked);
    connect(ui->addSubEventButton, &QPushButton::clicked, this, &placemanage::on_addSubEventButton_clicked);

}

placemanage::~placemanage()
{
    delete ui;
}

// Helper function to style a QLineEdit
void placemanage::styleLineEdit(QLineEdit* lineEdit, const QString& placeholder)
{
    lineEdit->setPlaceholderText(placeholder);
    lineEdit->setStyleSheet("color: white; background-color: #2e2e2e; border: 1px solid gray;");

    QPalette palette = lineEdit->palette();
    palette.setColor(QPalette::PlaceholderText, Qt::gray);
    lineEdit->setPalette(palette);
}

void placemanage::on_generateButton_clicked()
{
    auto layout = ui->subEventContainer->layout();
    if (!layout) {
        QMessageBox::critical(this, "Error", "No layout set on subEventContainer");
        return;
    }

    QLayoutItem *child;
    while ((child = layout->takeAt(0)) != nullptr) {
        if (child->widget()) {
            delete child->widget();
        }
        delete child;
    }

    bool ok = false;
    int count = ui->subEventCountInput->text().toInt(&ok);
    if (!ok || count <= 0) {
        QMessageBox::warning(this, "Input Error", "Enter a valid positive number.");
        return;
    }

    QVBoxLayout* containerLayout = qobject_cast<QVBoxLayout*>(layout);
    if (!containerLayout) {
        QMessageBox::critical(this, "Error", "subEventContainer layout is not a QVBoxLayout");
        return;
    }

    for (int i = 0; i < count; ++i) {
        QHBoxLayout* rowLayout = new QHBoxLayout();

        QLineEdit* eventName = new QLineEdit();
        styleLineEdit(eventName, "Sub Event Name");

        QLineEdit* location = new QLineEdit();
        styleLineEdit(location, "Location");

        QLineEdit* time = new QLineEdit();
        styleLineEdit(time, "Time");

        QLineEdit* contact = new QLineEdit();
        styleLineEdit(contact, "Contact Person");

        QLineEdit* total = new QLineEdit();
        styleLineEdit(total, "Total Number of Volunteers");

        rowLayout->addWidget(eventName);
        rowLayout->addWidget(location);
        rowLayout->addWidget(time);
        rowLayout->addWidget(contact);
        rowLayout->addWidget(total);

        QWidget* rowWidget = new QWidget();
        rowWidget->setLayout(rowLayout);

        containerLayout->addWidget(rowWidget);
    }
}

void placemanage::on_addSubEventButton_clicked()
{
    if (eventId == -1) {
        QMessageBox::warning(this, "Missing Event ID", "Event ID is not set.");
        return;
    }

    auto layout = ui->subEventContainer->layout();
    if (!layout) return;

    QVBoxLayout* containerLayout = qobject_cast<QVBoxLayout*>(layout);
    if (!containerLayout) return;

    QSqlQuery query;
    int successCount = 0;

    for (int i = 0; i < containerLayout->count(); ++i) {
        QWidget* rowWidget = containerLayout->itemAt(i)->widget();
        if (!rowWidget) continue;

        QList<QLineEdit*> edits = rowWidget->findChildren<QLineEdit*>();
        if (edits.size() < 4) continue;

        QString subEventName = edits[0]->text().trimmed();
        QString location = edits[1]->text().trimmed();
        QString time = edits[2]->text().trimmed();
        QString contact = edits[3]->text().trimmed();

        if (subEventName.isEmpty() || location.isEmpty() || time.isEmpty() || contact.isEmpty()) {
            QMessageBox::warning(this, "Input Error", QString("Please fill all fields in row %1").arg(i + 1));
            return;
        }

        query.prepare("INSERT INTO places(event_id, sub_event_name, location, time, contact_person) "
                      "VALUES (?, ?, ?, ?, ?)");
        query.addBindValue(eventId);
        query.addBindValue(subEventName);
        query.addBindValue(location);
        query.addBindValue(time);
        query.addBindValue(contact);

        if (!query.exec()) {
            qDebug() << "Insert failed for row" << i << ":" << query.lastError().text();
            continue;
        }
        successCount++;
    }

    if (successCount > 0){
        QMessageBox::information(this, "Success", QString("%1 place(s) saved successfully.").arg(successCount));
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Manage Volunteers", "Do you want to manage your volunteers?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        addvolunteername=new AddVolunteerName(this);
        addvolunteername->show();

    }

    else
        QMessageBox::warning(this, "No Data Saved", "No valid place data to save.");
    }
}

void placemanage::on_addOneSubEventButton_clicked()
{
    auto layout = ui->subEventContainer->layout();
    if (!layout) return;

    QVBoxLayout* containerLayout = qobject_cast<QVBoxLayout*>(layout);
    if (!containerLayout) return;

    QHBoxLayout* rowLayout = new QHBoxLayout();

    QLineEdit* eventName = new QLineEdit();
    styleLineEdit(eventName, "Sub Event Name");

    QLineEdit* location = new QLineEdit();
    styleLineEdit(location, "Location");

    QLineEdit* time = new QLineEdit();
    styleLineEdit(time, "Time");

    QLineEdit* contact = new QLineEdit();
    styleLineEdit(contact, "Contact Person");

    QLineEdit* total = new QLineEdit();
    styleLineEdit(total, "Total Number of Volunteers");

    rowLayout->addWidget(eventName);
    rowLayout->addWidget(location);
    rowLayout->addWidget(time);
    rowLayout->addWidget(contact);
    rowLayout->addWidget(total);


    QWidget* rowWidget = new QWidget();
    rowWidget->setLayout(rowLayout);

    containerLayout->addWidget(rowWidget);
}

void placemanage::on_removeSubEventButton_clicked()
{
    auto layout = ui->subEventContainer->layout();
    if (!layout) return;

    QVBoxLayout* containerLayout = qobject_cast<QVBoxLayout*>(layout);
    if (!containerLayout) return;

    int count = containerLayout->count();
    if (count == 0) {
        QMessageBox::information(this, "Remove", "No more sub events to remove.");
        return;
    }

    QLayoutItem* lastItem = containerLayout->takeAt(count - 1);
    if (lastItem) {
        if (QWidget* widget = lastItem->widget()) {
            widget->deleteLater();
        }
        delete lastItem;
    }
}

