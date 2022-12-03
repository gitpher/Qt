#include <QCoreApplication>
#include <QDebug>
using namespace std;
/*-------------------------------*/

#include "test.h"






int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

//    Test test;
//    test.doStuff();
//    test.doOtherStuff();


    // can run code without making an instance of a class (!important)
    Test::doOtherStuff();



    return a.exec();
}
