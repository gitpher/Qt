#include <QCoreApplication>
#include <QDebug>
using namespace std;
/*-------------------------------*/

#include "animal.h"


// initialization is necessary
int Animal::count = 0;


void test() {
    Animal dog;
    Animal cat;
    Animal fish;
    qInfo() << Animal::count;
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */
    test();
    qInfo() << Animal::count;



    return a.exec();
}
