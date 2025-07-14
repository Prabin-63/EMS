#ifndef SCHEDULING_H
#define SCHEDULING_H

#include <QMainWindow>
#include<placemanage.h>


namespace Ui {

class scheduling;
}

class scheduling : public QMainWindow
{
    Q_OBJECT

public:
    explicit scheduling(QWidget *parent = nullptr);
    ~scheduling();
private slots:
    void on_Gotodash_subevent_clicked();



private:
    Ui::scheduling *ui;
    placemanage *place_manage;

};

#endif // SCHEDULING_H
