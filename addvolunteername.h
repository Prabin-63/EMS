#ifndef ADDVOLUNTEERNAME_H
#define ADDVOLUNTEERNAME_H

#include <QMainWindow>
#include <QLineEdit>
#include <QVector>
#include <QVBoxLayout>
#include "dashboard.h"

class dashboard;

namespace Ui {
class AddVolunteerName;
}

class AddVolunteerName : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddVolunteerName(int eventId, int userId, QWidget *parent = nullptr);
    ~AddVolunteerName();

private slots:
    void on_Savevolunteers_clicked();
    void on_dashboard_5_clicked();

private:
    Ui::AddVolunteerName *ui;
    int currentEventId;
    int currentUserId;
    QVector<QLineEdit*> lineEdits;
    QVBoxLayout *layout;
    dashboard *dash;

    int getTotalVolunteersFromDB();
    void setupVolunteerFields();
    void assignVolunteersToSubevents();
};

#endif // ADDVOLUNTEERNAME_H
