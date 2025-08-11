#ifndef PROFILE_H
#define PROFILE_H

#include <QMainWindow>
#include <QSqlTableModel>
#include<booking.h>
#include<scheduling.h>

#include<helpcenter.h>
class dashboard;
class scheduling;
class HelpCenter;

namespace Ui {
class Profile;
}

class Profile : public QMainWindow
{
    Q_OBJECT

public:
    explicit Profile(dashboard *dash, QWidget *parent = nullptr);
    ~Profile();

private slots:
    void on_dashboard_2_clicked();

    void on_Booking_clicked();

    void on_Managing_clicked();

    void on_Help_Center_clicked();

private:
    Ui::Profile *ui;
    dashboard *dash;
    QSqlTableModel *userModel;
    void loadUsers();
    Booking *book;
    scheduling *schedule;
    HelpCenter *help;
    int userId = -1;
};

#endif // PROFILE_H
