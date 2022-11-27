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
    qInfo() << "Enter your age";
    cin >> age;

    qInfo() << "You are" << age << "years old";

    qInfo() << "qInfo()";
    qDebug() << "qDebug()";
    qCritical() << "qCritical()";
    qFatal("qFatal");



    return a.exec();
}
