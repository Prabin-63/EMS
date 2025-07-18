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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddVolunteerName
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QComboBox *eventComboBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *volunteerLayout;
    QPushButton *saveVolunteers;

    void setupUi(QMainWindow *AddVolunteerName)
    {
        if (AddVolunteerName->objectName().isEmpty())
            AddVolunteerName->setObjectName("AddVolunteerName");
        AddVolunteerName->resize(600, 500);
        centralwidget = new QWidget(AddVolunteerName);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        eventComboBox = new QComboBox(centralwidget);
        eventComboBox->setObjectName("eventComboBox");
        eventComboBox->setMinimumSize(QSize(200, 30));

        verticalLayout->addWidget(eventComboBox);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 574, 432));
        volunteerLayout = new QVBoxLayout(scrollAreaWidgetContents);
        volunteerLayout->setObjectName("volunteerLayout");
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        saveVolunteers = new QPushButton(centralwidget);
        saveVolunteers->setObjectName("saveVolunteers");

        verticalLayout->addWidget(saveVolunteers);

        AddVolunteerName->setCentralWidget(centralwidget);

        retranslateUi(AddVolunteerName);

        QMetaObject::connectSlotsByName(AddVolunteerName);
    } // setupUi

    void retranslateUi(QMainWindow *AddVolunteerName)
    {
        AddVolunteerName->setWindowTitle(QCoreApplication::translate("AddVolunteerName", "Volunteer Management", nullptr));
        saveVolunteers->setText(QCoreApplication::translate("AddVolunteerName", "Save Volunteers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddVolunteerName: public Ui_AddVolunteerName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVOLUNTEERNAME_H
