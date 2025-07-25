#ifndef USERDASHBOARD_H
#define USERDASHBOARD_H


#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QScrollArea>
#include <QSqlQuery>
#include <QSqlError>

namespace Ui {
class UserDashboard;
}

class UserDashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserDashboard(QWidget *parent = nullptr);
    ~UserDashboard();

private:
    Ui::UserDashboard *ui;
    QVBoxLayout *eventLayout;
    QWidget *eventWidget;
    QScrollArea *scrollArea;

    void loadEvents();
void loadEventDetail(int eventId) ;   // To fetch and show events as buttons
};
#endif // USERDASHBOARD_H
