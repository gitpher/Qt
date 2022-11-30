#include <QCoreApplication>
#include <QDebug>

#include "cat.h"
#include "dog.h"



using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    Cat cat;
    Dog dog;
    cat.meow();
    dog.bark();
    cat.hasMilk();
    dog.hasMilk();
    cat.isAlive();
    dog.isAlive();




    return a.exec();
}
