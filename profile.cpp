#include "profile.h"
#include "ui_profile.h"
#include "database.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QInputDialog>

profile::profile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::profile)
{
    ui->setupUi(this);

    // Setup table columns
    ui->tableWidget->setColumnCount(3);
    QStringList headers = {"User ID", "Name", "Venue"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    loadAllEvents();  // Load all events initially
}

profile::~profile()
{
    delete ui;
}

void profile::loadAllEvents()
{
    ui->tableWidget->setRowCount(0);

    QSqlQuery query("SELECT user_id, name, venue FROM events ORDER BY venue ASC");
    if (query.lastError().isValid()) {
        QMessageBox::critical(this, "Error", query.lastError().text());
        return;
    }

    populateTable(query);
}

void profile::filterEvents(const QString &filterColumn, const QString &filterText)
{
    ui->tableWidget->setRowCount(0);

    QSqlQuery query;
    query.prepare(QString("SELECT user_id, name, venue FROM events WHERE %1 LIKE ? ORDER BY %1 ASC").arg(filterColumn));
    query.addBindValue("%" + filterText + "%");

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", query.lastError().text());
        return;
    }

    populateTable(query);

    if (ui->tableWidget->rowCount() == 0) {
        QMessageBox::information(this, "No Results", "No matching events found.");
    }
}

void profile::populateTable(QSqlQuery &query)
{
    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value(2).toString()));
        row++;
    }
}

// Slot for the filter button click
void profile::on_filterButton_clicked()
{
    QStringList options = {"name", "venue", "Show All"};
    bool ok;
    QString choice = QInputDialog::getItem(this, "Choose Filter", "Filter by:", options, 0, false, &ok);
    if (!ok) return;

    if (choice == "Show All") {
        loadAllEvents();
        return;
    }

    QString text = QInputDialog::getText(this, "Filter Text", "Enter text to filter by:", QLineEdit::Normal, "", &ok);
    if (!ok || text.isEmpty()) return;

    filterEvents(choice, text);
}
