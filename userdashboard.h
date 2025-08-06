#ifndef USERDASHBOARD_H
#define USERDASHBOARD_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QScrollArea>
#include <QSqlQuery>
#include <QSqlError>
#include<QLabel>
#include<ticketwindow.h>
class ticketwindow;
class login;

namespace Ui {
class UserDashboard;
}

class UserDashboard : public QMainWindow
{
    Q_OBJECT

public:
    // Constructor now takes userId and optional parent
    explicit UserDashboard(int userId, QWidget *parent = nullptr);
    ~UserDashboard();

private slots:
    void on_pushButton_2_clicked();
     void on_Logout_clicked();
private:
    Ui::UserDashboard *ui;
    QVBoxLayout *eventLayout;
    QWidget *eventWidget;
    QScrollArea *scrollArea;
     QLabel *greetingLabel;
    ticketwindow *tickets;
    login *loginWindow;
    int currentUserId;
int currentEventId;    // Stores logged-in user ID

    void loadEvents();
    void loadEventDetail(int eventId);   // To fetch and show events as buttons
};

#endif // USERDASHBOARD_H
