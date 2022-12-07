#include <QCoreApplication>
#include <QDebug>
using namespace std;
/*-------------------------------*/

#include "parent.h"
#include "child.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */
    Child *c = new Child(&a);
    c->p = new Parent(c);
    delete c;



    return a.exec();
}
