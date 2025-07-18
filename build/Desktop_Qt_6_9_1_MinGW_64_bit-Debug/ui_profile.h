/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profile
{
public:
    QPushButton *filterButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName("profile");
        profile->resize(400, 300);
        filterButton = new QPushButton(profile);
        filterButton->setObjectName("filterButton");
        filterButton->setGeometry(QRect(10, 0, 211, 101));
        tableWidget = new QTableWidget(profile);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(130, 110, 256, 192));

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QWidget *profile)
    {
        profile->setWindowTitle(QCoreApplication::translate("profile", "Form", nullptr));
        filterButton->setText(QCoreApplication::translate("profile", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
