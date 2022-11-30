#include <QCoreApplication>
#include <QDebug>

#include "animal.h"
#include "laptop.h"


using namespace std;

void test(Laptop &machine) {
    machine.test();
}

void makeLaptops() {
    // stack is managing these objects
    Laptop mine(nullptr, "my laptop");
    Laptop yours(nullptr, "your laptop");

    mine.weight = 3;
    yours.weight = 5;

    test(mine);
    test(yours);
    // these objects will be deleted from stack
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    makeLaptops();


    return a.exec();
}
