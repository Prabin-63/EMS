/********************************************************************************
** Form generated from reading UI file 'ticketwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETWINDOW_H
#define UI_TICKETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ticketwindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ticketwindow)
    {
        if (ticketwindow->objectName().isEmpty())
            ticketwindow->setObjectName("ticketwindow");
        ticketwindow->resize(800, 600);
        centralwidget = new QWidget(ticketwindow);
        centralwidget->setObjectName("centralwidget");
        ticketwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ticketwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        ticketwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ticketwindow);
        statusbar->setObjectName("statusbar");
        ticketwindow->setStatusBar(statusbar);

        retranslateUi(ticketwindow);

        QMetaObject::connectSlotsByName(ticketwindow);
    } // setupUi

    void retranslateUi(QMainWindow *ticketwindow)
    {
        ticketwindow->setWindowTitle(QCoreApplication::translate("ticketwindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ticketwindow: public Ui_ticketwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETWINDOW_H
