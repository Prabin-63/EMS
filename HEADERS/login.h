#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "signup.h"
#include "dashboard.h"
#include "userdashboard.h"
#include<userdashboard.h>
class dashboard;
class UserDashboard;

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_Gotosignup_clicked();
    void on_Gotodash_clicked();

private:
    Ui::login *ui;
    signup* sign_up;
    dashboard *dash;
    UserDashboard *udash;

    QString hashPassword(const QString &password);
};

#endif // LOGIN_H
