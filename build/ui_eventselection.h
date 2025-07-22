/********************************************************************************
** Form generated from reading UI file 'eventselection.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTSELECTION_H
#define UI_EVENTSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventSelection
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *NewEvent;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EventSelection)
    {
        if (EventSelection->objectName().isEmpty())
            EventSelection->setObjectName("EventSelection");
        EventSelection->resize(800, 500);
        EventSelection->setMinimumSize(QSize(800, 500));
        EventSelection->setMaximumSize(QSize(800, 500));
        centralwidget = new QWidget(EventSelection);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 791, 471));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/USER LOGIN (1).png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 0, 341, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Poor Richard")});
        font.setPointSize(25);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        NewEvent = new QPushButton(centralwidget);
        NewEvent->setObjectName("NewEvent");
        NewEvent->setGeometry(QRect(300, 90, 211, 41));
        QFont font1;
        font1.setPointSize(13);
        NewEvent->setFont(font1);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(150, 140, 511, 271));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 509, 269));
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 511, 271));
        scrollArea->setWidget(scrollAreaWidgetContents);
        EventSelection->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EventSelection);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        EventSelection->setMenuBar(menubar);
        statusbar = new QStatusBar(EventSelection);
        statusbar->setObjectName("statusbar");
        EventSelection->setStatusBar(statusbar);

        retranslateUi(EventSelection);

        QMetaObject::connectSlotsByName(EventSelection);
    } // setupUi

    void retranslateUi(QMainWindow *EventSelection)
    {
        EventSelection->setWindowTitle(QCoreApplication::translate("EventSelection", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("EventSelection", "SELECT AN EVENT", nullptr));
        NewEvent->setText(QCoreApplication::translate("EventSelection", "Create New Event.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventSelection: public Ui_EventSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTSELECTION_H
