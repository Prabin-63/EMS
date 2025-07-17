#ifndef PROFILE_H
#define PROFILE_H
#include <QSqlQuery>
#include <QWidget>

namespace Ui {
class profile;
}

class profile : public QWidget
{
    Q_OBJECT

public:
    explicit profile(QWidget *parent = nullptr);
    ~profile();

private slots:


    void on_filterButton_clicked();


private:
    Ui::profile *ui;
       void loadAllEvents();
    void filterEvents(const QString &filterType, const QString &filterValue);
    void populateTable(QSqlQuery &query);
};

#endif // PROFILE_H
