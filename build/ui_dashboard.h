/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *Leftsidebar;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *dashboard_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QPushButton *Profile;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QPushButton *Booking;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QPushButton *Managing;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_8;
    QPushButton *Volunteer;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QPushButton *Help_Center;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QPushButton *Log_out;
    QSpacerItem *verticalSpacer_3;
    QWidget *RightSideBar;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QWidget *widget_12;
    QWidget *TOP;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_15;
    QComboBox *eventComboBox;
    QWidget *subeventSummaryWidget;
    QHBoxLayout *horizontalLayout_22;
    QHBoxLayout *horizontalLayout_21;
    QLabel *logoLabel_2;
    QLabel *totalSubeventsLabel;
    QWidget *volunteerSummaryWidget;
    QHBoxLayout *horizontalLayout_20;
    QHBoxLayout *horizontalLayout_19;
    QLabel *logoLabel;
    QLabel *totalVolunteersLabel;
    QWidget *Viewvolunteers;
    QHBoxLayout *horizontalLayout_24;
    QHBoxLayout *horizontalLayout_23;
    QLabel *logoLabel_3;
    QPushButton *pushButton;
    QWidget *widget_10;
    QWidget *chartContainer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(800, 600);
        centralwidget = new QWidget(dashboard);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: black;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Leftsidebar = new QWidget(centralwidget);
        Leftsidebar->setObjectName("Leftsidebar");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Leftsidebar->sizePolicy().hasHeightForWidth());
        Leftsidebar->setSizePolicy(sizePolicy);
        Leftsidebar->setMinimumSize(QSize(180, 0));
        Leftsidebar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(55, 55, 55);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(Leftsidebar);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Leftsidebar);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("SimSun")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"padding-top:20px;\n"
"color:white;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        widget = new QWidget(Leftsidebar);
        widget->setObjectName("widget");

        verticalLayout->addWidget(widget);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget_2 = new QWidget(Leftsidebar);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setMinimumSize(QSize(0, 40));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(20, 20));
        label_2->setMaximumSize(QSize(20, 20));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-dashboard-50.png")));
        label_2->setScaledContents(true);

        horizontalLayout_3->addWidget(label_2);

        dashboard_2 = new QPushButton(widget_2);
        dashboard_2->setObjectName("dashboard_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Fluent Icons")});
        font1.setPointSize(10);
        dashboard_2->setFont(font1);
        dashboard_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_3->addWidget(dashboard_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(Leftsidebar);
        widget_3->setObjectName("widget_3");
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setMinimumSize(QSize(0, 40));
        horizontalLayout_6 = new QHBoxLayout(widget_3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(20, 20));
        label_3->setMaximumSize(QSize(20, 20));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-profile-48.png")));
        label_3->setScaledContents(true);

        horizontalLayout_5->addWidget(label_3);

        Profile = new QPushButton(widget_3);
        Profile->setObjectName("Profile");
        Profile->setFont(font1);
        Profile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_5->addWidget(Profile);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(Leftsidebar);
        widget_4->setObjectName("widget_4");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(40);
        sizePolicy3.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy3);
        horizontalLayout_8 = new QHBoxLayout(widget_4);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_4 = new QLabel(widget_4);
        label_4->setObjectName("label_4");
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(20, 20));
        label_4->setMaximumSize(QSize(20, 20));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-booking-48.png")));
        label_4->setScaledContents(true);

        horizontalLayout_7->addWidget(label_4);

        Booking = new QPushButton(widget_4);
        Booking->setObjectName("Booking");
        Booking->setFont(font1);
        Booking->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_7->addWidget(Booking);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(widget_4);

        widget_5 = new QWidget(Leftsidebar);
        widget_5->setObjectName("widget_5");
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        widget_5->setMinimumSize(QSize(0, 40));
        horizontalLayout_10 = new QHBoxLayout(widget_5);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_5 = new QLabel(widget_5);
        label_5->setObjectName("label_5");
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(20, 20));
        label_5->setMaximumSize(QSize(20, 20));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-hierarchy-48.png")));
        label_5->setScaledContents(true);

        horizontalLayout_9->addWidget(label_5);

        Managing = new QPushButton(widget_5);
        Managing->setObjectName("Managing");
        Managing->setFont(font1);
        Managing->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_9->addWidget(Managing);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_2->addWidget(widget_5);

        widget_8 = new QWidget(Leftsidebar);
        widget_8->setObjectName("widget_8");
        sizePolicy1.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy1);
        widget_8->setMinimumSize(QSize(0, 40));
        horizontalLayout_17 = new QHBoxLayout(widget_8);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_8 = new QLabel(widget_8);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(20, 20));
        label_8->setMaximumSize(QSize(20, 20));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-community-50.png")));
        label_8->setScaledContents(true);

        horizontalLayout_16->addWidget(label_8);

        Volunteer = new QPushButton(widget_8);
        Volunteer->setObjectName("Volunteer");
        Volunteer->setFont(font1);
        Volunteer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_16->addWidget(Volunteer);


        horizontalLayout_17->addLayout(horizontalLayout_16);


        verticalLayout_2->addWidget(widget_8);

        widget_6 = new QWidget(Leftsidebar);
        widget_6->setObjectName("widget_6");
        sizePolicy1.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy1);
        widget_6->setMinimumSize(QSize(0, 40));
        horizontalLayout_12 = new QHBoxLayout(widget_6);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_6 = new QLabel(widget_6);
        label_6->setObjectName("label_6");
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(20, 20));
        label_6->setMaximumSize(QSize(20, 20));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-help-center-48.png")));
        label_6->setScaledContents(true);

        horizontalLayout_11->addWidget(label_6);

        Help_Center = new QPushButton(widget_6);
        Help_Center->setObjectName("Help_Center");
        Help_Center->setFont(font1);
        Help_Center->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_11->addWidget(Help_Center);


        horizontalLayout_12->addLayout(horizontalLayout_11);


        verticalLayout_2->addWidget(widget_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget_7 = new QWidget(Leftsidebar);
        widget_7->setObjectName("widget_7");
        sizePolicy1.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy1);
        widget_7->setMinimumSize(QSize(0, 40));
        horizontalLayout_14 = new QHBoxLayout(widget_7);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_7 = new QLabel(widget_7);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(20, 20));
        label_7->setMaximumSize(QSize(20, 20));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-log-out-48.png")));
        label_7->setScaledContents(true);

        horizontalLayout_13->addWidget(label_7);

        Log_out = new QPushButton(widget_7);
        Log_out->setObjectName("Log_out");
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        Log_out->setFont(font2);
        Log_out->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:black;\n"
