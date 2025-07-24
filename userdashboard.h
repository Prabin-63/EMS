#ifndef USERDASHBOARD_H
#define USERDASHBOARD_H

#include <QMainWindow>

namespace Ui {
class userdashboard;
}

class userdashboard : public QMainWindow
{
    Q_OBJECT

public:
   explicit userdashboard(int userId, QWidget *parent = nullptr);
    ~userdashboard();

private:
    Ui::userdashboard *ui;
    int userId;
    int eventId = -1;
    void loadUserEvents();
    void loadEventData(int eventId);
    void onEventChanged(int index);
};

#endif // USERDASHBOARD_H
