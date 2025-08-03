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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
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
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLabel *Nameuser;
    QWidget *widget_6;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
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
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton = new QPushButton(widget_5);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(100, 30));
        QFont font;
        font.setPointSize(16);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 251, 255);\n"
"border-radius:10px;"));

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        widget_7 = new QWidget(widget_5);
        widget_7->setObjectName("widget_7");
        sizePolicy.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy);
        widget_7->setMinimumSize(QSize(300, 0));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_2 = new QLabel(widget_7);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(30, 30));
        label_2->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(label_2);

        Nameuser = new QLabel(widget_7);
        Nameuser->setObjectName("Nameuser");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka")});
        font1.setPointSize(19);
        font1.setBold(true);
        Nameuser->setFont(font1);

        horizontalLayout_6->addWidget(Nameuser);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        horizontalLayout_3->addWidget(widget_7);


        horizontalLayout_5->addLayout(horizontalLayout_3);


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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1238, 536));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        eventContainer = new QWidget(scrollAreaWidgetContents);
        eventContainer->setObjectName("eventContainer");

        verticalLayout_3->addWidget(eventContainer);


        verticalLayout_4->addLayout(verticalLayout_3);

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
        menubar->setGeometry(QRect(0, 0, 1444, 18));
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
        pushButton->setText(QCoreApplication::translate("UserDashboard", "Logout", nullptr));
        label_2->setText(QCoreApplication::translate("UserDashboard", "TextLabel", nullptr));
        Nameuser->setText(QCoreApplication::translate("UserDashboard", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserDashboard: public Ui_UserDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDASHBOARD_H
