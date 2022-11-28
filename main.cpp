#include <QCoreApplication>
#include <QDebug>

/* for convenience */
#include <array>
#include <iostream>
using namespace std;

int calc(int offset, int age) {
    // Validity Check
    if (offset == 0) qFatal("Offset can not be zero");
    if (age <= 0 || age > 120) qFatal("Invalid age");
    return offset * age;
}

int catYears(int age) {
    return calc(9, age);
}

int dogYears(int age) {
    return calc(7, age);
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */
    int age(10);
    qInfo() << "Enter your age:";
    cin >> age;

    qInfo() << "dogYears(age)" << dogYears(age);
    qInfo() << "catYears(age)" << catYears(age);



    return a.exec();
}
