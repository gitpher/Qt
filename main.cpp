#include <QCoreApplication>
#include <QDebug>

#include <array>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    cout << "Hello Qt!" << endl;

    int age(24);
    cout <<  age;
    cout << endl;
    cout << flush;

    qInfo() << age;

    cout << age;


    return a.exec();
}
