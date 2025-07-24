/********************************************************************************
** Form generated from reading UI file 'viewvolunteers.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWVOLUNTEERS_H
#define UI_VIEWVOLUNTEERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ViewVolunteers
{
public:

    void setupUi(QDialog *ViewVolunteers)
    {
        if (ViewVolunteers->objectName().isEmpty())
            ViewVolunteers->setObjectName("ViewVolunteers");
        ViewVolunteers->resize(400, 300);
        ViewVolunteers->setStyleSheet(QString::fromUtf8("background-color:black;"));

        retranslateUi(ViewVolunteers);

        QMetaObject::connectSlotsByName(ViewVolunteers);
    } // setupUi

    void retranslateUi(QDialog *ViewVolunteers)
    {
        ViewVolunteers->setWindowTitle(QCoreApplication::translate("ViewVolunteers", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewVolunteers: public Ui_ViewVolunteers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWVOLUNTEERS_H
