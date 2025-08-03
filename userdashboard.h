#ifndef USERDASHBOARD_H
#define USERDASHBOARD_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QPushButton>
#include <QScrollArea>
#include <QSqlQuery>
#include <QSqlError>
#include<QLabel>

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

private:
    Ui::UserDashboard *ui;
    QVBoxLayout *eventLayout;
    QWidget *eventWidget;
    QScrollArea *scrollArea;
     QLabel *greetingLabel;

    int currentUserId;  // Stores logged-in user ID

    void loadEvents();
    void loadEventDetail(int eventId);   // To fetch and show events as buttons
};

#endif // USERDASHBOARD_H
