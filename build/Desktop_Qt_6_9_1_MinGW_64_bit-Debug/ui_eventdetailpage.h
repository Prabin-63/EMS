/********************************************************************************
** Form generated from reading UI file 'eventdetailpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTDETAILPAGE_H
#define UI_EVENTDETAILPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventDetailPage
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QWidget *widget_2;
    QWidget *widget;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_6;
    QFrame *eventDetailFrame;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QScrollArea *subEventScroll;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EventDetailPage)
    {
        if (EventDetailPage->objectName().isEmpty())
            EventDetailPage->setObjectName("EventDetailPage");
        EventDetailPage->resize(800, 600);
        centralwidget = new QWidget(EventDetailPage);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(50, 0));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: #257180;"));

        horizontalLayout->addWidget(widget_3);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(50, 0));
        widget_2->setStyleSheet(QString::fromUtf8("background-color:#F2E5BF;"));

        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(50, 0));
        widget->setStyleSheet(QString::fromUtf8("background-color: #FD8B51;"));

        horizontalLayout->addWidget(widget);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName("widget_6");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy1);
        widget_6->setMinimumSize(QSize(0, 60));
        widget_6->setStyleSheet(QString::fromUtf8("background-color:#CB6040;\n"
"border-radius:20px;"));
        horizontalLayout_7 = new QHBoxLayout(widget_6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton = new QPushButton(widget_6);
        pushButton->setObjectName("pushButton");

        horizontalLayout_7->addWidget(pushButton);


        verticalLayout_2->addWidget(widget_6);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        widget_5->setMinimumSize(QSize(0, 60));
        horizontalLayout_6 = new QHBoxLayout(widget_5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        eventDetailFrame = new QFrame(widget_5);
        eventDetailFrame->setObjectName("eventDetailFrame");
        eventDetailFrame->setFrameShape(QFrame::Shape::StyledPanel);
        eventDetailFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_4 = new QHBoxLayout(eventDetailFrame);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(eventDetailFrame);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(eventDetailFrame);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        label = new QLabel(eventDetailFrame);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        label_4 = new QLabel(eventDetailFrame);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_6->addWidget(eventDetailFrame);


        verticalLayout_2->addWidget(widget_5);

        subEventScroll = new QScrollArea(widget_4);
        subEventScroll->setObjectName("subEventScroll");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(subEventScroll->sizePolicy().hasHeightForWidth());
        subEventScroll->setSizePolicy(sizePolicy2);
        subEventScroll->setMinimumSize(QSize(0, 0));
        subEventScroll->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 610, 364));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        verticalLayout_3->addLayout(verticalLayout);

        subEventScroll->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(subEventScroll);

        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName("widget_7");
        sizePolicy1.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy1);
        widget_7->setMinimumSize(QSize(0, 40));
        horizontalLayout_8 = new QHBoxLayout(widget_7);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_2 = new QPushButton(widget_7);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_5->addWidget(pushButton_2);


        horizontalLayout_8->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(widget_7);


        horizontalLayout->addWidget(widget_4);


        horizontalLayout_2->addLayout(horizontalLayout);

        EventDetailPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EventDetailPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        EventDetailPage->setMenuBar(menubar);
        statusbar = new QStatusBar(EventDetailPage);
        statusbar->setObjectName("statusbar");
        EventDetailPage->setStatusBar(statusbar);

        retranslateUi(EventDetailPage);

        QMetaObject::connectSlotsByName(EventDetailPage);
    } // setupUi

    void retranslateUi(QMainWindow *EventDetailPage)
    {
        EventDetailPage->setWindowTitle(QCoreApplication::translate("EventDetailPage", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("EventDetailPage", "Ticket", nullptr));
        label_2->setText(QCoreApplication::translate("EventDetailPage", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("EventDetailPage", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("EventDetailPage", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("EventDetailPage", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("EventDetailPage", "Ticket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EventDetailPage: public Ui_EventDetailPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTDETAILPAGE_H
