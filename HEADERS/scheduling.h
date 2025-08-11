#ifndef SCHEDULING_H
#define SCHEDULING_H

#include <QMainWindow>

class placemanage;
class dashboard;
class Profile;
class Booking;
class HelpCenter;

namespace Ui {
class scheduling;
}

class scheduling : public QMainWindow
{
    Q_OBJECT

public:
    explicit scheduling(dashboard *dash, QWidget *parent = nullptr);
    ~scheduling();

private slots:
    void on_Gotodash_subevent_clicked();
    void on_dashboard_2_clicked();
    void on_Profile_clicked();
    void on_Booking_clicked();
    void on_Help_Center_clicked();

private:
    Ui::scheduling *ui;

    placemanage *place_manage;
    dashboard *dashboardWindow;
    dashboard *dash;
    Profile *prof;
    Booking *book;
    HelpCenter *help;
};

#endif // SCHEDULING_H
