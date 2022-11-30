#include <QCoreApplication>
#include <QDebug>

#include "appliance.h"



using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */


    Appliance appliance;
    qInfo() << "cook:" << appliance.cook();
    qInfo() << "freeze:" << appliance.freeze();
    qInfo() << "grill:" << appliance.grill();


    return a.exec();
}
