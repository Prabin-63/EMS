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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
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

        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 586, 426));
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
        Savevolunteers->setText(QCoreApplication::translate("AddVolunteerName", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddVolunteerName: public Ui_AddVolunteerName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVOLUNTEERNAME_H
