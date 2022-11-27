#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    bool x(true);
    bool y(false);

    qInfo() << "x && y" << (x && y);
    qInfo() << "x || y" << (x || y);

    int n(10);

    qInfo() << "!(n < 11 && n > 2)" << !(n < 11 && n > 2);
    qInfo() << "(n < 33 || n < 3)" << (n < 33 || n < 3);



    return a.exec();
}
