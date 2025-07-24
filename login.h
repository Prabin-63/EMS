#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "signup.h"
#include "dashboard.h"
#include "userdashboard.h"

namespace Ui {
class login;  // lowercase 'login' to match ui_login.h
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
    Ui::login *ui;  // match lowercase here
    signup* sign_up;
    dashboard *dash;
    userdashboard *udash;
    QString hashPassword(const QString &password);
};

#endif // LOGIN_H
