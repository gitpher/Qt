#include <QCoreApplication>
#include <QDebug>
using namespace std;
/*-------------------------------*/

#include "source.h"
#include "destination.h"




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */
    Source src;
    Destination dst;

    QObject::connect(&src, &Source::mySignal, &dst, &Destination::mySlot);

    src.test();

    dst.mySlot("Hi!");

    return a.exec();
}
