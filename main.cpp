#include <QCoreApplication>
#include <QDebug>

/* for convenience */
#include <array>
#include <iostream>
using namespace std;

void sayHello() {
    qInfo("Hi");
}

void sayHello(QString name) {
    qInfo() << "Hi" << name;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */
    sayHello();
    sayHello("Jinkee");


    return a.exec();
}
