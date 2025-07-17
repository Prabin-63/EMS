/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_signup
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Fullname;
    QLineEdit *Emailid;
    QLineEdit *Contact;
    QLineEdit *Password;
    QPushButton *onSignupClicked;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(800, 500);
        signup->setMinimumSize(QSize(800, 500));
        signup->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(signup);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 791, 471));
        label->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding-left:20px;\n"
"}"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/USER LOGIN.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 70, 341, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Fullname = new QLineEdit(centralwidget);
        Fullname->setObjectName("Fullname");
        Fullname->setGeometry(QRect(340, 140, 301, 31));
        QFont font1;
        font1.setPointSize(10);
        Fullname->setFont(font1);
        Fullname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding-left:20px;\n"
"}\n"
"QLineEdit:hover{\n"
"	\n"
"	background-color: rgb(0, 0, 74);\n"
"color:white;\n"
"	\n"
"}"));
        Emailid = new QLineEdit(centralwidget);
        Emailid->setObjectName("Emailid");
        Emailid->setGeometry(QRect(340, 180, 301, 31));
        Emailid->setFont(font1);
        Emailid->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding-left:20px;\n"
"}\n"
"QLineEdit:hover{\n"
"	\n"
"	background-color: rgb(0, 0, 74);\n"
"color:white;\n"
"	\n"
"}"));
        Contact = new QLineEdit(centralwidget);
        Contact->setObjectName("Contact");
        Contact->setGeometry(QRect(340, 220, 301, 31));
        Contact->setFont(font1);
        Contact->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding-left:20px;\n"
"}\n"
"QLineEdit:hover{\n"
"	\n"
"	background-color: rgb(0, 0, 74);\n"
"color:white;\n"
"	\n"
"}"));
        Password = new QLineEdit(centralwidget);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(340, 260, 301, 31));
        Password->setFont(font1);
        Password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"padding-left:20px;\n"
"}\n"
"QLineEdit:hover{\n"
"	\n"
"	background-color: rgb(0, 0, 74);\n"
"color:white;\n"
"	\n"
"}"));
        onSignupClicked = new QPushButton(centralwidget);
        onSignupClicked->setObjectName("onSignupClicked");
        onSignupClicked->setGeometry(QRect(410, 340, 161, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Trebuchet MS")});
        font2.setPointSize(13);
        onSignupClicked->setFont(font2);
        onSignupClicked->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(143, 143, 143);\n"
"color:white;\n"
"border:none;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: rgb(209, 130, 223);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 140, 21, 21));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-name-50.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(310, 180, 21, 21));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-email-30.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 220, 21, 21));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-call-50.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(310, 260, 21, 21));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-password-50.png")));
        label_6->setScaledContents(true);
        signup->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signup);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 43));
        signup->setMenuBar(menubar);
        statusbar = new QStatusBar(signup);
        statusbar->setObjectName("statusbar");
        signup->setStatusBar(statusbar);

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QMainWindow *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("signup", "CREATE YOUR ACCOUNT", nullptr));
        Fullname->setPlaceholderText(QCoreApplication::translate("signup", "Full Name", nullptr));
        Emailid->setPlaceholderText(QCoreApplication::translate("signup", "Email ID", nullptr));
        Contact->setPlaceholderText(QCoreApplication::translate("signup", "Contact Number", nullptr));
        Password->setPlaceholderText(QCoreApplication::translate("signup", "Password", nullptr));
        onSignupClicked->setText(QCoreApplication::translate("signup", "SIGN UP", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
