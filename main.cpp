#include <QCoreApplication>
#include <QDebug>

/* for convenience */
#include <array>
#include <iostream>
using namespace std;


void test() {
    qInfo() << "Hello from test()";
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    test();

    return a.exec();
}
