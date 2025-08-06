#include "ticketwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QScrollArea>
#include <QLabel>
#include <QPainter>
#include <QPrinter>
#include <QFileDialog>
#include <QDebug>
#include <QVBoxLayout>
#include <QDateTime>
#include <QFrame>
#include <QPushButton>
#include <QHBoxLayout>

ticketwindow::ticketwindow(int userId, int eventId, QWidget *parent)
    : QMainWindow(parent), userId(userId), eventId(eventId)
{
    setWindowTitle("🎟️ Your Tickets");
    resize(900, 600);

    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *outerLayout = new QVBoxLayout(centralWidget);

    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);
    QWidget *scrollContent = new QWidget();
    mainLayout = new QVBoxLayout(scrollContent);

    QSqlQuery query;
    query.prepare(R"(
        SELECT u.name AS user_name,
               e.name AS event_name,
               p.sub_event_name,
               p.location,
               p.time
        FROM booking b
        JOIN users u ON b.id = u.id
        JOIN events e ON b.event_id = e.id
        JOIN places p ON b.subevent_id = p.id
        WHERE b.id = :userId AND b.event_id = :eventId
    )");
    query.bindValue(":userId", userId);
    query.bindValue(":eventId", eventId);

    if (!query.exec()) {
        QLabel *errorLabel = new QLabel("❌ Error loading tickets: " + query.lastError().text());
        mainLayout->addWidget(errorLabel);
    } else {
        int count = 0;
        while (query.next()) {
            QString userName = query.value("user_name").toString();
            QString eventName = query.value("event_name").toString();
            QString subEventName = query.value("sub_event_name").toString();
            QString location = query.value("location").toString();
            QString time = query.value("time").toString();

            // === Ticket UI starts ===
            QFrame *ticket = new QFrame();
            ticket->setStyleSheet(R"(
                QFrame {
                    background-color: white;
                    border-radius: 18px;
                    margin: 16px;
                }
            )");

            QHBoxLayout *ticketLayout = new QHBoxLayout(ticket);
            ticketLayout->setContentsMargins(0, 0, 0, 0);
            ticketLayout->setSpacing(0);

            // LEFT PANEL
            QFrame *leftPanel = new QFrame();
            leftPanel->setFixedWidth(400);
            leftPanel->setStyleSheet(R"(
                QFrame {
                    background-color: #113F67;
                    border-top-left-radius: 18px;
                    border-bottom-left-radius: 18px;
                }
            )");

            QVBoxLayout *leftLayout = new QVBoxLayout(leftPanel);
            leftLayout->setContentsMargins(20, 20, 20, 20);
            leftLayout->setSpacing(12);

            QLabel *eventTitle = new QLabel(" <span style='color: #FFD700; font-size: 18pt; font-weight: bold;'>EVENT TICKET</span>");
            eventTitle->setTextFormat(Qt::RichText);

            QLabel *eventNameLabel = new QLabel("<span style='color:white; font-size: 16pt;'>" + eventName + "</span>");
            eventNameLabel->setTextFormat(Qt::RichText);

            QLabel *subEventLabel = new QLabel("<span style='color:#bbb;'>Sub-event: " + subEventName + "</span>");
            subEventLabel->setTextFormat(Qt::RichText);

            leftLayout->addWidget(eventTitle);
            leftLayout->addWidget(eventNameLabel);
            leftLayout->addWidget(subEventLabel);
            leftLayout->addStretch();

            // RIGHT PANEL
            QFrame *rightPanel = new QFrame();
            rightPanel->setStyleSheet("background-color: #EEEEEE; border-top-right-radius: 18px; border-bottom-right-radius: 18px;");
            QHBoxLayout *rightLayout = new QHBoxLayout(rightPanel);
            rightLayout->setContentsMargins(20, 20, 20, 20);
            rightLayout->setSpacing(20);

            // Details layout (left inside right panel)
            QVBoxLayout *detailsLayout = new QVBoxLayout();
            detailsLayout->setSpacing(10);

            QLabel *nameLabel = new QLabel("<b>👤 Name:</b> " + userName);
            QLabel *locationLabel = new QLabel("<b>📍 Location:</b> " + location);
            QLabel *timeLabel = new QLabel("<b>⏰ Time:</b> " + time);

            nameLabel->setStyleSheet("color: #000;font-size:18px;");
            locationLabel->setStyleSheet("color: #000;font-size:18px;");
            timeLabel->setStyleSheet("color: #000;font-size:18px;");

            detailsLayout->addWidget(nameLabel);
            detailsLayout->addWidget(locationLabel);
            detailsLayout->addWidget(timeLabel);
            detailsLayout->addStretch();

            // Logo (right inside right panel)
            QLabel *logo = new QLabel();
            logo->setPixmap(QPixmap(":/resources/e1.png").scaled(200, 200, Qt::KeepAspectRatio, Qt::SmoothTransformation));
            logo->setAlignment(Qt::AlignRight | Qt::AlignTop);

            rightLayout->addLayout(detailsLayout);
            rightLayout->addWidget(logo);

            // Combine panels
            ticketLayout->addWidget(leftPanel);
            ticketLayout->addWidget(rightPanel);

            mainLayout->addWidget(ticket);
            ++count;
        }

        if (count == 0) {
            QLabel *noTicket = new QLabel("ℹ️ No bookings found for this event.");
            noTicket->setStyleSheet("color: #666;");
            mainLayout->addWidget(noTicket);
        }
    }

    scrollContent->setLayout(mainLayout);
    scrollArea->setWidget(scrollContent);
    outerLayout->addWidget(scrollArea);

    downloadButton = new QPushButton("📄 Download All Tickets as PDF");
    downloadButton->setStyleSheet("background-color: #007bff; color: white; font-weight: bold; padding: 12px; border-radius: 8px;");
    connect(downloadButton, &QPushButton::clicked, this, &ticketwindow::downloadAsPDF);

    outerLayout->addWidget(downloadButton);
    setCentralWidget(centralWidget);
    this->showMaximized();
}

void ticketwindow::downloadAsPDF()
{
    QString filePath = QFileDialog::getSaveFileName(this, "Save Tickets as PDF", "", "PDF Files (*.pdf)");
    if (filePath.isEmpty()) return;

    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(filePath);

    QPainter painter;
    if (!painter.begin(&printer)) {
        qDebug() << "❌ Could not start printing";
        return;
    }

    this->render(&painter);
    painter.end();

    qDebug() << "✅ PDF saved to:" << filePath;
}
