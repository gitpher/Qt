#include <QCoreApplication>
#include <QDebug>

#include "cat.h"

using namespace std;

// fail
void speak(Cat cat) {
    cat.speak();
}

void speak_ptr(Cat *cat) {
    cat->speak();
}

void speak_ref(Cat &cat) {
    cat.speak();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    Cat cat;
    // speak(cat);
    speak_ptr(&cat);
    speak_ref(cat);


    return a.exec();
}
