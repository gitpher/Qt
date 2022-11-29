#include <QCoreApplication>
#include <QDebug>

#include "animal.h"


using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    Animal dog;
    Animal cat;
    Animal fish;

    dog.speak("bark");
    cat.speak("meow");
    fish.speak("...");



    return a.exec();
}
