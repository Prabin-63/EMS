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
    QWidget *Rightsidebar;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
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
    QPushButton *addSubEventButton;
    QPushButton *addOneSubEventButton;
    QPushButton *removeSubEventButton;
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
"background-color:white;\n"
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
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(0, 60));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(55, 55, 55);\n"
"border-radius:20px;\n"
"}"));

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
        generateButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(55,55,55);\n"
"color:white;\n"
"border:none;\n"
"}"));

        horizontalLayout_3->addWidget(generateButton);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(widget_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        scrollArea = new QScrollArea(widget_2);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 778, 460));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName("verticalLayout_5");
        subEventContainer = new QWidget(scrollAreaWidgetContents);
        subEventContainer->setObjectName("subEventContainer");

        verticalLayout_5->addWidget(subEventContainer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        horizontalLayout_6 = new QHBoxLayout(widget_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        addSubEventButton = new QPushButton(widget_4);
        addSubEventButton->setObjectName("addSubEventButton");
        addSubEventButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(55,55,55);\n"
"color:white;\n"
"border:none;\n"
"}"));

        horizontalLayout_5->addWidget(addSubEventButton);

        addOneSubEventButton = new QPushButton(widget_4);
        addOneSubEventButton->setObjectName("addOneSubEventButton");
        addOneSubEventButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(55,55,55);\n"
"color:white;\n"
"border:none;\n"
"}"));

        horizontalLayout_5->addWidget(addOneSubEventButton);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        removeSubEventButton = new QPushButton(widget_4);
        removeSubEventButton->setObjectName("removeSubEventButton");
        removeSubEventButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(55,55,55);\n"
"color:white;\n"
"border:none;\n"
"}"));

        horizontalLayout_6->addWidget(removeSubEventButton);


        verticalLayout_4->addWidget(widget_4);


        verticalLayout_2->addWidget(widget_2);


        horizontalLayout_2->addWidget(Rightsidebar);

        placemanage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(placemanage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1022, 22));
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
        label->setText(QCoreApplication::translate("placemanage", "How many subevents do you want to manage?", nullptr));
        generateButton->setText(QCoreApplication::translate("placemanage", "Generate", nullptr));
        addSubEventButton->setText(QCoreApplication::translate("placemanage", "Save", nullptr));
        addOneSubEventButton->setText(QCoreApplication::translate("placemanage", "addOneSubEventButton", nullptr));
        removeSubEventButton->setText(QCoreApplication::translate("placemanage", "removeSubEventButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class placemanage: public Ui_placemanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACEMANAGE_H
