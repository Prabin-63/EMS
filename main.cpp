#include <QApplication>
#include "login.h"
#include "database.h"
#include "mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if (!connectDatabase()) {
        return -1; // exit app if DB connection fails
    }

    MainWindow w;
    w.show();

    return a.exec();
}
