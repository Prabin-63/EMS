#include "ticketwindow.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QPainter>
#include <QPrinter>
#include <QFileDialog>

ticketwindow::ticketwindow(QString userName,
                           QString eventName,
                           QString subEventName,
                           QString location,
                           QString time,
                           QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Your Event Ticket");
    resize(500, 300);

    QVBoxLayout *layout = new QVBoxLayout(this);

    QString style = "QLabel { font-size: 16px; font-weight: bold; color: #333; }";
    QString border = "border: 2px dashed #999; padding: 20px; background: #f9f9f9;";

    ticketArea = new QLabel(this);
    ticketArea->setText(
        "🎫 <b>Event Ticket</b><br><br>"
        "👤 Name: " + userName + "<br>"
                     "📅 Event: " + eventName + "<br>"
                      "📍 Sub-Event: " + subEventName + "<br>"
                         "🗺️ Location: " + location + "<br>"
                     "⏰ Time: " + time + "<br>"
        );
    ticketArea->setAlignment(Qt::AlignLeft | Qt::AlignTop);
    ticketArea->setStyleSheet(style + border);
    ticketArea->setWordWrap(true);

    downloadButton = new QPushButton("Download as PDF");
    downloadButton->setStyleSheet("background-color: #28a745; color: white; padding: 8px 16px;");

    connect(downloadButton, &QPushButton::clicked, this, &ticketwindow::downloadTicket);

    layout->addWidget(ticketArea);
    layout->addSpacing(20);
    layout->addWidget(downloadButton);
    setLayout(layout);

    qDebug() << "✅ ticketwindow constructor called";
}

void ticketwindow::downloadTicket()
{
    QString filePath = QFileDialog::getSaveFileName(this, "Save Ticket", "", "PDF Files (*.pdf)");
    if (filePath.isEmpty()) return;

    QPrinter printer(QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(filePath);

    QPainter painter;
    if (painter.begin(&printer)) {
        ticketArea->render(&painter);
        painter.end();
    }
}
