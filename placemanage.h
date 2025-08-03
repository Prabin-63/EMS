#ifndef PLACEMANAGE_H
#define PLACEMANAGE_H

#include <QMainWindow>
#include <QLineEdit>
#include<dashboard.h>
#include<profile.h>
#include<booking.h>
#include<helpcenter.h>

class HelpCenter;

class Booking;
class dashboard;
class Profile;

namespace Ui {
class placemanage;
}

class dashboard;

class placemanage : public QMainWindow
{
    Q_OBJECT

public:
    explicit placemanage(int userId, int eventId, QWidget *parent = nullptr);
    ~placemanage();

private slots:
    void on_generateButton_clicked();
    void on_addSubEventButton_clicked();
    void on_addOneSubEventButton_clicked();
    void on_removeSubEventButton_clicked();

    void on_dashboard_2_clicked();

    void on_Profile_2_clicked();

    void on_Booking_clicked();

    void on_Help_Center_clicked();

private:
    Ui::placemanage *ui;
    int userId;
    int eventId;
    dashboard* dash = nullptr; // combined declaration & initialization
    bool isInitialized;
    Profile *prof;
    Booking *book;
    HelpCenter *help;

    void styleLineEdit(QLineEdit* lineEdit, const QString& placeholder);
};

#endif // PLACEMANAGE_H
