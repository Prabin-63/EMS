#include "booking.h"
#include "ui_booking.h"
#include <QSqlRelation>
#include <QSqlRelationalDelegate>
#include <QSqlError>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextStream>
#include <QDebug>
#include<profile.h>
#include<scheduling.h>

#include<helpcenter.h>

Booking::Booking(QWidget *parent) :
     QMainWindow(parent),
    ui(new Ui::Booking),
    bookingModel(nullptr)
{
    ui->setupUi(this);

    // Style the whole widget
    this->setStyleSheet("background-color: #fdfdfd;");

    // Style table
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->setStyleSheet(
        "QTableView {"
        "   background: #373737;"
        "   alternate-background-color: #393E46;"
        "   gridline-color: #dcdcdc;"
        "   font-size: 14px;"
        "color:white;"
        "}"
        "QHeaderView::section {"
        "   background-color: #1B3C53;"
        "   color: white;"
        "   padding: 6px;"
        "   border: none;"
        "   font-weight: bold;"
        "}"
        );
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    // Connect buttons
    connect(ui->btnRefresh, &QPushButton::clicked, this, &Booking::refreshTable);
    connect(ui->btnExport, &QPushButton::clicked, this, &Booking::exportToCSV);

    // Load bookings initially
    loadBookingTable();

    this->showMaximized();
}

Booking::~Booking()
{
    delete ui;
}

void Booking::loadBookingTable()
{
    if (bookingModel) {
        delete bookingModel;
    }

    bookingModel = new QSqlRelationalTableModel(this);
    bookingModel->setTable("booking");

    // Replace IDs with readable names
    bookingModel->setRelation(1, QSqlRelation("users", "id", "name"));
    bookingModel->setRelation(2, QSqlRelation("events", "id", "name"));
    bookingModel->setRelation(3, QSqlRelation("places", "id", "sub_event_name"));
    bookingModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    bookingModel->select();

    // Set column headers
    bookingModel->setHeaderData(0, Qt::Horizontal, "Booking ID");
    bookingModel->setHeaderData(1, Qt::Horizontal, "User");
    bookingModel->setHeaderData(2, Qt::Horizontal, "Event");
    bookingModel->setHeaderData(3, Qt::Horizontal, "Sub-Event");
    bookingModel->setHeaderData(4, Qt::Horizontal, "Booking Time");

    ui->tableView->setModel(bookingModel);
    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);  // Read-only
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

void Booking::refreshTable()
{
    if (bookingModel) {
        bookingModel->select();  // Reload data
    }
}

void Booking::exportToCSV()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Export Bookings", "", "CSV Files (*.csv)");
    if (fileName.isEmpty())
        return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(this, "Error", "Unable to save file.");
        return;
    }

    QTextStream out(&file);

    // Write headers
    for (int col = 0; col < bookingModel->columnCount(); ++col) {
        out << bookingModel->headerData(col, Qt::Horizontal).toString();
        if (col < bookingModel->columnCount() - 1)
            out << ",";
    }
    out << "\n";

    // Write data
    for (int row = 0; row < bookingModel->rowCount(); ++row) {
        for (int col = 0; col < bookingModel->columnCount(); ++col) {
            out << bookingModel->data(bookingModel->index(row, col)).toString();
            if (col < bookingModel->columnCount() - 1)
                out << ",";
        }
        out << "\n";
    }

    file.close();
    QMessageBox::information(this, "Export Complete", "Bookings exported successfully!");
}

void Booking::on_Profile_clicked()
{
    prof=new Profile(dash);
    prof->show();
    this->close();
}


void Booking::on_Managing_clicked()
{
    schedule= new scheduling(dash);
    schedule->show();
    this->close();

}





void Booking::on_Help_Center_clicked()
{
    help =new HelpCenter();
    help->show();
    this->close();
}


void Booking::on_dashboard_2_clicked()
{
    int userId = SessionManager::instance().getUserId();
    if (userId == -1) {
        QMessageBox::critical(this, "Session Error", "No user is logged in.");
        return;
    }

    if (!dashboardWindow) {
        dashboardWindow = new dashboard(userId);
    }

    dashboardWindow->show();
    this->hide();
}

