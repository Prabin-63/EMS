#ifndef PROFILE_H
#define PROFILE_H

#include <QMainWindow>

class dashboard;  // Forward declaration

namespace Ui {
class Profile;
}

class Profile : public QMainWindow
{
    Q_OBJECT

public:
    explicit Profile(dashboard *dash, QWidget *parent = nullptr);
    ~Profile();

private slots:
    void on_dashboard_2_clicked();  // Button to go back to dashboard

private:
    Ui::Profile *ui;
    dashboard *dash;  // Pointer to original dashboard
};

#endif // PROFILE_H
