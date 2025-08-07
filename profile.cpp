#include "profile.h"
#include "ui_profile.h"
#include "dashboard.h"

#include <QSqlTableModel>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlRecord>
#include<booking.h>
#include<scheduling.h>
#include<helpcenter.h>
Profile::Profile(dashboard *dash, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profile),
    dash(dash),
    userModel(nullptr)
{
    ui->setupUi(this);
    this->showMaximized();
    loadUsers();
}

Profile::~Profile()
{
    delete ui;
    if (userModel) {
        delete userModel;
    }
}

void Profile::on_dashboard_2_clicked()
{
    dash->show();
    this->close();
}

void Profile::loadUsers()
{
    if (userModel) {
        delete userModel;
    }

    userModel = new QSqlTableModel(this);
    userModel->setTable("users");
    userModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    userModel->select();


    userModel->setHeaderData(0, Qt::Horizontal, "ID");
    userModel->setHeaderData(1, Qt::Horizontal, "Name");
    userModel->setHeaderData(2, Qt::Horizontal, "Email");
    userModel->setHeaderData(3, Qt::Horizontal, "Username");
    userModel->setHeaderData(5, Qt::Horizontal, "Phone");

    ui->userview->setModel(userModel);
    ui->userview->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->userview->hideColumn(4);

    ui->userview->resizeColumnsToContents();
    ui->userview->horizontalHeader()->setStretchLastSection(true);

    ui->userview->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);



    ui->userview->setAlternatingRowColors(true);
    ui->userview->setStyleSheet(
        "QTableView {"
        "   background: white;"
        "   alternate-background-color: #eaf3fa;"
        "   gridline-color: #dcdcdc;"
        "   font-size: 14px;"
        "}"
        "QHeaderView::section {"
        "   background-color: #3498db;"
        "   color: white;"
        "   padding: 6px;"
        "   border: none;"
        "   font-weight: bold;"
        "}"
        "QTableView::item:selected {"
        "   background-color: #3399FF;"
        "   color: white;"
        "}"
        "QTableView::item:hover {"
        "   background-color: #B3E0FF;"
        "}"
        );
}

void Profile::on_Booking_clicked()
{
    book=new Booking(dash);
    book->show();
    this->close();

}


void Profile::on_Managing_clicked()
{
    schedule=new scheduling(dash);
    schedule->show();
    this->close();
}


void Profile::on_Help_Center_clicked()
{
    help=new HelpCenter(dash);
    help->show();
    this->close();
}

