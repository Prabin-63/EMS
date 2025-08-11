#include "helpcenter.h"
#include "ui_helpcenter.h"
#include<profile.h>
#include<dashboard.h>
#include<scheduling.h>
#include <booking.h>

HelpCenter::HelpCenter(dashboard *dashPtr,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HelpCenter),
    dash(dashPtr),
dashboardWindow(nullptr)
{
    ui->setupUi(this);
    this->showMaximized();
}

HelpCenter::~HelpCenter()
{
    delete ui;
}

void HelpCenter::on_Profile_2_clicked()
{
    prof=new Profile(dash);
    prof->show();
    this->close();
}


void HelpCenter::on_Booking_clicked()
{
    book=new Booking(dash);
    book->show();
    this->close();
}


void HelpCenter::on_Managing_clicked()
{
    schedule=new scheduling(dash);
    schedule->show();
    this->close();
}



void HelpCenter::on_dashboard_2_clicked()
{
    int userId = SessionManager::instance().getUserId();
    if (userId == -1) {
        QMessageBox::critical(this, "Session Error", "No user is logged in.");
        return;
    }

    if (!dashboardWindow) {
        dashboardWindow = new dashboard(userId);
    }

    dashboardWindow->show();
    this->hide();
}


