#ifndef VIEWVOLUNTEER_H
#define VIEWVOLUNTEER_H

#include <QDialog>
#include <QVBoxLayout>

namespace Ui {
class ViewVolunteer;
}

class ViewVolunteer : public QDialog
{
    Q_OBJECT

public:
    explicit ViewVolunteer(int eventId, QWidget *parent = nullptr);
    ~ViewVolunteer();

private:
    Ui::ViewVolunteer *ui;
    int currentEventId;                   // ID of the current event
    QVBoxLayout *layout;                  // Layout to display volunteers

    void loadVolunteersBySubevent();      // Function to load volunteers by sub-event
};

#endif // VIEWVOLUNTEER_H
