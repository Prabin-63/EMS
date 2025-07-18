#include "dashboard.h"
#include "ui_dashboard.h"
#include "addvolunteername.h"
#include "scheduling.h"
#include"QSqlQuery"
#include"database.h"

dashboard::dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dashboard)
    , schedulingWindow(nullptr)
{
    ui->setupUi(this);

}



dashboard::~dashboard()
{
    delete schedulingWindow;
    delete ui;
}



void dashboard::on_Managing_clicked()
{
    if (!schedulingWindow) {
        schedulingWindow = new scheduling(this);
    }
    schedulingWindow->show();
}

void dashboard::on_Volunteer_clicked()
{
    vt = new AddVolunteerName();
    vt->show();
}

void dashboard::on_Profile_clicked()
{
    pt = new profile();
    pt->show();
}


