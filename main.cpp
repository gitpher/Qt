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
    qInfo() << "Please enter your age:";
    cin >> age;

    if(age<1||age>120) qFatal("please enter a valid age");

    qInfo() << "Your age is" << age;



    return a.exec();
}
