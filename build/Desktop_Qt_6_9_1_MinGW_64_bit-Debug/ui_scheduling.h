/********************************************************************************
** Form generated from reading UI file 'scheduling.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULING_H
#define UI_SCHEDULING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scheduling
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_2;
    QWidget *LeftSidebar;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *dashboard_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QPushButton *Profile;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QPushButton *Booking;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QPushButton *Managing;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_6;
    QPushButton *Help_Center;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_7;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_3;
    QWidget *Rightsidebar;
    QGridLayout *gridLayout_2;
    QWidget *Input;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout;
    QLineEdit *Contact;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_8;
    QTimeEdit *Time;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_18;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_9;
    QDateEdit *Date;
    QLineEdit *Name;
    QPushButton *Gotodash_subevent;
    QLineEdit *Location;
    QSpacerItem *verticalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QWidget *Topbar;
    QHBoxLayout *horizontalLayout_20;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_10;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_22;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_12;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *scheduling)
    {
        if (scheduling->objectName().isEmpty())
            scheduling->setObjectName("scheduling");
        scheduling->resize(800, 600);
        centralwidget = new QWidget(scheduling);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"\n"
"background-color:black;\n"
"}"));
        horizontalLayout_15 = new QHBoxLayout(centralwidget);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        LeftSidebar = new QWidget(centralwidget);
        LeftSidebar->setObjectName("LeftSidebar");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LeftSidebar->sizePolicy().hasHeightForWidth());
        LeftSidebar->setSizePolicy(sizePolicy);
        LeftSidebar->setMinimumSize(QSize(180, 0));
        LeftSidebar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(55, 55, 55);\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(LeftSidebar);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(LeftSidebar);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("SimSun")});
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"padding-top:20px;\n"
"color:white;\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget_3 = new QWidget(LeftSidebar);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setMinimumSize(QSize(0, 40));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(widget_3);
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

        horizontalLayout->addWidget(label_2);

        dashboard_2 = new QPushButton(widget_3);
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

        horizontalLayout->addWidget(dashboard_2);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(widget_3);

        widget = new QWidget(LeftSidebar);
        widget->setObjectName("widget");
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(0, 40));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(20, 20));
        label_3->setMaximumSize(QSize(20, 20));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-profile-48.png")));
        label_3->setScaledContents(true);

        horizontalLayout_4->addWidget(label_3);

        Profile = new QPushButton(widget);
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

        horizontalLayout_4->addWidget(Profile);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(LeftSidebar);
        widget_2->setObjectName("widget_2");
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setMinimumSize(QSize(0, 40));
        horizontalLayout_7 = new QHBoxLayout(widget_2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(20, 20));
        label_4->setMaximumSize(QSize(20, 20));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-booking-48.png")));
        label_4->setScaledContents(true);

        horizontalLayout_6->addWidget(label_4);

        Booking = new QPushButton(widget_2);
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

        horizontalLayout_6->addWidget(Booking);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_2->addWidget(widget_2);

        widget_4 = new QWidget(LeftSidebar);
        widget_4->setObjectName("widget_4");
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        widget_4->setMinimumSize(QSize(0, 40));
        horizontalLayout_9 = new QHBoxLayout(widget_4);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_5 = new QLabel(widget_4);
        label_5->setObjectName("label_5");
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(20, 20));
        label_5->setMaximumSize(QSize(20, 20));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-hierarchy-48.png")));
        label_5->setScaledContents(true);

        horizontalLayout_8->addWidget(label_5);

        Managing = new QPushButton(widget_4);
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

        horizontalLayout_8->addWidget(Managing);


        horizontalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout_2->addWidget(widget_4);

        widget_5 = new QWidget(LeftSidebar);
        widget_5->setObjectName("widget_5");
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        widget_5->setMinimumSize(QSize(0, 40));
        horizontalLayout_11 = new QHBoxLayout(widget_5);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_6 = new QLabel(widget_5);
        label_6->setObjectName("label_6");
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(20, 20));
        label_6->setMaximumSize(QSize(20, 20));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-help-center-48.png")));
        label_6->setScaledContents(true);

        horizontalLayout_10->addWidget(label_6);

        Help_Center = new QPushButton(widget_5);
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

        horizontalLayout_10->addWidget(Help_Center);


        horizontalLayout_11->addLayout(horizontalLayout_10);


        verticalLayout_2->addWidget(widget_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        widget_6 = new QWidget(LeftSidebar);
        widget_6->setObjectName("widget_6");
        sizePolicy1.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy1);
        widget_6->setMinimumSize(QSize(0, 40));
        horizontalLayout_13 = new QHBoxLayout(widget_6);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_7 = new QLabel(widget_6);
        label_7->setObjectName("label_7");
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMinimumSize(QSize(20, 20));
        label_7->setMaximumSize(QSize(20, 20));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-log-out-48.png")));
        label_7->setScaledContents(true);

        horizontalLayout_12->addWidget(label_7);

        pushButton_6 = new QPushButton(widget_6);
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

        horizontalLayout_12->addWidget(pushButton_6);


        horizontalLayout_13->addLayout(horizontalLayout_12);


        verticalLayout_2->addWidget(widget_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_2->addWidget(LeftSidebar);


        horizontalLayout_15->addLayout(horizontalLayout_2);

        Rightsidebar = new QWidget(centralwidget);
        Rightsidebar->setObjectName("Rightsidebar");
        gridLayout_2 = new QGridLayout(Rightsidebar);
        gridLayout_2->setObjectName("gridLayout_2");
        Input = new QWidget(Rightsidebar);
        Input->setObjectName("Input");
        verticalLayout_6 = new QVBoxLayout(Input);
        verticalLayout_6->setObjectName("verticalLayout_6");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        Contact = new QLineEdit(Input);
        Contact->setObjectName("Contact");
        Contact->setMinimumSize(QSize(200, 30));
        Contact->setMaximumSize(QSize(500, 16777215));
        QFont font3;
        Contact->setFont(font3);
        Contact->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: rgba(255, 255, 255, 0.05);\n"
"    color: white;\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #aaaaaa;\n"
"    font-style: italic;\n"
"}\n"
"QLineEdit:hover {\n"
"    background-color: #00ffcc;\n"
"    box-shadow: 0 0 10px #00ffe5;\n"
"color:black;\n"
"}\n"
"QLineEdit::placeholder:hover{\n"
"color:black;\n"
"}"));

        gridLayout->addWidget(Contact, 4, 0, 1, 1);

        widget_7 = new QWidget(Input);
        widget_7->setObjectName("widget_7");
        sizePolicy1.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy1);
        widget_7->setMinimumSize(QSize(0, 30));
        horizontalLayout_16 = new QHBoxLayout(widget_7);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_8 = new QLabel(widget_7);
        label_8->setObjectName("label_8");
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setMinimumSize(QSize(0, 40));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: rgba(255, 255, 255, 0.05);\n"
"    color: white;\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}"));

        horizontalLayout_14->addWidget(label_8);

        Time = new QTimeEdit(widget_7);
        Time->setObjectName("Time");
        Time->setMinimumSize(QSize(0, 40));
        Time->setFont(font2);
        Time->setStyleSheet(QString::fromUtf8("QTimeEdit{\n"
"   color:white;\n"
"}"));

        horizontalLayout_14->addWidget(Time);


        horizontalLayout_16->addLayout(horizontalLayout_14);


        gridLayout->addWidget(widget_7, 2, 0, 1, 1);

        widget_8 = new QWidget(Input);
        widget_8->setObjectName("widget_8");
        sizePolicy1.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy1);
        widget_8->setMinimumSize(QSize(0, 30));
        horizontalLayout_18 = new QHBoxLayout(widget_8);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_9 = new QLabel(widget_8);
        label_9->setObjectName("label_9");
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMinimumSize(QSize(0, 40));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: rgba(255, 255, 255, 0.05);\n"
"    color: white;\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}"));

        horizontalLayout_17->addWidget(label_9);

        Date = new QDateEdit(widget_8);
        Date->setObjectName("Date");
        Date->setMinimumSize(QSize(0, 40));
        Date->setFont(font2);
        Date->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"   \n"
"    color: white;\n"
"    \n"
"}"));

        horizontalLayout_17->addWidget(Date);


        horizontalLayout_18->addLayout(horizontalLayout_17);


        gridLayout->addWidget(widget_8, 3, 0, 1, 1);

        Name = new QLineEdit(Input);
        Name->setObjectName("Name");
        sizePolicy2.setHeightForWidth(Name->sizePolicy().hasHeightForWidth());
        Name->setSizePolicy(sizePolicy2);
        Name->setMinimumSize(QSize(200, 30));
        Name->setMaximumSize(QSize(500, 16777215));
        Name->setFont(font3);
        Name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: rgba(255, 255, 255, 0.05);\n"
"    color: white;\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #aaaaaa;\n"
"    font-style: italic;\n"
"}\n"
"QLineEdit:hover {\n"
"    background-color: #00ffcc;\n"
"    box-shadow: 0 0 10px #00ffe5;\n"
"color:black;\n"
"}"));

        gridLayout->addWidget(Name, 0, 0, 1, 1);

        Gotodash_subevent = new QPushButton(Input);
        Gotodash_subevent->setObjectName("Gotodash_subevent");
        sizePolicy2.setHeightForWidth(Gotodash_subevent->sizePolicy().hasHeightForWidth());
        Gotodash_subevent->setSizePolicy(sizePolicy2);
        Gotodash_subevent->setMinimumSize(QSize(100, 30));
        Gotodash_subevent->setFont(font2);
        Gotodash_subevent->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        Gotodash_subevent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:black;\n"
"background-color:rgb(0, 255, 234);\n"
"border:none;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover{\n"
"color:white;\n"
"	background-color: rgb(196, 0, 176);\n"
"}"));

        gridLayout->addWidget(Gotodash_subevent, 6, 0, 1, 1);

        Location = new QLineEdit(Input);
        Location->setObjectName("Location");
        sizePolicy2.setHeightForWidth(Location->sizePolicy().hasHeightForWidth());
        Location->setSizePolicy(sizePolicy2);
        Location->setMinimumSize(QSize(200, 30));
        Location->setMaximumSize(QSize(500, 16777215));
        Location->setFont(font3);
        Location->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"    background-color: rgba(255, 255, 255, 0.05);\n"
"    color: white;\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #aaaaaa;\n"
"    font-style: italic;\n"
"}\n"
"QLineEdit:hover {\n"
"    background-color: #00ffcc;\n"
"    box-shadow: 0 0 10px #00ffe5;\n"
"color:black;\n"
"}"));

        gridLayout->addWidget(Location, 1, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 5, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout);


        gridLayout_2->addWidget(Input, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        Topbar = new QWidget(Rightsidebar);
        Topbar->setObjectName("Topbar");
        sizePolicy1.setHeightForWidth(Topbar->sizePolicy().hasHeightForWidth());
        Topbar->setSizePolicy(sizePolicy1);
        Topbar->setMinimumSize(QSize(0, 60));
        Topbar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(55, 55, 55);\n"
"border-radius:20px;\n"
"}"));
        horizontalLayout_20 = new QHBoxLayout(Topbar);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        label_10 = new QLabel(Topbar);
        label_10->setObjectName("label_10");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sitka")});
        font4.setPointSize(17);
        label_10->setFont(font4);
        label_10->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_19->addWidget(label_10);

        widget_9 = new QWidget(Topbar);
        widget_9->setObjectName("widget_9");
        sizePolicy.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy);
        widget_9->setMinimumSize(QSize(140, 0));
        horizontalLayout_22 = new QHBoxLayout(widget_9);
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_12 = new QLabel(widget_9);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(30, 30));
        label_12->setMaximumSize(QSize(30, 30));

        horizontalLayout_21->addWidget(label_12);

        label_11 = new QLabel(widget_9);
        label_11->setObjectName("label_11");
        label_11->setFont(font4);
        label_11->setStyleSheet(QString::fromUtf8("color:white;\n"
"padding-left:10px;"));

        horizontalLayout_21->addWidget(label_11);


        horizontalLayout_22->addLayout(horizontalLayout_21);


        horizontalLayout_19->addWidget(widget_9);


        horizontalLayout_20->addLayout(horizontalLayout_19);


        verticalLayout_3->addWidget(Topbar);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 2, 0, 1, 1);


        horizontalLayout_15->addWidget(Rightsidebar);

        scheduling->setCentralWidget(centralwidget);
        menubar = new QMenuBar(scheduling);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        scheduling->setMenuBar(menubar);
        statusbar = new QStatusBar(scheduling);
        statusbar->setObjectName("statusbar");
        scheduling->setStatusBar(statusbar);

        retranslateUi(scheduling);

        QMetaObject::connectSlotsByName(scheduling);
    } // setupUi

    void retranslateUi(QMainWindow *scheduling)
    {
        scheduling->setWindowTitle(QCoreApplication::translate("scheduling", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("scheduling", "EVENTRA", nullptr));
        label_2->setText(QString());
        dashboard_2->setText(QCoreApplication::translate("scheduling", "DashBoard", nullptr));
        label_3->setText(QString());
        Profile->setText(QCoreApplication::translate("scheduling", "Profile", nullptr));
        label_4->setText(QString());
        Booking->setText(QCoreApplication::translate("scheduling", "Booking", nullptr));
        label_5->setText(QString());
        Managing->setText(QCoreApplication::translate("scheduling", "Managing", nullptr));
        label_6->setText(QString());
        Help_Center->setText(QCoreApplication::translate("scheduling", "Help Center", nullptr));
        label_7->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("scheduling", "LOG OUT", nullptr));
        Contact->setPlaceholderText(QCoreApplication::translate("scheduling", "Contact Number", nullptr));
        label_8->setText(QCoreApplication::translate("scheduling", "Time of Your Event ", nullptr));
        label_9->setText(QCoreApplication::translate("scheduling", "Date of your Event", nullptr));
        Name->setPlaceholderText(QCoreApplication::translate("scheduling", "Name", nullptr));
        Gotodash_subevent->setText(QCoreApplication::translate("scheduling", "Save", nullptr));
        Location->setPlaceholderText(QCoreApplication::translate("scheduling", "Location of Event", nullptr));
        label_10->setText(QCoreApplication::translate("scheduling", "Schedule Your Event", nullptr));
        label_12->setText(QCoreApplication::translate("scheduling", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("scheduling", "ADMIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scheduling: public Ui_scheduling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULING_H
