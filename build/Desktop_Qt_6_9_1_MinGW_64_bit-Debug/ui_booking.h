/********************************************************************************
** Form generated from reading UI file 'booking.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKING_H
#define UI_BOOKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Booking
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *dashboard_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QPushButton *Profile;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QPushButton *Booking_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QPushButton *Managing;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_6;
    QPushButton *Help_Center;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_15;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_17;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_8;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_21;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_10;
    QLabel *label_9;
    QTableView *tableView;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_19;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *btnRefresh;
    QPushButton *btnExport;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Booking)
    {
        if (Booking->objectName().isEmpty())
            Booking->setObjectName("Booking");
        Booking->resize(800, 600);
        centralwidget = new QWidget(Booking);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(180, 0));
        widget_2->setStyleSheet(QString::fromUtf8("background-color:rgb(55,55,55);\n"
""));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget_2);
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

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        widget_4->setMinimumSize(QSize(0, 40));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget_4);
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

        dashboard_2 = new QPushButton(widget_4);
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


        verticalLayout->addWidget(widget_4);

        widget_3 = new QWidget(widget_2);
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


        verticalLayout->addWidget(widget_3);

        widget_9 = new QWidget(widget_2);
        widget_9->setObjectName("widget_9");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(40);
        sizePolicy3.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy3);
        horizontalLayout_8 = new QHBoxLayout(widget_9);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_4 = new QLabel(widget_9);
        label_4->setObjectName("label_4");
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(20, 20));
        label_4->setMaximumSize(QSize(20, 20));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-booking-48.png")));
        label_4->setScaledContents(true);

        horizontalLayout_7->addWidget(label_4);

        Booking_2 = new QPushButton(widget_9);
        Booking_2->setObjectName("Booking_2");
        Booking_2->setFont(font1);
        Booking_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_7->addWidget(Booking_2);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout->addWidget(widget_9);

        widget_5 = new QWidget(widget_2);
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


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(widget_2);
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


        verticalLayout->addWidget(widget_6);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName("widget_7");
        sizePolicy1.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy1);
        widget_7->setMinimumSize(QSize(0, 40));
        horizontalLayout_14 = new QHBoxLayout(widget_7);
        horizontalLayout_14->setObjectName("horizontalLayout_14");

        verticalLayout->addWidget(widget_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        widget_10 = new QWidget(widget);
        widget_10->setObjectName("widget_10");
        sizePolicy1.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy1);
        widget_10->setMinimumSize(QSize(0, 60));
        widget_10->setStyleSheet(QString::fromUtf8("background-color:rgb(55,55,55);\n"
"border-radius:20px;"));
        horizontalLayout_17 = new QHBoxLayout(widget_10);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_8 = new QLabel(widget_10);
        label_8->setObjectName("label_8");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sitka")});
        font2.setPointSize(22);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color:white;"));

        horizontalLayout_16->addWidget(label_8);

        widget_8 = new QWidget(widget_10);
        widget_8->setObjectName("widget_8");
        sizePolicy.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy);
        widget_8->setMinimumSize(QSize(138, 0));
        QFont font3;
        font3.setPointSize(19);
        widget_8->setFont(font3);
        horizontalLayout_21 = new QHBoxLayout(widget_8);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        label_10 = new QLabel(widget_8);
        label_10->setObjectName("label_10");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy4);
        label_10->setMinimumSize(QSize(30, 30));
        label_10->setMaximumSize(QSize(30, 30));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-name-50.png")));
        label_10->setScaledContents(true);

        horizontalLayout_20->addWidget(label_10);

        label_9 = new QLabel(widget_8);
        label_9->setObjectName("label_9");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Sitka")});
        font4.setPointSize(17);
        label_9->setFont(font4);
        label_9->setStyleSheet(QString::fromUtf8("color:white;\n"
"padding-left:10px;"));

        horizontalLayout_20->addWidget(label_9);


        horizontalLayout_21->addLayout(horizontalLayout_20);


        horizontalLayout_16->addWidget(widget_8);


        horizontalLayout_17->addLayout(horizontalLayout_16);


        horizontalLayout_15->addWidget(widget_10);


        verticalLayout_3->addLayout(horizontalLayout_15);

        tableView = new QTableView(widget);
        tableView->setObjectName("tableView");

        verticalLayout_3->addWidget(tableView);

        widget_11 = new QWidget(widget);
        widget_11->setObjectName("widget_11");
        sizePolicy1.setHeightForWidth(widget_11->sizePolicy().hasHeightForWidth());
        widget_11->setSizePolicy(sizePolicy1);
        widget_11->setMinimumSize(QSize(0, 40));
        horizontalLayout_19 = new QHBoxLayout(widget_11);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        btnRefresh = new QPushButton(widget_11);
        btnRefresh->setObjectName("btnRefresh");
        btnRefresh->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 6px 12px;\n"
"    border-radius: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}\n"
""));

        horizontalLayout_18->addWidget(btnRefresh);

        btnExport = new QPushButton(widget_11);
        btnExport->setObjectName("btnExport");
        btnExport->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"    color: white;\n"
"    font-size: 14px;\n"
"    padding: 6px 12px;\n"
"    border-radius: 6px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}\n"
""));

        horizontalLayout_18->addWidget(btnExport);


        horizontalLayout_19->addLayout(horizontalLayout_18);


        verticalLayout_3->addWidget(widget_11);


        horizontalLayout->addWidget(widget);


        horizontalLayout_2->addLayout(horizontalLayout);

        Booking->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Booking);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
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
        label->setText(QCoreApplication::translate("Booking", "EVENTRA", nullptr));
        label_2->setText(QString());
        dashboard_2->setText(QCoreApplication::translate("Booking", "DashBoard", nullptr));
        label_3->setText(QString());
        Profile->setText(QCoreApplication::translate("Booking", "Profile", nullptr));
        label_4->setText(QString());
        Booking_2->setText(QCoreApplication::translate("Booking", "Booking", nullptr));
        label_5->setText(QString());
        Managing->setText(QCoreApplication::translate("Booking", "Managing", nullptr));
        label_6->setText(QString());
        Help_Center->setText(QCoreApplication::translate("Booking", "Help Center", nullptr));
        label_8->setText(QCoreApplication::translate("Booking", "Booked Events", nullptr));
        label_10->setText(QString());
        label_9->setText(QCoreApplication::translate("Booking", "ADMIN", nullptr));
        btnRefresh->setText(QCoreApplication::translate("Booking", "Refresh", nullptr));
        btnExport->setText(QCoreApplication::translate("Booking", "Export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Booking: public Ui_Booking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKING_H
