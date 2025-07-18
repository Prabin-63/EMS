#ifndef ADDVOLUNTEERNAME_H
#define ADDVOLUNTEERNAME_H

#include <QMainWindow>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class AddVolunteerName; }
QT_END_NAMESPACE

class AddVolunteerName : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddVolunteerName(QWidget *parent = nullptr);
    ~AddVolunteerName();

private slots:


private:
    Ui::AddVolunteerName *ui;

    QVBoxLayout *volunteerLayout;
    QVector<QLineEdit*> volunteerLineEdits;

    void loadEvents();

};

#endif // ADDVOLUNTEERNAME_H
