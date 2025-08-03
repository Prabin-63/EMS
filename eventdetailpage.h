#ifndef EVENTDETAILPAGE_H
#define EVENTDETAILPAGE_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QScrollArea>
#include<ticketwindow.h>

class EventDetailPage : public QWidget
{
    Q_OBJECT

public:
    explicit EventDetailPage(int userId, QWidget *parent = nullptr);
    void loadEventDetails(int eventId);
signals:
    void backButtonClicked();
private:
    int currentEventId;
    int currentUserId;  // Store the user ID

    QLabel *eventNameLabel;
    QLabel *venueLabel;
    QLabel *dateTimeLabel;
    QLabel *organizerLabel;

    QScrollArea *scrollArea;
    QWidget *subEventContainer;
    QVBoxLayout *subEventLayout;


    ticketwindow *ticketWindow;

};

#endif // EVENTDETAILPAGE_H
