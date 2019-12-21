#include "dashboard.h"

bool arab = false;

Dashboard::Dashboard(QWidget *parent)
    : QWidget(parent)
{
    /*main layouts*/
    this->mainLayout = new QVBoxLayout;
    this->date = new QHBoxLayout;
    this->detailedLayout = new QHBoxLayout;
    this->months = new QComboBox;
    this->days = new QLabel;
    this->years = new QComboBox;
    this->menu = new QVBoxLayout;
    this->tasksAndEvents =new QVBoxLayout;
    this->tasksAndEventsLine1 = new QHBoxLayout;
    this->tasksAndEventsLine2 = new QHBoxLayout;
    this->info = new QVBoxLayout;
    /*end main layouts*/
    /**/
    this->mainLayout->addLayout(this->date);
    this->mainLayout->addLayout(this->detailedLayout);
    //date
    this->date->addWidget(this->months);
    this->date->addWidget(this->days);
    this->date->addWidget(this->years);
    //second HBOX
    this->detailedLayout->addLayout(this->menu);
    this->detailedLayout->addLayout(this->tasksAndEvents);
    this->tasksAndEvents->addLayout(this->tasksAndEventsLine1);
    this->tasksAndEvents->addLayout(this->tasksAndEventsLine2);
    this->detailedLayout->addLayout(this->info);
    /**/
    setLayout(mainLayout);
    this->initWindow();

}

Dashboard::~Dashboard()
{
}

void Dashboard::initWindow()
{
    QString daysNumber = "";
    for(int i=0 ; i<12 ; ++i)
    {
        if(!arab)
            this->months->addItem(this->monthsTab[i]);
        else
            this->months->addItem(this->arabMonthsTab[i]);
    }
    this->dateNow = QDate::currentDate();
    this->timeNow = QTime::currentTime();
    switch(this->dateNow.month())
    {
    case 1:
        this->months->setCurrentIndex(0);
        break;
    case 2:
        this->months->setCurrentIndex(1);
        break;
    case 3:
        this->months->setCurrentIndex(2);
        break;
    case 4:
        this->months->setCurrentIndex(3);
        break;
    case 5:
        this->months->setCurrentIndex(4);
        break;
    case 6:
        this->months->setCurrentIndex(5);
        break;
    case 7:
        this->months->setCurrentIndex(6);
        break;
    case 8:
        this->months->setCurrentIndex(7);
        break;
    case 9:
        this->months->setCurrentIndex(8);
        break;
    case 10:
        this->months->setCurrentIndex(9);
        break;
    case 11:
        this->months->setCurrentIndex(10);
        break;
    case 12:
        this->months->setCurrentIndex(11);
        break;
    }
    this->years->addItem(QString::number(this->dateNow.year()));
    for(unsigned int i=0 ; i < this->daysOfMonths[this->dateNow.month()-1] ; ++i)
    {
        daysNumber += (QString::number(i+1) + " ");
    }
    this->days->setText(daysNumber);

}
