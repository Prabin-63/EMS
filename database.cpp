#include "database.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDir>
#include <QMessageBox>
#include <QApplication>
bool connectDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = QCoreApplication::applicationDirPath() + "/event_management.db";

    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "Database connection failed:" << db.lastError().text();
        QMessageBox::critical(nullptr, "Database Error",
                              "Failed to connect to database: " + db.lastError().text());
        return false;
    }

    qDebug() << "Database connected at:" << dbPath;

    QSqlQuery query;


    QString createUsersTable = "CREATE TABLE IF NOT EXISTS users ("
                               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                               "name TEXT NOT NULL, "
                               "email TEXT NOT NULL, "
                               "username TEXT UNIQUE NOT NULL, "
                               "password TEXT NOT NULL, "
                               "phone TEXT, "
                               "created_at DATETIME DEFAULT CURRENT_TIMESTAMP)";
    if (!query.exec(createUsersTable)) {
        qDebug() << "Failed to create users table:" << query.lastError().text();
        QMessageBox::critical(nullptr, "Database Error",
                              "Failed to create users table: " + query.lastError().text());
        return false;
    }

    qDebug() << "Users table ready.";


    QString createEventsTable = "CREATE TABLE IF NOT EXISTS events ("
                                "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                                "user_id INTEGER NOT NULL, "  //  Added user_id
                                "name TEXT NOT NULL, "
                                "venue TEXT NOT NULL, "
                                "date TEXT NOT NULL, "
                                "time TEXT NOT NULL, "
                                "organizer_contact TEXT NOT NULL, "
                                "created_at DATETIME DEFAULT CURRENT_TIMESTAMP, "
                                "FOREIGN KEY(user_id) REFERENCES users(id))";
    if (!query.exec(createEventsTable)) {
        qDebug() << "Failed to create events table:" << query.lastError().text();
        QMessageBox::critical(nullptr, "Database Error",
                              "Failed to create events table: " + query.lastError().text());
        return false;
    }
    qDebug() << "Events table ready.";
    QString createPlaceTable = "CREATE TABLE IF NOT EXISTS places ("
                               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                               "event_id INTEGER NOT NULL, "
                               "sub_event_name TEXT NOT NULL, "
                               "location TEXT NOT NULL, "
                               "time TEXT NOT NULL, "
                               "contact_person TEXT NOT NULL, "
                               "created_at DATETIME DEFAULT CURRENT_TIMESTAMP, "
                               "FOREIGN KEY(event_id) REFERENCES event(id))";
    if (!query.exec(createPlaceTable)) {
        qDebug() << "Failed to create events table:" << query.lastError().text();
        QMessageBox::critical(nullptr, "Database Error",
                              "Failed to create events table: " + query.lastError().text());
        return false;
    }

    qDebug() << "Sub-Events table ready.";

    return true;
}
