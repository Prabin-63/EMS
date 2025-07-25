#ifndef DASHBOARD_H
#define DASHBOARD_H
#include"database.h"
#include "profile.h"


#include <QMainWindow>
#include <QSqlQuery>
#include<addvolunteername.h>
#include<viewvolunteer.h>
#include <QTableWidget>

class login;
namespace Ui {
class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit dashboard(int userId, login *loginWindow = nullptr, QWidget *parent = nullptr);


    ~dashboard();

private slots:
    void on_Managing_clicked();
    void on_Profile_clicked();

    void on_Volunteer_clicked();
    void onEventChanged(int index);




    void on_viewvolunteer_clicked();

    void on_Logout_clicked();

private:
    Ui::dashboard *ui;
    class scheduling *schedulingWindow;
    class profile *pt;
    AddVolunteerName *addvolunteername;
    ViewVolunteer *viewDialog;

    login *loginWindow;


    int userId;
    int eventId;

    void loadUserEvents();
    void loadEventData(int eventId);
    void updateVolunteerSummary(int eventId);
    void updateSubeventSummary(int eventId);
    void ViewVolunteersWidget();
    void createVolunteerLineChart(int eventId);
    void loadVolunteerNames(int eventId);
    void loadSubeventTable(int eventId);




};

#endif // DASHBOARD_H
