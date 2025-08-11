#ifndef BOOKING_H
#define BOOKING_H

#include <QMainWindow>
#include <QSqlRelationalTableModel>
#include<profile.h>
#include<dashboard.h>
#include<scheduling.h>

#include<helpcenter.h>
#include<sessionmanager.h>

class Profile;
class dashboard;
class scheduling;
class HelpCenter;


namespace Ui {
class Booking;
}

class Booking : public QMainWindow
{
    Q_OBJECT

public:
    explicit Booking(dashboard *dashPtr,QWidget *parent = nullptr);
    ~Booking();

private slots:
    void loadBookingTable();
    void refreshTable();
    void exportToCSV();

    void on_Profile_clicked();

    void on_Managing_clicked();



    void on_Help_Center_clicked();

    void on_dashboard_2_clicked();

private:
    Ui::Booking *ui;
    QSqlRelationalTableModel *bookingModel;
    Profile *prof;
    dashboard *dash;
    scheduling *schedule;

    HelpCenter *help;
    dashboard *dashboardWindow ;
};

#endif // BOOKING_H
