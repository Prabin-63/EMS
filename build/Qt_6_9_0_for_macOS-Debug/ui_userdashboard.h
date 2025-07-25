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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserDashboard
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QWidget *widget_2;
    QWidget *widget;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget_5;
    QWidget *widget_6;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *eventContainer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserDashboard)
    {
        if (UserDashboard->objectName().isEmpty())
            UserDashboard->setObjectName("UserDashboard");
        UserDashboard->resize(1444, 680);
        centralwidget = new QWidget(UserDashboard);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(50, 0));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: #257180;"));

        horizontalLayout->addWidget(widget_3);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(50, 0));
        widget_2->setStyleSheet(QString::fromUtf8("background-color:#F2E5BF;"));

        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(50, 0));
        widget->setStyleSheet(QString::fromUtf8("background-color: #FD8B51;"));

        horizontalLayout->addWidget(widget);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        widget_5->setMinimumSize(QSize(0, 60));
        widget_5->setStyleSheet(QString::fromUtf8("background-color:#CB6040;\n"
"border-radius:20px;"));

        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName("widget_6");
        gridLayout_2 = new QGridLayout(widget_6);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(widget_6);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1184, 460));
        eventContainer = new QWidget(scrollAreaWidgetContents);
        eventContainer->setObjectName("eventContainer");
        eventContainer->setGeometry(QRect(0, 0, 601, 461));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_6);


        horizontalLayout_4->addLayout(verticalLayout);


        horizontalLayout->addWidget(widget_4);


        horizontalLayout_2->addLayout(horizontalLayout);

        UserDashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserDashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1444, 43));
        UserDashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(UserDashboard);
        statusbar->setObjectName("statusbar");
        UserDashboard->setStatusBar(statusbar);

        retranslateUi(UserDashboard);

        QMetaObject::connectSlotsByName(UserDashboard);
    } // setupUi

    void retranslateUi(QMainWindow *UserDashboard)
    {
        UserDashboard->setWindowTitle(QCoreApplication::translate("UserDashboard", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserDashboard: public Ui_UserDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDASHBOARD_H
