#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QCryptographicHash>
#include <QSqlQuery>
#include <QSqlError>
#include "sessionmanager.h"
#include "dashboard.h"
#include "signup.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

}

login::~login()
{
    delete ui;
}

QString login::hashPassword(const QString &pass)
{
    return QString(QCryptographicHash::hash(pass.toUtf8(), QCryptographicHash::Sha256).toHex());
}

void login::on_Gotodash_clicked()
{
   if{
    QString email = ui->Emailid->text().trimmed();
    QString pass = ui->Password->text();

    if(email.isEmpty() || pass.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Enter email and password");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT id FROM users WHERE email = :email AND password = :pass");
    query.bindValue(":email", email);
    query.bindValue(":pass", hashPassword(pass));

    if(!query.exec()) {
        QMessageBox::critical(this, "DB Error", query.lastError().text());
        return;
    }

    if(query.next()) {
        int userId = query.value(0).toInt();
        SessionManager::instance().setUserId(userId);

        dashboard *dash = new dashboard();
        dash->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Login Failed", "Incorrect email or password");
    }
   }
   else
   {
       QString email = ui->Emailid->text().trimmed();
       QString pass = ui->Password->text();
       if(email == admin && pass == Admin  )
       {
           dashboard *dash = new dashboard();
           dash->show();
           this->close();
       }
       else
       {
           QMessageBox::warning(this, "Login Failed", "Invalid email or password.");
       }
   }
}

void login::on_Gotosignup_clicked()
{
    signup *signUpWindow = new signup(this);
    signUpWindow->show();
}
