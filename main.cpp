#include <QCoreApplication>
#include <QDebug>

#include <array>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    int age(18);
    cin >> age;

    if(age==0) qFatal("Not a valid age");

    qInfo() << "You entered" << age;

    if(age<18){
        qInfo() << "You are not an adult";
    }

    qInfo() << "Done";


    return a.exec();
}
