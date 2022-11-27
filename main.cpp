#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    int x(10);
    int y(15);

    qInfo() << "x == y" << (x == y);
    qInfo() << "x < y" << (x < y);
    qInfo() << "x > y" << (x > y);
    qInfo() << "x != y" << (x != y);

    bool t(true);
    bool f(false);

    qInfo() << "t == f" << (t == f);
    qInfo() << "t != f" << (t != f);
    qInfo() << "t < f" << (t < f);
    qInfo() << "t > f" << (t > f);

    return a.exec();
}
