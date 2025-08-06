/********************************************************************************
** Form generated from reading UI file 'placemanage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACEMANAGE_H
#define UI_PLACEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_placemanage
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *Leftsidebar;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QWidget *LeftSidebar;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_9;
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
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_13;
    QPushButton *Help_Center;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_21;
    QSpacerItem *verticalSpacer_3;
    QWidget *Rightsidebar;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *subEventCountInput;
    QPushButton *generateButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QWidget *subEventContainer;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *removeSubEventButton;
    QPushButton *addOneSubEventButton;
    QPushButton *addSubEventButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *placemanage)
    {
        if (placemanage->objectName().isEmpty())
            placemanage->setObjectName("placemanage");
        placemanage->resize(1022, 737);
        centralwidget = new QWidget(placemanage);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:black;\n"
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
        verticalLayout_7 = new QVBoxLayout(Leftsidebar);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        LeftSidebar = new QWidget(Leftsidebar);
        LeftSidebar->setObjectName("LeftSidebar");
        sizePolicy.setHeightForWidth(LeftSidebar->sizePolicy().hasHeightForWidth());
        LeftSidebar->setSizePolicy(sizePolicy);
        LeftSidebar->setMinimumSize(QSize(180, 0));
        LeftSidebar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(55, 55, 55);\n"
"}"));
        verticalLayout_8 = new QVBoxLayout(LeftSidebar);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
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

        verticalLayout_9->addWidget(label_8);


        verticalLayout_8->addLayout(verticalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

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


        verticalLayout_8->addWidget(widget_8);

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


        verticalLayout_8->addWidget(widget_9);

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


        verticalLayout_8->addWidget(widget_10);

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


        verticalLayout_8->addWidget(widget_12);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        widget_13 = new QWidget(LeftSidebar);
        widget_13->setObjectName("widget_13");
        sizePolicy1.setHeightForWidth(widget_13->sizePolicy().hasHeightForWidth());
        widget_13->setSizePolicy(sizePolicy1);
        widget_13->setMinimumSize(QSize(0, 40));
        horizontalLayout_21 = new QHBoxLayout(widget_13);
        horizontalLayout_21->setObjectName("horizontalLayout_21");

        verticalLayout_8->addWidget(widget_13);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);


        verticalLayout_6->addWidget(LeftSidebar);


        verticalLayout_7->addLayout(verticalLayout_6);


        horizontalLayout->addWidget(Leftsidebar);


        horizontalLayout_2->addLayout(horizontalLayout);

        Rightsidebar = new QWidget(centralwidget);
        Rightsidebar->setObjectName("Rightsidebar");
        verticalLayout_2 = new QVBoxLayout(Rightsidebar);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(Rightsidebar);
        widget->setObjectName("widget");
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(0, 60));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(55, 55, 55);\n"
"border-radius:20px;\n"
"}"));
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka")});
        font2.setPointSize(17);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_7->addWidget(label_2);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName("widget_5");
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setMinimumSize(QSize(140, 0));
        horizontalLayout_10 = new QHBoxLayout(widget_5);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_4 = new QLabel(widget_5);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(30, 30));
        label_4->setMaximumSize(QSize(30, 30));

        horizontalLayout_9->addWidget(label_4);

        label_3 = new QLabel(widget_5);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"padding-left:10px;"));

        horizontalLayout_9->addWidget(label_3);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        horizontalLayout_7->addWidget(widget_5);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout->addWidget(widget);


        verticalLayout_2->addLayout(verticalLayout);

        widget_2 = new QWidget(Rightsidebar);
        widget_2->setObjectName("widget_2");
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(widget_3);
        label->setObjectName("label");
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(0, 40));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft JhengHei UI")});
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: rgba(255, 255, 255, 0.05);\n"
"    color: white;\n"
"    border: 1px solid rgba(255, 255, 255, 0.2);\n"
"    border-radius: 8px;\n"
"    padding: 8px;\n"
"    font-size: 14px;\n"
"}"));

        horizontalLayout_3->addWidget(label);

        subEventCountInput = new QLineEdit(widget_3);
        subEventCountInput->setObjectName("subEventCountInput");
        subEventCountInput->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:white;\n"
"}"));

        horizontalLayout_3->addWidget(subEventCountInput);

        generateButton = new QPushButton(widget_3);
        generateButton->setObjectName("generateButton");
        sizePolicy2.setHeightForWidth(generateButton->sizePolicy().hasHeightForWidth());
        generateButton->setSizePolicy(sizePolicy2);
        generateButton->setMinimumSize(QSize(115, 30));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font4.setPointSize(16);
        font4.setBold(true);
        generateButton->setFont(font4);
        generateButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(55,55,55);\n"
"color:white;\n"
"border:none;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"	background-color: rgb(255, 170, 255);\n"
"color:black;\n"
"}"));

        horizontalLayout_3->addWidget(generateButton);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(widget_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        scrollArea = new QScrollArea(widget_2);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy3);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 784, 126));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName("verticalLayout_5");
        subEventContainer = new QWidget(scrollAreaWidgetContents);
        subEventContainer->setObjectName("subEventContainer");

        verticalLayout_5->addWidget(subEventContainer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        widget_4->setMinimumSize(QSize(0, 60));
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        removeSubEventButton = new QPushButton(widget_4);
        removeSubEventButton->setObjectName("removeSubEventButton");
        sizePolicy2.setHeightForWidth(removeSubEventButton->sizePolicy().hasHeightForWidth());
        removeSubEventButton->setSizePolicy(sizePolicy2);
        removeSubEventButton->setMinimumSize(QSize(150, 30));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font5.setPointSize(15);
        font5.setBold(true);
        removeSubEventButton->setFont(font5);
        removeSubEventButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(55,55,55);\n"
"color:white;\n"
"border:none;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"	background-color: rgb(255, 170, 255);\n"
"color:black;\n"
"}"));

        horizontalLayout_5->addWidget(removeSubEventButton);

        addOneSubEventButton = new QPushButton(widget_4);
        addOneSubEventButton->setObjectName("addOneSubEventButton");
        sizePolicy2.setHeightForWidth(addOneSubEventButton->sizePolicy().hasHeightForWidth());
        addOneSubEventButton->setSizePolicy(sizePolicy2);
        addOneSubEventButton->setMinimumSize(QSize(150, 30));
        addOneSubEventButton->setFont(font5);
        addOneSubEventButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(55,55,55);\n"
"color:white;\n"
"border:none;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"	background-color: rgb(255, 170, 255);\n"
"color:black;\n"
"}"));

        horizontalLayout_5->addWidget(addOneSubEventButton);

        addSubEventButton = new QPushButton(widget_4);
        addSubEventButton->setObjectName("addSubEventButton");
        sizePolicy2.setHeightForWidth(addSubEventButton->sizePolicy().hasHeightForWidth());
        addSubEventButton->setSizePolicy(sizePolicy2);
        addSubEventButton->setMinimumSize(QSize(150, 30));
        addSubEventButton->setFont(font5);
        addSubEventButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(55,55,55);\n"
"color:white;\n"
"border:none;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"	background-color: rgb(255, 170, 255);\n"
"color:black;\n"
"}"));

        horizontalLayout_5->addWidget(addSubEventButton);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_4->addWidget(widget_4);


        verticalLayout_2->addWidget(widget_2);


        horizontalLayout_2->addWidget(Rightsidebar);

        placemanage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(placemanage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1022, 18));
        placemanage->setMenuBar(menubar);
        statusbar = new QStatusBar(placemanage);
        statusbar->setObjectName("statusbar");
        placemanage->setStatusBar(statusbar);

        retranslateUi(placemanage);

        QMetaObject::connectSlotsByName(placemanage);
    } // setupUi

    void retranslateUi(QMainWindow *placemanage)
    {
        placemanage->setWindowTitle(QCoreApplication::translate("placemanage", "MainWindow", nullptr));
        label_8->setText(QCoreApplication::translate("placemanage", "EVENTRA", nullptr));
        label_9->setText(QString());
        dashboard_2->setText(QCoreApplication::translate("placemanage", "DashBoard", nullptr));
        label_10->setText(QString());
        Profile_2->setText(QCoreApplication::translate("placemanage", "Profile", nullptr));
        label_11->setText(QString());
        Booking->setText(QCoreApplication::translate("placemanage", "Booking", nullptr));
        label_13->setText(QString());
        Help_Center->setText(QCoreApplication::translate("placemanage", "Help Center", nullptr));
        label_2->setText(QCoreApplication::translate("placemanage", "Manage your Sub event", nullptr));
        label_4->setText(QCoreApplication::translate("placemanage", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("placemanage", "ADMIN", nullptr));
        label->setText(QCoreApplication::translate("placemanage", "How many subevents do you want to manage?", nullptr));
        generateButton->setText(QCoreApplication::translate("placemanage", "Generate", nullptr));
        removeSubEventButton->setText(QCoreApplication::translate("placemanage", "Remove", nullptr));
        addOneSubEventButton->setText(QCoreApplication::translate("placemanage", "Add", nullptr));
        addSubEventButton->setText(QCoreApplication::translate("placemanage", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class placemanage: public Ui_placemanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACEMANAGE_H
