/********************************************************************************
** Form generated from reading UI file 'viewvolunteer.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWVOLUNTEER_H
#define UI_VIEWVOLUNTEER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ViewVolunteer
{
public:

    void setupUi(QDialog *ViewVolunteer)
    {
        if (ViewVolunteer->objectName().isEmpty())
            ViewVolunteer->setObjectName("ViewVolunteer");
        ViewVolunteer->resize(400, 300);

        retranslateUi(ViewVolunteer);

        QMetaObject::connectSlotsByName(ViewVolunteer);
    } // setupUi

    void retranslateUi(QDialog *ViewVolunteer)
    {
        ViewVolunteer->setWindowTitle(QCoreApplication::translate("ViewVolunteer", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewVolunteer: public Ui_ViewVolunteer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWVOLUNTEER_H
