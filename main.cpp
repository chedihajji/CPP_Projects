#include "dashboard.h"
#include <QApplication>
extern bool arab;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dashboard w;
    if(!arab)
    {
        w.setWindowTitle("Dashboard");
    }

    else
    {
        w.setWindowTitle("لوحة القيادة");
    }

    w.setMinimumSize(100, 100);
    w.showMaximized();

    return a.exec();
}
