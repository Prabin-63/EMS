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
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(30, 30));
        label_2->setMaximumSize(QSize(30, 30));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/event.png")));
        label_2->setScaledContents(true);

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(widget_8);
        label_3->setObjectName("label_3");
        QFont font;
        font.setPointSize(16);
        label_3->setFont(font);
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
