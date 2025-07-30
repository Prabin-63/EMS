/********************************************************************************
** Form generated from reading UI file 'booking.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKING_H
#define UI_BOOKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Booking
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Booking)
    {
        if (Booking->objectName().isEmpty())
            Booking->setObjectName("Booking");
        Booking->resize(800, 600);
        centralwidget = new QWidget(Booking);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 90, 751, 251));
        Booking->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Booking);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 43));
        Booking->setMenuBar(menubar);
        statusbar = new QStatusBar(Booking);
        statusbar->setObjectName("statusbar");
        Booking->setStatusBar(statusbar);

        retranslateUi(Booking);

        QMetaObject::connectSlotsByName(Booking);
    } // setupUi

    void retranslateUi(QMainWindow *Booking)
    {
        Booking->setWindowTitle(QCoreApplication::translate("Booking", "Booking", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Booking: public Ui_Booking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKING_H
