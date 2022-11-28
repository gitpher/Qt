#include <QCoreApplication>
#include <QDebug>

#include <array>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    int max(10);
    qInfo() << "Please enter max";
    cin >> max;

    if(max<=0) qFatal("Please enter a valid number");

    for(int i=0; i<max; i++)  {
        qInfo() << "i:" << i;
    }
    qInfo("");

    array<int, 4> ages = {24, 25, 29, 33};
    for(int age: ages) {
        qInfo() << age;
    }
    qInfo("");

    for(int i=0; i<ages.size(); i++) {
        qInfo() << ages[i];
    }


    return a.exec();
}
