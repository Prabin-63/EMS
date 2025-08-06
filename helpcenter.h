#ifndef HELPCENTER_H
#define HELPCENTER_H

#include <QMainWindow>
#include<profile.h>
#include<dashboard.h>
#include<scheduling.h>
#include<booking.h>

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

private:
    Ui::HelpCenter *ui;
    Profile *prof;
    dashboard *dash;
    scheduling *schedule;
    Booking *book;

};

#endif // HELPCENTER_H
