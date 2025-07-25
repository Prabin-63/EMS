#ifndef PLACEMANAGE_H
#define PLACEMANAGE_H

#include <QMainWindow>
#include <QLineEdit>

namespace Ui {
class placemanage;
}

class dashboard;

class placemanage : public QMainWindow
{
    Q_OBJECT

public:
    explicit placemanage(int userId, int eventId, QWidget *parent = nullptr);
    ~placemanage();

private slots:
    void on_generateButton_clicked();
    void on_addSubEventButton_clicked();
    void on_addOneSubEventButton_clicked();
    void on_removeSubEventButton_clicked();

private:
    Ui::placemanage *ui;
    int userId;
    int eventId;
    dashboard* dash = nullptr; // combined declaration & initialization
    bool isInitialized;

    void styleLineEdit(QLineEdit* lineEdit, const QString& placeholder);
};

#endif // PLACEMANAGE_H
