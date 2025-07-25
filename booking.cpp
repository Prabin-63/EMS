#include "booking.h"
#include "ui_booking.h"
#include <QSqlRelation>
#include <QSqlRelationalDelegate>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

Booking::Booking(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Booking),
    bookingModel(nullptr)
{
    ui->setupUi(this);
    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not open!");
        return;
    }
    loadBookingTable();
    // Make the table strictly read-only
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
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

    // Show readable names instead of IDs
    bookingModel->setRelation(1, QSqlRelation("users", "id", "name"));
    bookingModel->setRelation(2, QSqlRelation("events", "id", "name"));
    bookingModel->setRelation(3, QSqlRelation("places", "id", "sub_event_name"));
    bookingModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    bookingModel->select();

    // Column labels
    bookingModel->setHeaderData(0, Qt::Horizontal, "Booking ID");
    bookingModel->setHeaderData(1, Qt::Horizontal, "User");
    bookingModel->setHeaderData(2, Qt::Horizontal, "Event");
    bookingModel->setHeaderData(3, Qt::Horizontal, "Sub-Event");
    bookingModel->setHeaderData(4, Qt::Horizontal, "Booking Time");

    ui->tableView->setModel(bookingModel);
    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));
    ui->tableView->resizeColumnsToContents();
}

