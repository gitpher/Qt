#include <QCoreApplication>
#include <QDebug>

/* for convenience */
#include <array>
#include <iostream>
using namespace std;

void callByValue(int x) {
    x *= 50;
    qInfo() << x;
}

void callByReference(int &y) {
    y *= 50;
    qInfo() << y;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */
    int x(2);
    int y(2);

    qInfo() << "MAIN X:" << x;
    callByValue(x);
    qInfo() << "MAIN X:" << x;

    qInfo("");

    qInfo() << "MAIN Y:" << y;
    callByReference(y);
    qInfo() << "MAIN Y:" << y;


    return a.exec();
}
