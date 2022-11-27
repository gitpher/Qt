#include <QCoreApplication>
#include <QDebug>

#include <array>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    int start(80);
    int max(100);

    int i(start);
    while(i<max) {
        qInfo() << "while i:" << i;
        i++;
    }

    qInfo("");

    i = start;
    do {
        qInfo() << "do while i:" << i;
        i++;
    } while(i<max);


    return a.exec();
}
