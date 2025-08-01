/********************************************************************************
** Form generated from reading UI file 'addvolunteername.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVOLUNTEERNAME_H
#define UI_ADDVOLUNTEERNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_AddVolunteerName
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
    QLabel *label_20;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_58;
    QHBoxLayout *horizontalLayout_59;
    QLabel *label_26;
    QPushButton *dashboard_5;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout_60;
    QHBoxLayout *horizontalLayout_61;
    QLabel *label_27;
    QPushButton *Profile_4;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_62;
    QHBoxLayout *horizontalLayout_63;
    QLabel *label_28;
    QPushButton *Booking_4;
    QWidget *widget_20;
    QHBoxLayout *horizontalLayout_64;
    QHBoxLayout *horizontalLayout_65;
    QLabel *label_29;
    QPushButton *Managing_4;
    QWidget *widget_21;
    QHBoxLayout *horizontalLayout_66;
    QHBoxLayout *horizontalLayout_67;
    QLabel *label_30;
    QPushButton *Help_Center_4;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QWidget *widget_22;
    QHBoxLayout *horizontalLayout_68;
    QHBoxLayout *horizontalLayout_69;
    QLabel *label_31;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_8;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *scrollContent;
    QWidget *widget_4;
    QPushButton *Savevolunteers;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddVolunteerName)
    {
        if (AddVolunteerName->objectName().isEmpty())
            AddVolunteerName->setObjectName("AddVolunteerName");
        AddVolunteerName->resize(800, 600);
        AddVolunteerName->setMinimumSize(QSize(0, 0));
        AddVolunteerName->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(AddVolunteerName);
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
        label_20 = new QLabel(LeftSidebar);
        label_20->setObjectName("label_20");
        QFont font;
        font.setFamilies({QString::fromUtf8("SimSun")});
        font.setPointSize(20);
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8("QLabel{\n"
"padding-top:20px;\n"
"color:white;\n"
"}"));
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_8->addWidget(label_20);


        verticalLayout_7->addLayout(verticalLayout_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);

        widget_17 = new QWidget(LeftSidebar);
        widget_17->setObjectName("widget_17");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_17->sizePolicy().hasHeightForWidth());
        widget_17->setSizePolicy(sizePolicy1);
        widget_17->setMinimumSize(QSize(0, 40));
        horizontalLayout_58 = new QHBoxLayout(widget_17);
        horizontalLayout_58->setObjectName("horizontalLayout_58");
        horizontalLayout_59 = new QHBoxLayout();
        horizontalLayout_59->setObjectName("horizontalLayout_59");
        label_26 = new QLabel(widget_17);
        label_26->setObjectName("label_26");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy2);
        label_26->setMinimumSize(QSize(20, 20));
        label_26->setMaximumSize(QSize(20, 20));
        label_26->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-dashboard-50.png")));
        label_26->setScaledContents(true);

        horizontalLayout_59->addWidget(label_26);

        dashboard_5 = new QPushButton(widget_17);
        dashboard_5->setObjectName("dashboard_5");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Fluent Icons")});
        font1.setPointSize(10);
        dashboard_5->setFont(font1);
        dashboard_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_59->addWidget(dashboard_5);


        horizontalLayout_58->addLayout(horizontalLayout_59);


        verticalLayout_7->addWidget(widget_17);

        widget_18 = new QWidget(LeftSidebar);
        widget_18->setObjectName("widget_18");
        sizePolicy1.setHeightForWidth(widget_18->sizePolicy().hasHeightForWidth());
        widget_18->setSizePolicy(sizePolicy1);
        widget_18->setMinimumSize(QSize(0, 40));
        horizontalLayout_60 = new QHBoxLayout(widget_18);
        horizontalLayout_60->setObjectName("horizontalLayout_60");
        horizontalLayout_61 = new QHBoxLayout();
        horizontalLayout_61->setObjectName("horizontalLayout_61");
        label_27 = new QLabel(widget_18);
        label_27->setObjectName("label_27");
        sizePolicy2.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy2);
        label_27->setMinimumSize(QSize(20, 20));
        label_27->setMaximumSize(QSize(20, 20));
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-profile-48.png")));
        label_27->setScaledContents(true);

        horizontalLayout_61->addWidget(label_27);

        Profile_4 = new QPushButton(widget_18);
        Profile_4->setObjectName("Profile_4");
        Profile_4->setFont(font1);
        Profile_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_61->addWidget(Profile_4);


        horizontalLayout_60->addLayout(horizontalLayout_61);


        verticalLayout_7->addWidget(widget_18);

        widget_19 = new QWidget(LeftSidebar);
        widget_19->setObjectName("widget_19");
        sizePolicy1.setHeightForWidth(widget_19->sizePolicy().hasHeightForWidth());
        widget_19->setSizePolicy(sizePolicy1);
        widget_19->setMinimumSize(QSize(0, 40));
        horizontalLayout_62 = new QHBoxLayout(widget_19);
        horizontalLayout_62->setObjectName("horizontalLayout_62");
        horizontalLayout_63 = new QHBoxLayout();
        horizontalLayout_63->setObjectName("horizontalLayout_63");
        label_28 = new QLabel(widget_19);
        label_28->setObjectName("label_28");
        sizePolicy2.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy2);
        label_28->setMinimumSize(QSize(20, 20));
        label_28->setMaximumSize(QSize(20, 20));
        label_28->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-booking-48.png")));
        label_28->setScaledContents(true);

        horizontalLayout_63->addWidget(label_28);

        Booking_4 = new QPushButton(widget_19);
        Booking_4->setObjectName("Booking_4");
        Booking_4->setFont(font1);
        Booking_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_63->addWidget(Booking_4);


        horizontalLayout_62->addLayout(horizontalLayout_63);


        verticalLayout_7->addWidget(widget_19);

        widget_20 = new QWidget(LeftSidebar);
        widget_20->setObjectName("widget_20");
        sizePolicy1.setHeightForWidth(widget_20->sizePolicy().hasHeightForWidth());
        widget_20->setSizePolicy(sizePolicy1);
        widget_20->setMinimumSize(QSize(0, 40));
        horizontalLayout_64 = new QHBoxLayout(widget_20);
        horizontalLayout_64->setObjectName("horizontalLayout_64");
        horizontalLayout_65 = new QHBoxLayout();
        horizontalLayout_65->setObjectName("horizontalLayout_65");
        label_29 = new QLabel(widget_20);
        label_29->setObjectName("label_29");
        sizePolicy2.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy2);
        label_29->setMinimumSize(QSize(20, 20));
        label_29->setMaximumSize(QSize(20, 20));
        label_29->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-hierarchy-48.png")));
        label_29->setScaledContents(true);

        horizontalLayout_65->addWidget(label_29);

        Managing_4 = new QPushButton(widget_20);
        Managing_4->setObjectName("Managing_4");
        Managing_4->setFont(font1);
        Managing_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_65->addWidget(Managing_4);


        horizontalLayout_64->addLayout(horizontalLayout_65);


        verticalLayout_7->addWidget(widget_20);

        widget_21 = new QWidget(LeftSidebar);
        widget_21->setObjectName("widget_21");
        sizePolicy1.setHeightForWidth(widget_21->sizePolicy().hasHeightForWidth());
        widget_21->setSizePolicy(sizePolicy1);
        widget_21->setMinimumSize(QSize(0, 40));
        horizontalLayout_66 = new QHBoxLayout(widget_21);
        horizontalLayout_66->setObjectName("horizontalLayout_66");
        horizontalLayout_67 = new QHBoxLayout();
        horizontalLayout_67->setObjectName("horizontalLayout_67");
        label_30 = new QLabel(widget_21);
        label_30->setObjectName("label_30");
        sizePolicy2.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy2);
        label_30->setMinimumSize(QSize(20, 20));
        label_30->setMaximumSize(QSize(20, 20));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-help-center-48.png")));
        label_30->setScaledContents(true);

        horizontalLayout_67->addWidget(label_30);

        Help_Center_4 = new QPushButton(widget_21);
        Help_Center_4->setObjectName("Help_Center_4");
        Help_Center_4->setFont(font1);
        Help_Center_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color:white;\n"
"	background-color: rgb(111, 111, 111);\n"
"padding:5px;\n"
"border:none;\n"
"border-radius:7px;\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(188, 0, 188);\n"
"}"));

        horizontalLayout_67->addWidget(Help_Center_4);


        horizontalLayout_66->addLayout(horizontalLayout_67);


        verticalLayout_7->addWidget(widget_21);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_7);

        widget_22 = new QWidget(LeftSidebar);
        widget_22->setObjectName("widget_22");
        sizePolicy1.setHeightForWidth(widget_22->sizePolicy().hasHeightForWidth());
        widget_22->setSizePolicy(sizePolicy1);
        widget_22->setMinimumSize(QSize(0, 40));
        horizontalLayout_68 = new QHBoxLayout(widget_22);
        horizontalLayout_68->setObjectName("horizontalLayout_68");
        horizontalLayout_69 = new QHBoxLayout();
        horizontalLayout_69->setObjectName("horizontalLayout_69");
        label_31 = new QLabel(widget_22);
        label_31->setObjectName("label_31");
        sizePolicy2.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy2);
        label_31->setMinimumSize(QSize(20, 20));
        label_31->setMaximumSize(QSize(20, 20));
        label_31->setPixmap(QPixmap(QString::fromUtf8(":/resources/icons8-log-out-48.png")));
        label_31->setScaledContents(true);

        horizontalLayout_69->addWidget(label_31);

        pushButton_6 = new QPushButton(widget_22);
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

        horizontalLayout_69->addWidget(pushButton_6);


        horizontalLayout_68->addLayout(horizontalLayout_69);


        verticalLayout_7->addWidget(widget_22);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_8);


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

        scrollArea = new QScrollArea(widget_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 574, 426));
        scrollContent = new QWidget(scrollAreaWidgetContents);
        scrollContent->setObjectName("scrollContent");
        scrollContent->setGeometry(QRect(0, 0, 581, 461));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        verticalLayout_2->addLayout(verticalLayout);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        widget_4->setMinimumSize(QSize(0, 40));
        Savevolunteers = new QPushButton(widget_4);
        Savevolunteers->setObjectName("Savevolunteers");
        Savevolunteers->setGeometry(QRect(530, 0, 60, 18));
        Savevolunteers->setMinimumSize(QSize(60, 0));
        Savevolunteers->setMaximumSize(QSize(60, 16777215));
        Savevolunteers->setStyleSheet(QString::fromUtf8("background-color:rgb(55,55,55);\n"
"color:white;\n"
"border:none;"));

        verticalLayout_2->addWidget(widget_4);


        horizontalLayout->addWidget(widget_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        AddVolunteerName->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddVolunteerName);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        AddVolunteerName->setMenuBar(menubar);
        statusbar = new QStatusBar(AddVolunteerName);
        statusbar->setObjectName("statusbar");
        AddVolunteerName->setStatusBar(statusbar);

        retranslateUi(AddVolunteerName);

        QMetaObject::connectSlotsByName(AddVolunteerName);
    } // setupUi

    void retranslateUi(QMainWindow *AddVolunteerName)
    {
        AddVolunteerName->setWindowTitle(QCoreApplication::translate("AddVolunteerName", "MainWindow", nullptr));
        label_20->setText(QCoreApplication::translate("AddVolunteerName", "EVENTRA", nullptr));
        label_26->setText(QString());
        dashboard_5->setText(QCoreApplication::translate("AddVolunteerName", "DashBoard", nullptr));
        label_27->setText(QString());
        Profile_4->setText(QCoreApplication::translate("AddVolunteerName", "Profile", nullptr));
        label_28->setText(QString());
        Booking_4->setText(QCoreApplication::translate("AddVolunteerName", "Booking", nullptr));
        label_29->setText(QString());
        Managing_4->setText(QCoreApplication::translate("AddVolunteerName", "Managing", nullptr));
        label_30->setText(QString());
        Help_Center_4->setText(QCoreApplication::translate("AddVolunteerName", "Help Center", nullptr));
        label_31->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("AddVolunteerName", "LOG OUT", nullptr));
        Savevolunteers->setText(QCoreApplication::translate("AddVolunteerName", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddVolunteerName: public Ui_AddVolunteerName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVOLUNTEERNAME_H
