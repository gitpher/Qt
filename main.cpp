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

    age > 0 && age < 100 ? qInfo("You entered a valid age") : qFatal("You did not enter a valid age");

    return a.exec();
}
