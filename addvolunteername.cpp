#include "addvolunteername.h"
#include "ui_addvolunteername.h"

AddVolunteerName::AddVolunteerName(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddVolunteerName)
{
    ui->setupUi(this);

    // Proper scroll area setup
    ui->scrollArea->setWidget(ui->scrollAreaWidgetContents);
    ui->scrollArea->setWidgetResizable(true);

    // Vertical layout on scrollAreaWidgetContents
    volunteerLayout = new QVBoxLayout();
    ui->scrollAreaWidgetContents->setLayout(volunteerLayout);

    // Connect buttons
    connect(ui->generateButton, &QPushButton::clicked, this, &AddVolunteerName::generateVolunteers);
    connect(ui->addButton, &QPushButton::clicked, this, &AddVolunteerName::addVolunteer);
    connect(ui->removeButton, &QPushButton::clicked, this, &AddVolunteerName::removeVolunteer);
}

AddVolunteerName::~AddVolunteerName()
{
    delete ui;
}

void AddVolunteerName::generateVolunteers()
{
    // Clear all previous line edits
    for (QLineEdit *edit : volunteerLineEdits) {
        QWidget *parentWidget = edit->parentWidget();
        volunteerLayout->removeWidget(parentWidget);
        delete parentWidget;
    }
    volunteerLineEdits.clear();

    int count = ui->spinBox->value();
    for (int i = 0; i < count; ++i) {
        QLineEdit *lineEdit = new QLineEdit();
        lineEdit->setFixedWidth(300);  // fixed width
        lineEdit->setPlaceholderText(QString("Volunteer %1 name").arg(i + 1));
        lineEdit->setStyleSheet("background-color: #444444; color: white; "
                                "font-size: 14px; padding: 5px; "
                                "selection-background-color: #666666; "
                                "border-radius: 5px; "
                                "qproperty-placeholderTextColor: white;");

        // Center using horizontal layout
        QHBoxLayout *hLayout = new QHBoxLayout();
        hLayout->addStretch();
        hLayout->addWidget(lineEdit);
        hLayout->addStretch();

        QWidget *container = new QWidget();
        container->setLayout(hLayout);
        volunteerLayout->addWidget(container);

        volunteerLineEdits.append(lineEdit);
    }
}

void AddVolunteerName::addVolunteer()
{
    QLineEdit *lineEdit = new QLineEdit();
    lineEdit->setFixedWidth(300);
    lineEdit->setPlaceholderText(QString("Volunteer %1 name").arg(volunteerLineEdits.size() + 1));
    lineEdit->setStyleSheet("background-color: #444444; color: white; "
                            "font-size: 14px; padding: 5px; "
                            "selection-background-color: #666666; "
                            "border-radius: 5px; "
                            "qproperty-placeholderTextColor: white;");

    QHBoxLayout *hLayout = new QHBoxLayout();
    hLayout->addStretch();
    hLayout->addWidget(lineEdit);
    hLayout->addStretch();

    QWidget *container = new QWidget();
    container->setLayout(hLayout);
    volunteerLayout->addWidget(container);

    volunteerLineEdits.append(lineEdit);
}

void AddVolunteerName::removeVolunteer()
{
    if (!volunteerLineEdits.isEmpty()) {
        QLineEdit *lastEdit = volunteerLineEdits.takeLast();
        QWidget *parentWidget = lastEdit->parentWidget();
        volunteerLayout->removeWidget(parentWidget);
        delete parentWidget;
    }
}
