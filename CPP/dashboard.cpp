#include "dashboard.h"
#include "ui_dashboard.h"

#include "scheduling.h"
#include "QSqlQuery"
#include "database.h"
#include <addvolunteername.h>
#include<helpcenter.h>



#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QChart>

#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include<viewvolunteer.h>
    #include<login.h>


dashboard::dashboard(int userId, login *loginWindow, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::dashboard),

    schedulingWindow(nullptr),
    pt(nullptr),
    loginWindow(loginWindow),
    userId(userId),
    eventId(-1)

{
    ui->setupUi(this);
   connect(ui->Logout, &QPushButton::clicked, this, &dashboard::on_Logout_clicked);
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
    ui->pieChartContainer->setVisible(false);
    ui->widget_11->setVisible(false);
    ui->chartContainer->setVisible(false);





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

    series->setPen(QPen(QColor(188, 0, 188), 2));
    series->setPointsVisible(true);
    series->setColor(QColor(188, 0, 188));



    chart->setTheme(QChart::ChartThemeLight);


    QCategoryAxis *axisX = new QCategoryAxis();
    axisX->setLabelsPosition(QCategoryAxis::AxisLabelsPositionOnValue);
   axisX->setGridLinePen(QPen(Qt::NoPen));

    for (int i = 0; i < subEventNames.size(); ++i) {
        axisX->append(subEventNames[i], i);
    }

    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);


    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Volunteers");
    axisY->setLabelFormat("%d");
    axisY->setGridLinePen(QPen(Qt::NoPen));

    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);


    chart->setBackgroundBrush(QBrush(QColor("rgb(55,55,55)")));
    chart->setPlotAreaBackgroundBrush(QBrush(QColor("rgb(55,55,55)")));
    chart->setPlotAreaBackgroundVisible(true);


    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->chartContainer->layout()->addWidget(chartView);
    ui->chartContainer->setVisible(true);
}

void dashboard::loadVolunteerNames(int eventId)
{

    if (volunteerLayout) {
        QLayoutItem *item;
        while ((item = volunteerLayout->takeAt(0)) != nullptr) {
            if (item->widget()) delete item->widget();
            delete item;
        }
        delete volunteerLayout;
    }


    volunteerLayout = new QVBoxLayout();
    volunteerLayout->setAlignment(Qt::AlignTop);


    QLabel *titleLabel = new QLabel("Volunteers Name");
    titleLabel->setStyleSheet("color: white; font-size: 24px; font-weight: bold;");
    titleLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    volunteerLayout->addWidget(titleLabel);


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
            label->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
            volunteerLayout->addWidget(label);
            count++;
        }

        if (count == 0) {
            QLabel *noData = new QLabel("No volunteers found.");
            noData->setStyleSheet("color: gray;");
            noData->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
            volunteerLayout->addWidget(noData);
        }

    } else {
        QLabel *errorLabel = new QLabel(" Error loading volunteers.");
        errorLabel->setStyleSheet("color: red;");
        errorLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        volunteerLayout->addWidget(errorLabel);
    }


    ui->volunteerNamesWidget->setLayout(volunteerLayout);
    ui->volunteerNamesWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->volunteerNamesWidget->setVisible(true);
    ui->widget_11->setVisible(true);
}


