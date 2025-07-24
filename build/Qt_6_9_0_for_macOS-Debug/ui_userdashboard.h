/********************************************************************************
** Form generated from reading UI file 'userdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDASHBOARD_H
#define UI_USERDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userdashboard
{
public:
    QWidget *User;
    QComboBox *eventComboBox;
    QComboBox *subeventComboBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *userdashboard)
    {
        if (userdashboard->objectName().isEmpty())
            userdashboard->setObjectName("userdashboard");
        userdashboard->resize(800, 600);
        User = new QWidget(userdashboard);
        User->setObjectName("User");
        eventComboBox = new QComboBox(User);
        eventComboBox->setObjectName("eventComboBox");
        eventComboBox->setGeometry(QRect(22, 0, 721, 32));
        subeventComboBox = new QComboBox(User);
        subeventComboBox->setObjectName("subeventComboBox");
        subeventComboBox->setGeometry(QRect(22, 50, 721, 32));
        userdashboard->setCentralWidget(User);
        menubar = new QMenuBar(userdashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 43));
        userdashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(userdashboard);
        statusbar->setObjectName("statusbar");
        userdashboard->setStatusBar(statusbar);

        retranslateUi(userdashboard);

        QMetaObject::connectSlotsByName(userdashboard);
    } // setupUi

    void retranslateUi(QMainWindow *userdashboard)
    {
        userdashboard->setWindowTitle(QCoreApplication::translate("userdashboard", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userdashboard: public Ui_userdashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDASHBOARD_H
