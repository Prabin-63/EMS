#include "dashboard.h"
#include "ui_dashboard.h"
#include<scheduling.h>

dashboard::dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dashboard)
{
    ui->setupUi(this);
}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::on_Managing_clicked()
{
    if (!schedulingWindow) {
        schedulingWindow = new scheduling(this);
        schedulingWindow->show();
    }
}

