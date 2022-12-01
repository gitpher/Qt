#include <QCoreApplication>
#include <QDebug>
#include "thing.h"

using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */
    Thing thing(nullptr, "rock");
    thing.exist(10, 21);

    thing.name = "paper";
    qInfo() << thing.name;

    return a.exec();
}
