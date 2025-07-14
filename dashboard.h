#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include<scheduling.h>

namespace Ui {

class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();

private:
    Ui::dashboard *ui;
   scheduling *schedulingWindow = nullptr;

private slots:
    void on_Managing_clicked();

};

#endif // DASHBOARD_H
