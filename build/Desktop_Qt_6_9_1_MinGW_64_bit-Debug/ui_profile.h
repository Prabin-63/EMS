/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_Profile
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QWidget *LeftSidebar;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QSpacerItem *verticalSpacer;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QPushButton *dashboard_2;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_10;
    QPushButton *Profile_2;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_11;
    QPushButton *Booking;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_12;
    QPushButton *Managing;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_13;
    QPushButton *Help_Center;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_14;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLabel *label_6;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName("Profile");
        Profile->resize(800, 600);
        centralwidget = new QWidget(Profile);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(180, 0));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(55,55,55);"));
        LeftSidebar = new QWidget(widget);
        LeftSidebar->setObjectName("LeftSidebar");
        LeftSidebar->setGeometry(QRect(-10, 0, 191, 551));
        sizePolicy.setHeightForWidth(LeftSidebar->sizePolicy().hasHeightForWidth());
        LeftSidebar->setSizePolicy(sizePolicy);
        LeftSidebar->setMinimumSize(QSize(180, 0));
        LeftSidebar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(55, 55, 55);\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(LeftSidebar);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_8 = new QLabel(LeftSidebar);
        label_8->setObjectName("label_8");
        QFont font;
        font.setFamilies({QString::fromUtf8("SimSun")});
        font.setPointSize(20);
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"padding-top:20px;\n"
"color:white;\n"
"}"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_8);


        verticalLayout_5->addLayout(verticalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        widget_8 = new QWidget(LeftSidebar);
        widget_8->setObjectName("widget_8");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy1);
        widget_8->setMinimumSize(QSize(0, 40));
        horizontalLayout_11 = new QHBoxLayout(widget_8);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_9 = new QLabel(widget_8);
        label_9->setObjectName("label_9");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setMinimumSize(QSize(20, 20));
        label_9->setMaximumSize(QSize(20, 20));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-dashboard-50.png")));
        label_9->setScaledContents(true);

        horizontalLayout_12->addWidget(label_9);

        dashboard_2 = new QPushButton(widget_8);
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

        horizontalLayout_12->addWidget(dashboard_2);


        horizontalLayout_11->addLayout(horizontalLayout_12);


        verticalLayout_5->addWidget(widget_8);

        widget_9 = new QWidget(LeftSidebar);
        widget_9->setObjectName("widget_9");
        sizePolicy1.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy1);
        widget_9->setMinimumSize(QSize(0, 40));
        horizontalLayout_13 = new QHBoxLayout(widget_9);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_10 = new QLabel(widget_9);
        label_10->setObjectName("label_10");
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMinimumSize(QSize(20, 20));
        label_10->setMaximumSize(QSize(20, 20));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-profile-48.png")));
        label_10->setScaledContents(true);

        horizontalLayout_14->addWidget(label_10);

        Profile_2 = new QPushButton(widget_9);
        Profile_2->setObjectName("Profile_2");
        Profile_2->setFont(font1);
        Profile_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_14->addWidget(Profile_2);


        horizontalLayout_13->addLayout(horizontalLayout_14);


        verticalLayout_5->addWidget(widget_9);

        widget_10 = new QWidget(LeftSidebar);
        widget_10->setObjectName("widget_10");
        sizePolicy1.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy1);
        widget_10->setMinimumSize(QSize(0, 40));
        horizontalLayout_15 = new QHBoxLayout(widget_10);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_11 = new QLabel(widget_10);
        label_11->setObjectName("label_11");
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMinimumSize(QSize(20, 20));
        label_11->setMaximumSize(QSize(20, 20));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-booking-48.png")));
        label_11->setScaledContents(true);

        horizontalLayout_16->addWidget(label_11);

        Booking = new QPushButton(widget_10);
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

        horizontalLayout_16->addWidget(Booking);


        horizontalLayout_15->addLayout(horizontalLayout_16);


        verticalLayout_5->addWidget(widget_10);

        widget_11 = new QWidget(LeftSidebar);
        widget_11->setObjectName("widget_11");
        sizePolicy1.setHeightForWidth(widget_11->sizePolicy().hasHeightForWidth());
        widget_11->setSizePolicy(sizePolicy1);
        widget_11->setMinimumSize(QSize(0, 40));
        horizontalLayout_17 = new QHBoxLayout(widget_11);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_12 = new QLabel(widget_11);
        label_12->setObjectName("label_12");
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setMinimumSize(QSize(20, 20));
        label_12->setMaximumSize(QSize(20, 20));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-hierarchy-48.png")));
        label_12->setScaledContents(true);

        horizontalLayout_18->addWidget(label_12);

        Managing = new QPushButton(widget_11);
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

        horizontalLayout_18->addWidget(Managing);


        horizontalLayout_17->addLayout(horizontalLayout_18);


        verticalLayout_5->addWidget(widget_11);

        widget_12 = new QWidget(LeftSidebar);
        widget_12->setObjectName("widget_12");
        sizePolicy1.setHeightForWidth(widget_12->sizePolicy().hasHeightForWidth());
        widget_12->setSizePolicy(sizePolicy1);
        widget_12->setMinimumSize(QSize(0, 40));
        horizontalLayout_19 = new QHBoxLayout(widget_12);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_13 = new QLabel(widget_12);
        label_13->setObjectName("label_13");
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);
        label_13->setMinimumSize(QSize(20, 20));
        label_13->setMaximumSize(QSize(20, 20));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-help-center-48.png")));
        label_13->setScaledContents(true);

        horizontalLayout_20->addWidget(label_13);

        Help_Center = new QPushButton(widget_12);
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

        horizontalLayout_20->addWidget(Help_Center);


        horizontalLayout_19->addLayout(horizontalLayout_20);


        verticalLayout_5->addWidget(widget_12);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        widget_13 = new QWidget(LeftSidebar);
        widget_13->setObjectName("widget_13");
        sizePolicy1.setHeightForWidth(widget_13->sizePolicy().hasHeightForWidth());
        widget_13->setSizePolicy(sizePolicy1);
        widget_13->setMinimumSize(QSize(0, 40));
        horizontalLayout_21 = new QHBoxLayout(widget_13);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_14 = new QLabel(widget_13);
        label_14->setObjectName("label_14");
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        label_14->setMinimumSize(QSize(20, 20));
        label_14->setMaximumSize(QSize(20, 20));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-log-out-48.png")));
        label_14->setScaledContents(true);

        horizontalLayout_22->addWidget(label_14);

        pushButton_6 = new QPushButton(widget_13);
        pushButton_6->setObjectName("pushButton_6");
        QFont font2;
        font2.setPointSize(11);
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_22->addWidget(pushButton_6);


        horizontalLayout_21->addLayout(horizontalLayout_22);


        verticalLayout_5->addWidget(widget_13);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setMinimumSize(QSize(0, 60));
        widget_3->setStyleSheet(QString::fromUtf8("background-color:rgb(55,55,55);\n"
"border-radius:20px;"));
        horizontalLayout_8 = new QHBoxLayout(widget_3);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(widget_3);
        label_5->setObjectName("label_5");
        QFont font3;
        font3.setPointSize(15);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color:white;\n"
