#ifndef ADDVOLUNTEERNAME_H
#define ADDVOLUNTEERNAME_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QVector>
#include <QLineEdit>

namespace Ui {
class AddVolunteerName;
}

class AddVolunteerName : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddVolunteerName(QWidget *parent = nullptr);
    ~AddVolunteerName();

private slots:
    void generateVolunteers();
    void addVolunteer();
    void removeVolunteer();

private:
    Ui::AddVolunteerName *ui;
    QVBoxLayout *volunteerLayout;
    QVector<QLineEdit*> volunteerLineEdits;
};

#endif // ADDVOLUNTEERNAME_H
