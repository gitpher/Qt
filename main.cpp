#include <QCoreApplication>
#include <QDebug>
using namespace std;
/*-------------------------------*/

#include "test.h"

void wow()
{
    // Automatic memory management
    std::unique_ptr<Test> t(new Test()); // Created this in memory
    t->doStuff();

    // pointer automatically deleted (without delete)
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    qInfo() << "Starting";
    wow();
    qInfo() << "Finished";


    return a.exec();
}
