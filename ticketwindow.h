#ifndef TICKETWINDOW_H
#define TICKETWINDOW_H

#include <QMainWindow>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QPushButton>

class ticketwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ticketwindow(int userId, int eventId, QWidget *parent = nullptr);

private slots:
    void downloadAsPDF();

private:
    int userId;
    int eventId;

    QScrollArea *scrollArea;
    QVBoxLayout *mainLayout;
    QPushButton *downloadButton;
};

#endif // TICKETWINDOW_H
