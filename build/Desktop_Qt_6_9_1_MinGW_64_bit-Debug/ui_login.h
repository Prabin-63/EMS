/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Emailid;
    QLineEdit *Password;
    QPushButton *Gotodash;
    QLabel *label_3;
    QPushButton *Gotosignup;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(800, 500);
        login->setMinimumSize(QSize(800, 500));
        login->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 791, 461));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/USER LOGIN.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(420, 80, 201, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic")});
        font.setPointSize(17);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Emailid = new QLineEdit(centralwidget);
        Emailid->setObjectName("Emailid");
        Emailid->setGeometry(QRect(380, 180, 301, 41));
        QFont font1;
        font1.setPointSize(10);
        Emailid->setFont(font1);
        Emailid->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding-left:20px;\n"
"	\n"
"\n"
"}"));
        Password = new QLineEdit(centralwidget);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(380, 240, 301, 41));
        Password->setFont(font1);
        Password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding-left:20px;\n"
"}"));
        Gotodash = new QPushButton(centralwidget);
        Gotodash->setObjectName("Gotodash");
        Gotodash->setGeometry(QRect(440, 340, 181, 41));
        QFont font2;
        font2.setPointSize(13);
        Gotodash->setFont(font2);
        Gotodash->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(100, 100, 100);\n"
"border:none;\n"
"border-radius:20px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(193, 90, 233);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(410, 300, 271, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Yu Gothic")});
        font3.setPointSize(10);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        Gotosignup = new QPushButton(centralwidget);
        Gotosignup->setObjectName("Gotosignup");
        Gotosignup->setGeometry(QRect(560, 300, 101, 31));
        Gotosignup->setFont(font3);
        Gotosignup->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(135, 229, 255);\n"
"background:transparent;\n"
"border:none;\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(350, 190, 21, 21));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-email-30.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(350, 250, 21, 21));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-password-50.png")));
        label_5->setScaledContents(true);
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("login", "USER LOGIN", nullptr));
        Emailid->setPlaceholderText(QCoreApplication::translate("login", "Emai ID", nullptr));
        Password->setPlaceholderText(QCoreApplication::translate("login", "Password", nullptr));
        Gotodash->setText(QCoreApplication::translate("login", "LOG IN", nullptr));
        label_3->setText(QCoreApplication::translate("login", "Haven't you signed up yet?", nullptr));
        Gotosignup->setText(QCoreApplication::translate("login", "Sign up", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
