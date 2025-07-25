#ifndef EVENTDETAILPAGE_H
#define EVENTDETAILPAGE_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QScrollArea>

class EventDetailPage : public QWidget
{
    Q_OBJECT

public:
    explicit EventDetailPage(int userId, QWidget *parent = nullptr); // ✅ CORRECTED CONSTRUCTOR
    void loadEventDetails(int eventId);
signals:
    void backButtonClicked();
private:
    int currentEventId;
    int currentUserId;

    QLabel *eventNameLabel;
    QLabel *venueLabel;
    QLabel *dateTimeLabel;
    QLabel *organizerLabel;

    QScrollArea *scrollArea;
    QWidget *subEventContainer;
    QVBoxLayout *subEventLayout;
};

#endif // EVENTDETAILPAGE_H
