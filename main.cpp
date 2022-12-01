#include <QCoreApplication>
#include <QDebug>

#include "lion.h"



using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */
    Lion leo;
    leo.speak();




    return a.exec();
}
