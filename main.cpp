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

    if(age==0) qFatal("Not a valid age");

    if(age<18) {
        qInfo() << "You are not an adult";
    }else if(age>18 && age<23){
        qInfo() << "You are not really an adult";
    }else{
        qInfo() << "Welcome to the world of adults";
    }


    return a.exec();
}
