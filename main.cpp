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

    qInfo() << "Plese enter your age:";
    cin >> age;

    qInfo() << "you are a(n) " << (age > 18 ? "adult" : "kid");


    return a.exec();
}
