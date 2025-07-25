#ifndef BOOKING_H
#define BOOKING_H

#include <QMainWindow>
#include <QSqlRelationalTableModel>

class dashboard;

namespace Ui {
class Booking;
}

class Booking : public QMainWindow
{
    Q_OBJECT

public:
    explicit Booking(QWidget *parent = nullptr);
    ~Booking();

private slots:


private:
    Ui::Booking *ui;
    QSqlRelationalTableModel *bookingModel;

    void loadBookingTable();
};

#endif // BOOKING_H
