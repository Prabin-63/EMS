#ifndef HELPCENTER_H
#define HELPCENTER_H

#include <QMainWindow>
#include<profile.h>
#include<dashboard.h>
#include<scheduling.h>
#include<booking.h>
#include "dashboard.h"
#include <QMessageBox>

class Profile;
class dashboard;
class scheduling;
namespace Ui {
class HelpCenter;
}

class HelpCenter : public QMainWindow
{
    Q_OBJECT

public:
    explicit HelpCenter(dashboard *dashPtr,QWidget *parent = nullptr);
    ~HelpCenter();

private slots:
    void on_Profile_2_clicked();

    void on_Booking_clicked();

    void on_Managing_clicked();

    void on_dashboard_2_clicked();

private:
    Ui::HelpCenter *ui;
    Profile *prof;
    dashboard *dash;
    dashboard *dashboardWindow ;
    scheduling *schedule;
    Booking *book;
     int userId = -1;

};

#endif // HELPCENTER_H
