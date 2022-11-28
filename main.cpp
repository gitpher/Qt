#include <QCoreApplication>
#include <QDebug>

/* for convenience */
#include <array>
#include <iostream>
using namespace std;

int multiply(int x, int y) {
    return x * y;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    qInfo() << multiply(2,44);


    return a.exec();
}
