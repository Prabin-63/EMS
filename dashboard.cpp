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
#include<viewvolunteer.h>



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
    ui->volunteerNamesWidget->setVisible(false);




    this->showMaximized();
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

    // Create chart and set basic properties
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Volunteers per Sub-Event");
    chart->legend()->hide();

    series->setPen(QPen(QColor(188, 0, 188), 2));   // Purple pen, thickness 2
    series->setPointsVisible(true);
    series->setColor(QColor(188, 0, 188));          // Also set color explicitly

    // Create chart and disable theme override

    chart->setTheme(QChart::ChartThemeLight);

    // X-axis (Category)
    QCategoryAxis *axisX = new QCategoryAxis();
    axisX->setLabelsPosition(QCategoryAxis::AxisLabelsPositionOnValue);
   axisX->setGridLinePen(QPen(Qt::NoPen));  // ❌ Hide grid lines

    for (int i = 0; i < subEventNames.size(); ++i) {
        axisX->append(subEventNames[i], i);
    }

    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // Y-axis (Value)
    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Volunteers");
    axisY->setLabelFormat("%d");
    axisY->setGridLinePen(QPen(Qt::NoPen));  // ❌ Hide grid lines

    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Set background color
    chart->setBackgroundBrush(QBrush(QColor("rgb(55,55,55)")));      // Outer background
    chart->setPlotAreaBackgroundBrush(QBrush(QColor("rgb(55,55,55)")));   // Plot background
    chart->setPlotAreaBackgroundVisible(true);

    // Chart view and layout
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->chartContainer->layout()->addWidget(chartView);
}
void dashboard::loadVolunteerNames(int eventId)
{
    // Remove old layout
    QLayout *oldLayout = ui->volunteerNamesWidget->layout();
    if (oldLayout) {
        QLayoutItem *item;
        while ((item = oldLayout->takeAt(0)) != nullptr) {
            if (item->widget()) {
                delete item->widget();
            }
            delete item;
        }
        delete oldLayout;
    }

    // 🔧 Set layout with stretch
    QVBoxLayout *layout = new QVBoxLayout();
    layout->setAlignment(Qt::AlignTop);

    // 📌 Add title
    QLabel *titleLabel = new QLabel("Volunteers Name");
    titleLabel->setStyleSheet("color: white; font-size: 24px; font-weight: bold;");
    titleLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    layout->addWidget(titleLabel);

    // 📋 Load names
    QSqlQuery query;
    query.prepare("SELECT name FROM volunteers WHERE event_id = ?");
    query.addBindValue(eventId);

    if (query.exec()) {
        int count = 0;
        while (query.next()) {
            QString name = query.value(0).toString();
            QLabel *label = new QLabel(name);
            label->setStyleSheet("color: white; font-size: 18px; background-color: #444;"
                                 "padding: 6px 12px; margin: 4px; border-radius: 6px;");
            label->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred); // 🔧 Expand horizontally
            layout->addWidget(label);
            count++;
        }

        if (count == 0) {
            QLabel *noData = new QLabel("No volunteers found.");
            noData->setStyleSheet("color: gray;");
            noData->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
            layout->addWidget(noData);
        }

    } else {
        QLabel *errorLabel = new QLabel("⚠️ Error loading volunteers.");
        errorLabel->setStyleSheet("color: red;");
        errorLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        layout->addWidget(errorLabel);
    }

    // Set layout to widget and make it expand
    ui->volunteerNamesWidget->setLayout(layout);
    ui->volunteerNamesWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->volunteerNamesWidget->setVisible(true);

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
    createVolunteerLineChart(eventId);
    loadVolunteerNames(eventId);    // 👈 Show the chart
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




void dashboard::on_viewvolunteer_clicked()
{
    int eventIdToPass = this->eventId; // Assuming you have `eventId` as a member in dashboard class

    ViewVolunteer *viewDialog = new ViewVolunteer(eventIdToPass, this);
    viewDialog->exec();
}



