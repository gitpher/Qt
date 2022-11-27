#include <QCoreApplication>
#include <QDebug>

#include <array>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    int age(0);
    cin >> age;

    switch(age) {
    case 0:
        qFatal("You did not enter a valid age");
        break;
    case 16:
        qInfo("You can drive");
        break;
    case 18:
        qInfo("You can vote");
        break;
    case 21:
        qInfo("You can drink");
        break;
    case 60:
        qInfo("You can retire");
        break;
    default:
        qInfo("default");
        break;
    }




    return a.exec();
}
