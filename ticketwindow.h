#ifndef TICKETWINDOW_H
#define TICKETWINDOW_H

#include <QDialog>
#include <QString>

class QLabel;
class QPushButton;

class ticketwindow : public QDialog
{
    Q_OBJECT
public:
    explicit ticketwindow(QString userName,
                          QString eventName,
                          QString subEventName,
                          QString location,
                          QString time,
                          QWidget *parent = nullptr);

private slots:
    void downloadTicket();

private:
    QLabel *ticketArea;
    QPushButton *downloadButton;
};

#endif // TICKETWINDOW_H