"padding-left:20px;"));

        horizontalLayout_7->addWidget(label_5);

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName("widget_7");
        sizePolicy.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy);
        widget_7->setMinimumSize(QSize(80, 0));
        horizontalLayout_10 = new QHBoxLayout(widget_7);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_7 = new QLabel(widget_7);
        label_7->setObjectName("label_7");
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMinimumSize(QSize(30, 30));
        label_7->setMaximumSize(QSize(30, 30));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-name-50.png")));
        label_7->setScaledContents(true);

        horizontalLayout_9->addWidget(label_7);

        label_6 = new QLabel(widget_7);
        label_6->setObjectName("label_6");
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color:white;\n"
"padding-left:20px;"));

        horizontalLayout_9->addWidget(label_6);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        horizontalLayout_7->addWidget(widget_7);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_2 = new QLabel(widget_5);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(80, 80));
        label_2->setMaximumSize(QSize(80, 80));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/USER LOGIN (6).jpg")));
        label_2->setScaledContents(true);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label = new QLabel(widget_5);
        label->setObjectName("label");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Rockwell")});
        font4.setPointSize(34);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"padding-left:30px;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(widget_5);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName("widget_6");
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        label_4 = new QLabel(widget_6);
        label_4->setObjectName("label_4");
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(80, 80));
        label_4->setMaximumSize(QSize(80, 80));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/event (1).png")));
        label_4->setScaledContents(true);

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label_3 = new QLabel(widget_6);
        label_3->setObjectName("label_3");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Rockwell")});
        font5.setPointSize(26);
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"padding-left:30px;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_3->addWidget(widget_6);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout->addWidget(widget_4);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(widget_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        Profile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Profile);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        Profile->setMenuBar(menubar);
        statusbar = new QStatusBar(Profile);
        statusbar->setObjectName("statusbar");
        Profile->setStatusBar(statusbar);

        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QMainWindow *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "MainWindow", nullptr));
        label_8->setText(QCoreApplication::translate("Profile", "EVENTRA", nullptr));
        label_9->setText(QString());
        dashboard_2->setText(QCoreApplication::translate("Profile", "DashBoard", nullptr));
        label_10->setText(QString());
        Profile_2->setText(QCoreApplication::translate("Profile", "Profile", nullptr));
        label_11->setText(QString());
        Booking->setText(QCoreApplication::translate("Profile", "Booking", nullptr));
        label_12->setText(QString());
        Managing->setText(QCoreApplication::translate("Profile", "Managing", nullptr));
        label_13->setText(QString());
        Help_Center->setText(QCoreApplication::translate("Profile", "Help Center", nullptr));
        label_14->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("Profile", "LOG OUT", nullptr));
        label_5->setText(QCoreApplication::translate("Profile", "PROFILE", nullptr));
        label_7->setText(QString());
        label_6->setText(QCoreApplication::translate("Profile", "ADMIN", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("Profile", "WELCOME ADMIN.", nullptr));
        label_4->setText(QString());
        label_3->setText(QCoreApplication::translate("Profile", "Thank you for choosing us!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
