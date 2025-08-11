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
                               "phone TEXT)";
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
                               "required_volunteers INTEGER,"
                               "FOREIGN KEY(event_id) REFERENCES events(id))";
    if (!query.exec(createPlaceTable)) {
        qDebug() << "Failed to create events table:" << query.lastError().text();
        QMessageBox::critical(nullptr, "Database Error",
                              "Failed to create events table: " + query.lastError().text());
        return false;
    }

    qDebug() << "Sub-Events table ready.";
    QString createvolunteerTable = "CREATE TABLE IF NOT EXISTS volunteers("
                                   "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                                   "name TEXT NOT NULL,"
                                   "event_id INTEGER NOT NULL,"
                                   "assigned_place_id INTEGER,"
                                   "FOREIGN KEY(event_id) REFERENCES events(id),"
                                   "FOREIGN KEY(assigned_place_id) REFERENCES places(id))";
    if (!query.exec(createvolunteerTable))
    {
        qDebug() << "Failed to create volunteer table:" << query.lastError().text();
        QMessageBox::critical(nullptr, "Database Error",
                              "Failed to create volunteer table: " + query.lastError().text());
        return false;
    }
      qDebug() << "Volunteer table ready.";

    QString createBookingTable = "CREATE TABLE IF NOT EXISTS booking ("
                                   "bid INTEGER PRIMARY KEY AUTOINCREMENT,"
                                   "id INTEGER NOT NULL,"
                                   "event_id INTEGER NOT NULL,"
                                   "subevent_id INTEGER NOT NULL,"
                                   "booking_time DATETIME DEFAULT CURRENT_TIMESTAMP,"
                                    "FOREIGN KEY (id) REFERENCES users(id),"
                                    "FOREIGN KEY (event_id) REFERENCES events(id),"
                                    "FOREIGN KEY (subevent_id) REFERENCES places(id))";

    if (!query.exec(createBookingTable))
    {
    qDebug() << "Failed to create booking table:" << query.lastError().text();
    QMessageBox::critical(nullptr, "Database Error",
                          "Failed to create booking table: " + query.lastError().text());
    return false;
    }
    qDebug() << "booking table ready.";

return true;
}