"	\n"
"	background-color: rgb(0, 251, 255);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"color:white;\n"
"}"));

        horizontalLayout_13->addWidget(Log_out);


        horizontalLayout_14->addLayout(horizontalLayout_13);


        verticalLayout_2->addWidget(widget_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(Leftsidebar);

        RightSideBar = new QWidget(centralwidget);
        RightSideBar->setObjectName("RightSideBar");
        gridLayout_2 = new QGridLayout(RightSideBar);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        widget_12 = new QWidget(RightSideBar);
        widget_12->setObjectName("widget_12");
        widget_12->setStyleSheet(QString::fromUtf8("background-color:rgb(55,55,55);\n"
"border-radius:20px;"));

        gridLayout->addWidget(widget_12, 1, 3, 1, 1);

        TOP = new QWidget(RightSideBar);
        TOP->setObjectName("TOP");
        sizePolicy1.setHeightForWidth(TOP->sizePolicy().hasHeightForWidth());
        TOP->setSizePolicy(sizePolicy1);
        TOP->setMinimumSize(QSize(0, 60));
        TOP->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(55,55,55);"));
        horizontalLayout_18 = new QHBoxLayout(TOP);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        eventComboBox = new QComboBox(TOP);
        eventComboBox->setObjectName("eventComboBox");
        QFont font3;
        font3.setPointSize(15);
        eventComboBox->setFont(font3);
        eventComboBox->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_15->addWidget(eventComboBox);


        horizontalLayout_18->addLayout(horizontalLayout_15);


        gridLayout->addWidget(TOP, 0, 0, 1, 4);

        subeventSummaryWidget = new QWidget(RightSideBar);
        subeventSummaryWidget->setObjectName("subeventSummaryWidget");
        subeventSummaryWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(55,55,55);\n"
"border-radius:20px;"));
        horizontalLayout_22 = new QHBoxLayout(subeventSummaryWidget);
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        logoLabel_2 = new QLabel(subeventSummaryWidget);
        logoLabel_2->setObjectName("logoLabel_2");

        horizontalLayout_21->addWidget(logoLabel_2);

        totalSubeventsLabel = new QLabel(subeventSummaryWidget);
        totalSubeventsLabel->setObjectName("totalSubeventsLabel");

        horizontalLayout_21->addWidget(totalSubeventsLabel);


        horizontalLayout_22->addLayout(horizontalLayout_21);


        gridLayout->addWidget(subeventSummaryWidget, 1, 1, 1, 1);

        volunteerSummaryWidget = new QWidget(RightSideBar);
        volunteerSummaryWidget->setObjectName("volunteerSummaryWidget");
        sizePolicy1.setHeightForWidth(volunteerSummaryWidget->sizePolicy().hasHeightForWidth());
        volunteerSummaryWidget->setSizePolicy(sizePolicy1);
        volunteerSummaryWidget->setMinimumSize(QSize(0, 100));
        volunteerSummaryWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(55,55,55);\n"
