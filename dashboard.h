#ifndef DASHBOARD_H
#define DASHBOARD_H
#include"database.h"
#include "profile.h"
#include "addvolunteername.h"
#include <QMainWindow>
#include <QSqlQuery>

namespace Ui {
class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();

private slots:
    void on_Managing_clicked();
    void on_Profile_clicked();
    void on_Volunteer_clicked();
private:
    Ui::dashboard *ui;
    class scheduling *schedulingWindow;
    class profile *pt;
    class AddVolunteerName *vt;
};

#endif // DASHBOARD_H
