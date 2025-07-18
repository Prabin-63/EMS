#ifndef DASHBOARD_H
#define DASHBOARD_H
#include"database.h"
#include "profile.h"
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
private:
    Ui::dashboard *ui;
    class scheduling *schedulingWindow;
    class profile *pt;
};

#endif // DASHBOARD_H
