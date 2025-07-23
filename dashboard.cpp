#include "dashboard.h"
#include "ui_dashboard.h"

#include "scheduling.h"
#include "QSqlQuery"
#include "database.h"
#include <addvolunteername.h>

// Qt Charts
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QChart>



dashboard::dashboard(int userId, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::dashboard),
    schedulingWindow(nullptr),
    pt(nullptr),
    userId(userId),
    eventId(-1)
{
    ui->setupUi(this);

    if (!ui->chartContainer->layout()) {
        QVBoxLayout *layout = new QVBoxLayout(ui->chartContainer);
        layout->setContentsMargins(0, 0, 0, 0);
    }

    loadUserEvents();

    connect(ui->eventComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &dashboard::onEventChanged);

    ui->volunteerSummaryWidget->setVisible(false);
    ui->subeventSummaryWidget->setVisible(false);
    ui->Viewvolunteers->setVisible(false);
}

dashboard::~dashboard()
{
    delete schedulingWindow;
    delete ui;
}

void dashboard::updateVolunteerSummary(int eventId)
{
    QSqlQuery query;
    query.prepare("SELECT SUM(required_volunteers) FROM places WHERE event_id = ?");
    query.addBindValue(eventId);

    int totalVolunteers = 0;
    if (query.exec() && query.next()) {
        totalVolunteers = query.value(0).toInt();
    }

    ui->totalVolunteersLabel->setText(QString(" Volunteers: %1").arg(totalVolunteers));
    ui->totalVolunteersLabel->setStyleSheet("color: white; font-size: 20px; font-family: 'Verdana';padding-left:10px;");

    QPixmap pixmap(":/resources/charity.png");
    ui->logoLabel->setPixmap(pixmap);
    ui->logoLabel->setMinimumSize(40, 40);
    ui->logoLabel->setMaximumSize(40, 40);
    ui->logoLabel->setScaledContents(true);

    ui->volunteerSummaryWidget->setVisible(true);
}

void dashboard::updateSubeventSummary(int eventId)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM places WHERE event_id = ?");
    query.addBindValue(eventId);

    int totalSubevents = 0;
    if (query.exec() && query.next()) {
        totalSubevents = query.value(0).toInt();
    }

    ui->totalSubeventsLabel->setText(QString(" Subevents: %1").arg(totalSubevents));
    ui->totalSubeventsLabel->setStyleSheet("color: white; font-size: 20px; font-family: 'Verdana';padding-left:10px;");

    QPixmap pixmap(":/resources/event (1).png");
    ui->logoLabel_2->setPixmap(pixmap);
    ui->logoLabel_2->setMinimumSize(40, 40);
    ui->logoLabel_2->setMaximumSize(40, 40);
    ui->logoLabel_2->setScaledContents(true);

    ui->subeventSummaryWidget->setVisible(true);
}

void dashboard::ViewVolunteersWidget()
{
    ui->Viewvolunteers->setVisible(true);
    QPixmap pixmap(":/resources/analysis.png");
    ui->logoLabel_3->setPixmap(pixmap);
    ui->logoLabel_3->setMinimumSize(40, 40);
    ui->logoLabel_3->setMaximumSize(40, 40);
    ui->logoLabel_3->setScaledContents(true);
}

void dashboard::createVolunteerLineChart(int eventId)
{
    // Clear any existing chart
    QLayoutItem *child;
    while ((child = ui->chartContainer->layout()->takeAt(0)) != nullptr) {
        if (child->widget()) {
            delete child->widget();
        }
        delete child;
    }

    QSqlQuery query;
    query.prepare("SELECT sub_event_name, required_volunteers FROM places WHERE event_id = ?");
    query.addBindValue(eventId);

    QLineSeries *series = new QLineSeries();
    QStringList subEventNames;
    int index = 0;

    if (query.exec()) {
        while (query.next()) {
            QString name = query.value(0).toString();
            int count = query.value(1).toInt();
            series->append(index, count);
            subEventNames << name;
            index++;
        }
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Volunteers per Sub-Event");
    chart->legend()->hide();

    QCategoryAxis *axisX = new QCategoryAxis();
    axisX->setLabelsPosition(QCategoryAxis::AxisLabelsPositionOnValue);

    for (int i = 0; i < subEventNames.size(); ++i) {
        axisX->append(subEventNames[i], i);
    }

    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Volunteers");
    axisY->setLabelFormat("%d");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->chartContainer->layout()->addWidget(chartView);
}

void dashboard::onEventChanged(int index)
{
    int selectedId = ui->eventComboBox->itemData(index).toInt();

    if (selectedId == -1) {
        eventId = -1;
        ui->volunteerSummaryWidget->setVisible(false);
        ui->subeventSummaryWidget->setVisible(false);
        ui->Viewvolunteers->setVisible(false);
        ui->statusbar->clearMessage();
        return;
    }

    eventId = selectedId;
    qDebug() << "Selected event ID:" << eventId;

    loadEventData(eventId);
    updateVolunteerSummary(eventId);
    updateSubeventSummary(eventId);
    ViewVolunteersWidget();
    createVolunteerLineChart(eventId);  // 👈 Show the chart
}

void dashboard::loadUserEvents()
{
    ui->eventComboBox->clear();

    QSqlQuery query;
    query.prepare("SELECT id, name FROM events WHERE user_id = ?");
    query.addBindValue(userId);

    if (query.exec()) {
        ui->eventComboBox->addItem("Select an Event", -1);
        while (query.next()) {
            int id = query.value(0).toInt();
            QString name = query.value(1).toString();
            ui->eventComboBox->addItem(name, id);
        }
    } else {
        qDebug() << "Failed to load events:" << query.lastError().text();
    }
    query.finish();
}

void dashboard::loadEventData(int eventId)
{
    QSqlQuery q;
    q.prepare("SELECT name FROM events WHERE id = ?");
    q.addBindValue(eventId);

    if (q.exec() && q.next()) {
        QString eventName = q.value(0).toString();
        ui->statusbar->showMessage("Selected Event: " + eventName);
    } else {
        ui->statusbar->clearMessage();
    }
    q.finish();
}

void dashboard::on_Managing_clicked()
{
    if (!schedulingWindow) {
        schedulingWindow = new scheduling(this);
    }
    schedulingWindow->show();
}

void dashboard::on_Profile_clicked()
{
    pt = new profile();
    pt->show();
}

void dashboard::on_Volunteer_clicked()
{
    if (eventId == -1) {
        qDebug() << "No event selected for adding volunteers";
        return;
    }
    AddVolunteerName *volunteerPage = new AddVolunteerName(eventId);
    volunteerPage->show();
}
