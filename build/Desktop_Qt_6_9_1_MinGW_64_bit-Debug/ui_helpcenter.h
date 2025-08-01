/********************************************************************************
** Form generated from reading UI file 'helpcenter.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPCENTER_H
#define UI_HELPCENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_HelpCenter
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QWidget *LeftSidebar;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QSpacerItem *verticalSpacer;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QPushButton *dashboard_2;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_10;
    QPushButton *Profile_2;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_11;
    QPushButton *Booking;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_12;
    QPushButton *Managing;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_13;
    QPushButton *Help_Center;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_14;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QWidget *widget_6;
    QWidget *widget_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HelpCenter)
    {
        if (HelpCenter->objectName().isEmpty())
            HelpCenter->setObjectName("HelpCenter");
        HelpCenter->resize(788, 505);
        centralwidget = new QWidget(HelpCenter);
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
        widget->setStyleSheet(QString::fromUtf8("background-color:rgb(55,55,55);\n"
""));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        LeftSidebar = new QWidget(widget);
        LeftSidebar->setObjectName("LeftSidebar");
        sizePolicy.setHeightForWidth(LeftSidebar->sizePolicy().hasHeightForWidth());
        LeftSidebar->setSizePolicy(sizePolicy);
        LeftSidebar->setMinimumSize(QSize(180, 0));
        LeftSidebar->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(55, 55, 55);\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(LeftSidebar);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
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

        verticalLayout_8->addWidget(label_8);


        verticalLayout_7->addLayout(verticalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        widget_9 = new QWidget(LeftSidebar);
        widget_9->setObjectName("widget_9");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy1);
        widget_9->setMinimumSize(QSize(0, 40));
        horizontalLayout_11 = new QHBoxLayout(widget_9);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_9 = new QLabel(widget_9);
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

        dashboard_2 = new QPushButton(widget_9);
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


        verticalLayout_7->addWidget(widget_9);

        widget_10 = new QWidget(LeftSidebar);
        widget_10->setObjectName("widget_10");
        sizePolicy1.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy1);
        widget_10->setMinimumSize(QSize(0, 40));
        horizontalLayout_13 = new QHBoxLayout(widget_10);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_10 = new QLabel(widget_10);
        label_10->setObjectName("label_10");
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMinimumSize(QSize(20, 20));
        label_10->setMaximumSize(QSize(20, 20));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-profile-48.png")));
        label_10->setScaledContents(true);

        horizontalLayout_14->addWidget(label_10);

        Profile_2 = new QPushButton(widget_10);
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


        verticalLayout_7->addWidget(widget_10);

        widget_11 = new QWidget(LeftSidebar);
        widget_11->setObjectName("widget_11");
        sizePolicy1.setHeightForWidth(widget_11->sizePolicy().hasHeightForWidth());
        widget_11->setSizePolicy(sizePolicy1);
        widget_11->setMinimumSize(QSize(0, 40));
        horizontalLayout_15 = new QHBoxLayout(widget_11);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_11 = new QLabel(widget_11);
        label_11->setObjectName("label_11");
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMinimumSize(QSize(20, 20));
        label_11->setMaximumSize(QSize(20, 20));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-booking-48.png")));
        label_11->setScaledContents(true);

        horizontalLayout_16->addWidget(label_11);

        Booking = new QPushButton(widget_11);
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


        verticalLayout_7->addWidget(widget_11);

        widget_12 = new QWidget(LeftSidebar);
        widget_12->setObjectName("widget_12");
        sizePolicy1.setHeightForWidth(widget_12->sizePolicy().hasHeightForWidth());
        widget_12->setSizePolicy(sizePolicy1);
        widget_12->setMinimumSize(QSize(0, 40));
        horizontalLayout_17 = new QHBoxLayout(widget_12);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_12 = new QLabel(widget_12);
        label_12->setObjectName("label_12");
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setMinimumSize(QSize(20, 20));
        label_12->setMaximumSize(QSize(20, 20));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-hierarchy-48.png")));
        label_12->setScaledContents(true);

        horizontalLayout_18->addWidget(label_12);

        Managing = new QPushButton(widget_12);
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


        verticalLayout_7->addWidget(widget_12);

        widget_13 = new QWidget(LeftSidebar);
        widget_13->setObjectName("widget_13");
        sizePolicy1.setHeightForWidth(widget_13->sizePolicy().hasHeightForWidth());
        widget_13->setSizePolicy(sizePolicy1);
        widget_13->setMinimumSize(QSize(0, 40));
        horizontalLayout_19 = new QHBoxLayout(widget_13);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_13 = new QLabel(widget_13);
        label_13->setObjectName("label_13");
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);
        label_13->setMinimumSize(QSize(20, 20));
        label_13->setMaximumSize(QSize(20, 20));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-help-center-48.png")));
        label_13->setScaledContents(true);

        horizontalLayout_20->addWidget(label_13);

        Help_Center = new QPushButton(widget_13);
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


        verticalLayout_7->addWidget(widget_13);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        widget_14 = new QWidget(LeftSidebar);
        widget_14->setObjectName("widget_14");
        sizePolicy1.setHeightForWidth(widget_14->sizePolicy().hasHeightForWidth());
        widget_14->setSizePolicy(sizePolicy1);
        widget_14->setMinimumSize(QSize(0, 40));
        horizontalLayout_21 = new QHBoxLayout(widget_14);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_14 = new QLabel(widget_14);
        label_14->setObjectName("label_14");
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        label_14->setMinimumSize(QSize(20, 20));
        label_14->setMaximumSize(QSize(20, 20));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-log-out-48.png")));
        label_14->setScaledContents(true);

        horizontalLayout_22->addWidget(label_14);

        pushButton_6 = new QPushButton(widget_14);
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


        verticalLayout_7->addWidget(widget_14);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        verticalLayout_6->addWidget(LeftSidebar);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");

        verticalLayout_6->addLayout(verticalLayout_5);


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

        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        verticalLayout_4 = new QVBoxLayout(widget_5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_8 = new QWidget(widget_5);
        widget_8->setObjectName("widget_8");
        horizontalLayout_4 = new QHBoxLayout(widget_8);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget_8);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(30, 30));
        label_2->setMaximumSize(QSize(30, 30));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/event.png")));
        label_2->setScaledContents(true);

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(widget_8);
        label_3->setObjectName("label_3");
        QFont font3;
        font3.setPointSize(16);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"padding-left:20px;"));

        horizontalLayout_3->addWidget(label_3);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(widget_8);

        label = new QLabel(widget_5);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"padding-left:12px;"));

        verticalLayout_3->addWidget(label);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout->addWidget(widget_5, 0, 0, 1, 1);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName("widget_6");

        gridLayout->addWidget(widget_6, 1, 0, 1, 1);

        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName("widget_7");

        gridLayout->addWidget(widget_7, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout->addWidget(widget_4);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(widget_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        HelpCenter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HelpCenter);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 788, 18));
        HelpCenter->setMenuBar(menubar);
        statusbar = new QStatusBar(HelpCenter);
        statusbar->setObjectName("statusbar");
        HelpCenter->setStatusBar(statusbar);

        retranslateUi(HelpCenter);

        QMetaObject::connectSlotsByName(HelpCenter);
    } // setupUi

    void retranslateUi(QMainWindow *HelpCenter)
    {
        HelpCenter->setWindowTitle(QCoreApplication::translate("HelpCenter", "MainWindow", nullptr));
        label_8->setText(QCoreApplication::translate("HelpCenter", "EVENTRA", nullptr));
        label_9->setText(QString());
        dashboard_2->setText(QCoreApplication::translate("HelpCenter", "DashBoard", nullptr));
        label_10->setText(QString());
        Profile_2->setText(QCoreApplication::translate("HelpCenter", "Profile", nullptr));
        label_11->setText(QString());
        Booking->setText(QCoreApplication::translate("HelpCenter", "Booking", nullptr));
        label_12->setText(QString());
        Managing->setText(QCoreApplication::translate("HelpCenter", "Managing", nullptr));
        label_13->setText(QString());
        Help_Center->setText(QCoreApplication::translate("HelpCenter", "Help Center", nullptr));
        label_14->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("HelpCenter", "LOG OUT", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("HelpCenter", "Schedule your Event", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HelpCenter: public Ui_HelpCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPCENTER_H
