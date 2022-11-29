#include <QCoreApplication>
#include <QDebug>

/* for convenience */
#include <array>
#include <iostream>
using namespace std;

struct Laptop {
    int weight;

    double asKilograms() {
        return weight * 0.453;
    }

};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    Laptop notebook;
    notebook.weight = 5;
    qInfo() << "pounds:" << notebook.weight;
    qInfo() << "kilograms:" << notebook.asKilograms();



    return a.exec();
}
