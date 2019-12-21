#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QComboBox>
#include <QTextEdit>
#include <QString>
#include <QDate>
#include <QTime>
#include <QLabel>

class Dashboard : public QWidget
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = 0);
    ~Dashboard();
private slots:

private:
    void initWindow();
    QString monthsTab[12] = {"January","February","Mars","April","May","June","July","August","September","October","November","December"};
    QString arabMonthsTab[12] = {"جانفي","فيفري","مارس","أفريل","ماي","جوان","جويلية","أوت","سبتمبر","أكتوبر","نوفمبر","ديسمبر"};

    unsigned int daysOfMonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    /*date*/
    QHBoxLayout* date;
    QLabel* days;
    QComboBox* months;
    QComboBox* years;
    /*end date*/
    QVBoxLayout* mainLayout;
    QHBoxLayout* detailedLayout;
    QVBoxLayout* menu;
    /*tasks and events*/
    QVBoxLayout* tasksAndEvents;
    QHBoxLayout* tasksAndEventsLine1;
    QHBoxLayout* tasksAndEventsLine2;
    /*end tasks and events*/
    QVBoxLayout* info;
    QWidget* myWindow;
    QDate dateNow;
    QTime timeNow;




};

#endif // DASHBOARD_H


