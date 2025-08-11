#include "helpcenter.h"
#include "ui_helpcenter.h"
#include<profile.h>
#include<dashboard.h>
#include<scheduling.h>
#include<Booking.h>

HelpCenter::HelpCenter(dashboard *dashPtr,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HelpCenter),
    dash(dashPtr)
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
    dash = new dashboard(userId);
    dash->show();
    this->close();
}

