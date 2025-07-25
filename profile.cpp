#include "profile.h"
#include "ui_profile.h"
#include "dashboard.h"

Profile::Profile(dashboard *dash, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profile),
    dash(dash)
{
    ui->setupUi(this);
    this->showMaximized();
}

Profile::~Profile()
{
    delete ui;
}

void Profile::on_dashboard_2_clicked()
{
    dash->show();  // Show original dashboard
    this->close(); // Close profile window
}
