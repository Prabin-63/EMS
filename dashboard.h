#ifndef DASHBOARD_H
#define DASHBOARD_H
#include"database.h"
#include "profile.h"
#include<viewvolunteer.h>

#include <QMainWindow>
#include <QSqlQuery>
#include<addvolunteername.h>

namespace Ui {
class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
     explicit dashboard(int userId, QWidget *parent = nullptr);

    ~dashboard();

private slots:
    void on_Managing_clicked();
    void on_Profile_clicked();

    void on_Volunteer_clicked();
    void onEventChanged(int index);


    void on_viewvolunteer_clicked();

private:
    Ui::dashboard *ui;
    class scheduling *schedulingWindow;
    class profile *pt;
    AddVolunteerName *addvolunteername;
    ViewVolunteer *viewWindow;


    int userId;
    int eventId;

    void loadUserEvents();
    void loadEventData(int eventId);
    void updateVolunteerSummary(int eventId);
    void updateSubeventSummary(int eventId);
    void ViewVolunteersWidget();
    void createVolunteerLineChart(int eventId);




};

#endif // DASHBOARD_H
