#ifndef ADDVOLUNTEERNAME_H
#define ADDVOLUNTEERNAME_H

#include <QMainWindow>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QVector>

namespace Ui {
class AddVolunteerName;
}

class AddVolunteerName : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddVolunteerName(int eventId, QWidget *parent = nullptr); // ✅ add eventId
    ~AddVolunteerName();

private slots:
    void on_Savevolunteers_clicked();
    void assignVolunteersToSubevents();

private:
    Ui::AddVolunteerName *ui;
    QVector<QLineEdit*> lineEdits;

    QVBoxLayout *layout;
    int currentEventId; // ✅ to store the event ID

    void setupVolunteerFields();
    int getTotalVolunteersFromDB(); // Now uses event_id
};

#endif // ADDVOLUNTEERNAME_H
