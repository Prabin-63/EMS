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
    int currentEventId;
    QVBoxLayout *layout;

    void loadVolunteersBySubevent();
};

#endif // VIEWVOLUNTEER_H
