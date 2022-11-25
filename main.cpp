#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    int ages[4] = {9, 33, 24, 19};
    qInfo() << ages[0];
    qInfo() << ages[1];
    qInfo() << ages[2];
    qInfo() << ages[3];

    qInfo() << ages;
    qInfo() << *ages;

    array<int, 5> cars;
    cars[0] = 11;
    cars[1] = 12;
    cars[2] = 13;
    cars[3] = 14;
    cars[4] = 15;

    qInfo() << cars[0];
    qInfo() << cars[1];
    qInfo() << cars[2];
    qInfo() << cars[3];
    qInfo() << cars[4];

    // size of cars
    qInfo() << "sizeof(cars):" << sizeof(cars);
    qInfo() << "cars.size():" << cars.size();

    // last array value of cars
    qInfo() << "last value:" << cars[cars.size()-1];


    return a.exec();
}
