#ifndef PLACEMANAGE_H
#define PLACEMANAGE_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLineEdit>
#include "dashboard.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class placemanage;  // Capital P, must match ui_placemanage.h generated class
}
QT_END_NAMESPACE

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
    QVBoxLayout *subEventLayout;

    void createSubEventForm();
    void generatePlaceInputs();
    void savePlaceToDatabase();
    void removeSubEvent(QWidget* subEventWidget);

    void styleLineEdit(QLineEdit* lineEdit, const QString& placeholder);



    int userId = -1;
    int eventId = -1;
    dashboard* dash = nullptr;
};

#endif // PLACEMANAGE_H
