#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>
#include <QCryptographicHash>
#include <QDebug>
#include "database.h"
#include <QRegularExpression>

signup::signup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
    connect(ui->onSignupClicked, &QPushButton::clicked, this, &signup::onSignupClicked);
}

signup::~signup()
{
    delete ui;
}

QString signup::hashPassword(const QString &password)
{
    QByteArray hash = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);
    return hash.toHex();
}
void signup::onSignupClicked()
{
    QString name = ui->Fullname->text();
    QString email = ui->Emailid->text();
    QString phone = ui->Contact->text();
    QString password = ui->Password->text();

    if (name.isEmpty() || email.isEmpty() || phone.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }
    QRegularExpression  nameRegex("^[A-Za-z\\s'-]{2,50}$");
    if (!nameRegex.match(name).hasMatch()) {
        QMessageBox::warning(this, "Invalid Name", "Please enter a valid name.");
    }

    QRegularExpression  emailRegex("^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$");
    if (!emailRegex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Invalid Email", "Please enter a valid email address.");
    }

    QRegularExpression phoneRegex("^(98|97)\\d{8}$");
    if (!phoneRegex.match(phone).hasMatch()) {
        QMessageBox::warning(this, "Input Error", "Phone number must start with 98 or 97 and contain exactly 10 digits.");
        return;
    }

    QString hashedPassword = hashPassword(password);

    QSqlQuery query;
    query.prepare("INSERT INTO users (name, email, username, password, phone) "
                  "VALUES (?, ?, ?, ?, ?)");
    query.addBindValue(name);
    query.addBindValue(email);
    query.addBindValue(email);
    query.addBindValue(hashedPassword);
    query.addBindValue(phone);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Account created successfully!");
        this->close();
    } else {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
    }
      query.finish();
}