"border-radius:20px;"));
        horizontalLayout_20 = new QHBoxLayout(volunteerSummaryWidget);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        logoLabel = new QLabel(volunteerSummaryWidget);
        logoLabel->setObjectName("logoLabel");

        horizontalLayout_19->addWidget(logoLabel);

        totalVolunteersLabel = new QLabel(volunteerSummaryWidget);
        totalVolunteersLabel->setObjectName("totalVolunteersLabel");

        horizontalLayout_19->addWidget(totalVolunteersLabel);


        horizontalLayout_20->addLayout(horizontalLayout_19);


        gridLayout->addWidget(volunteerSummaryWidget, 1, 0, 1, 1);

        Viewvolunteers = new QWidget(RightSideBar);
        Viewvolunteers->setObjectName("Viewvolunteers");
        Viewvolunteers->setStyleSheet(QString::fromUtf8("background-color:rgb(55,55,55);\n"
"border-radius:20px;"));
        horizontalLayout_24 = new QHBoxLayout(Viewvolunteers);
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        logoLabel_3 = new QLabel(Viewvolunteers);
        logoLabel_3->setObjectName("logoLabel_3");

        horizontalLayout_23->addWidget(logoLabel_3);

        pushButton = new QPushButton(Viewvolunteers);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 90));
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"padding-left:10px;"));

        horizontalLayout_23->addWidget(pushButton);


        horizontalLayout_24->addLayout(horizontalLayout_23);


        gridLayout->addWidget(Viewvolunteers, 1, 2, 1, 1);

        widget_10 = new QWidget(RightSideBar);
        widget_10->setObjectName("widget_10");

        gridLayout->addWidget(widget_10, 3, 0, 1, 1);

        chartContainer = new QWidget(RightSideBar);
        chartContainer->setObjectName("chartContainer");
        chartContainer->setStyleSheet(QString::fromUtf8("background-color:rgb(55,55,55);\n"
"border-radius:20px;"));

        gridLayout->addWidget(chartContainer, 2, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        horizontalLayout->addWidget(RightSideBar);


        horizontalLayout_2->addLayout(horizontalLayout);

        dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(dashboard);
        statusbar->setObjectName("statusbar");
        dashboard->setStatusBar(statusbar);

        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "EVENTRA", nullptr));
        label_2->setText(QString());
        dashboard_2->setText(QCoreApplication::translate("dashboard", "DashBoard", nullptr));
        label_3->setText(QString());
        Profile->setText(QCoreApplication::translate("dashboard", "Profile", nullptr));
        label_4->setText(QString());
        Booking->setText(QCoreApplication::translate("dashboard", "Booking", nullptr));
        label_5->setText(QString());
        Managing->setText(QCoreApplication::translate("dashboard", "Managing", nullptr));
        label_8->setText(QString());
        Volunteer->setText(QCoreApplication::translate("dashboard", "Volunteer", nullptr));
        label_6->setText(QString());
        Help_Center->setText(QCoreApplication::translate("dashboard", "Help Center", nullptr));
        label_7->setText(QString());
        Log_out->setText(QCoreApplication::translate("dashboard", "LOG OUT", nullptr));
        eventComboBox->setPlaceholderText(QCoreApplication::translate("dashboard", "Select Your Event", nullptr));
        logoLabel_2->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        totalSubeventsLabel->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        logoLabel->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        totalVolunteersLabel->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        logoLabel_3->setText(QCoreApplication::translate("dashboard", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("dashboard", "View Volunteers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
