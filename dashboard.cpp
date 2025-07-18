#include "dashboard.h"
#include "ui_dashboard.h"
#include "addvolunteername.h"
#include "scheduling.h"
#include"QSqlQuery"
#include"database.h"

dashboard::dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dashboard)
    , schedulingWindow(nullptr)
{
    ui->setupUi(this);

    if (QSqlDatabase::database().isOpen()) {
        QSqlQuery query;

        if (query.exec("SELECT id, name, email, phone FROM users")) {

            // Set number of columns and column names
            ui->table1->setColumnCount(4);
            QStringList headers = {"ID", "Name", "Email", "Phone"};
            ui->table1->setHorizontalHeaderLabels(headers);

            // Start row count from 0
            int row = 0;
            // Set number of rows based on query result
            query.last();                         // Go to last record
            int totalRows = query.at() + 1;      // Get total number of rows
            query.first();                        // Go back to first record
            ui->table1->setRowCount(totalRows);

            // Loop over all records and add to table
            do {
                ui->table1->setItem(row, 0, new QTableWidgetItem(query.value("id").toString()));
                ui->table1->setItem(row, 1, new QTableWidgetItem(query.value("name").toString()));
                ui->table1->setItem(row, 2, new QTableWidgetItem(query.value("email").toString()));
                ui->table1->setItem(row, 3, new QTableWidgetItem(query.value("phone").toString()));

                row++;  // Move to next row in the table
            } while (query.next());

        } else {
            qDebug() << "Query Error:" << query.lastError().text();
        }
    } else {
        qDebug() << "Database not open!";
    }
}



dashboard::~dashboard()
{
    delete schedulingWindow;
    delete ui;
}



void dashboard::on_Managing_clicked()
{
    if (!schedulingWindow) {
        schedulingWindow = new scheduling(this);
    }
    schedulingWindow->show();
}

void dashboard::on_Volunteer_clicked()
{
    vt = new AddVolunteerName();
    vt->show();
}

void dashboard::on_Profile_clicked()
{
    pt = new profile();
    pt->show();
}