void dashboard::loadSubEventTable(int eventId)
{
    QSqlQuery query;
    query.prepare("SELECT sub_event_name, location, time, contact_person FROM places WHERE event_id = ?");
    query.addBindValue(eventId);

    if (!query.exec()) {
        qDebug() << " Failed to load sub-events:" << query.lastError().text();
        return;
    }

    ui->subEventTable->clear();
    ui->subEventTable->setRowCount(0);
    ui->subEventTable->setColumnCount(4);
    ui->subEventTable->setHorizontalHeaderLabels(QStringList() << "Sub-Event" << "Location" << "Time" << "Contact");
    ui->subEventTable->setStyleSheet("QTableWidget { background-color: #333; color: white; gridline-color: #555; }"
                                     "QHeaderView::section { background-color: #444; color: white; }");
    ui->subEventTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->subEventTable->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    int row = 0;
    while (query.next()) {
        ui->subEventTable->insertRow(row);
        for (int col = 0; col < 4; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            item->setTextAlignment(Qt::AlignCenter);
            ui->subEventTable->setItem(row, col, item);
        }
        row++;
    }

    ui->subEventTable->resizeColumnsToContents();
}
void dashboard::createBookingBarChart(int eventId) {
    QSqlQuery query;
    query.prepare(R"(
        SELECT p.sub_event_name, COUNT(b.bid)
        FROM booking b
        JOIN places p ON b.subevent_id = p.id
        WHERE b.event_id = ?
        GROUP BY p.sub_event_name
    )");
    query.addBindValue(eventId);

    QBarSet *barSet = new QBarSet("Bookings");
    barSet->setColor(QColor("#FF4F0F"));

    QStringList categories;

    if (!query.exec()) {
        qDebug() << "Failed to load booking data:" << query.lastError().text();
        return;
    }

    while (query.next()) {
        QString subEventName = query.value(0).toString();
        int count = query.value(1).toInt();
        *barSet << count;
        categories << subEventName;
    }

    if (barSet->count() == 0) {
        qDebug() << "No bookings found for event ID:" << eventId;
        return;
    }

    QBarSeries *series = new QBarSeries();
    series->append(barSet);
    series->setLabelsVisible(true);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Bookings per Sub-Event");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->legend()->setVisible(false);



    chart->setBackgroundBrush(QColor("rgb(55,55,55)"));
    chart->setTitleBrush(QBrush(Qt::white));

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setGridLineVisible(false);
    axisX->setLabelsColor(Qt::white);

    QValueAxis *axisY = new QValueAxis();
    axisY->setLabelFormat("%d");
    axisY->setGridLineVisible(false);
    axisY->setTitleText("Bookings");
    axisY->setLabelsColor(Qt::white);
    axisY->setGridLineColor(Qt::white);

    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);

    series->attachAxis(axisX);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setMinimumSize(400, 300);
    chartView->setStyleSheet("background-color: transparent");
    chartView->setMaximumSize(400, 300);
    chartView->setMinimumSize(200, 150);


    if (ui->pieChartContainer->layout() == nullptr) {
        QVBoxLayout *layout = new QVBoxLayout(ui->pieChartContainer);
        layout->setContentsMargins(0, 0, 0, 0);
        ui->pieChartContainer->setLayout(layout);
    }

    QLayoutItem *child;
    while ((child = ui->pieChartContainer->layout()->takeAt(0)) != nullptr) {
        if (child->widget()) delete child->widget();
        delete child;
    }

    ui->pieChartContainer->layout()->addWidget(chartView);
    ui->pieChartContainer->setVisible(true);
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
    loadVolunteerNames( eventId);
    loadSubEventTable(eventId);
    createBookingBarChart(eventId);
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
    this->close();

}

void dashboard::on_Profile_clicked()
{
    pt=new Profile(this);
    pt->show();
    this->hide();
}
void dashboard::on_Booking_clicked()
{
    Booking* bt = new Booking(dash);
    bt->show();
    this->close();
}

void dashboard::on_Volunteer_clicked()
{
    if (eventId == -1) {
        qDebug() << "No event selected for adding volunteers";
        return;
    }
    AddVolunteerName *volunteerPage = new AddVolunteerName(eventId,userId);
    volunteerPage->show();
    this->close();
}




void dashboard::on_viewvolunteer_clicked()
{
    int eventIdToPass = this->eventId;

    ViewVolunteer *viewDialog = new ViewVolunteer(eventIdToPass, this);
    viewDialog->exec();
}
void dashboard::on_Logout_clicked()
{
    this->hide();
    if (loginWindow) {
        loginWindow->show();
    }
}



void dashboard::on_Help_Center_clicked()
{
    help =new HelpCenter(dash);
    help->show();
    this->close();
}

