#include <QCoreApplication>
#include <QDebug>

/* for convenience */
#include <array>
#include <iostream>
using namespace std;

/*
 * This is not the way you do C++
 *
QObject get_val(QString name) {
    QObject o;
    o.setObjectName(name);
    return o;
}

QObject& get_ref(QString name) {
    QObject o; // on the stack, c++ manages
    o.setObjectName(name);
    return o; // will be deleted
}
*/

QObject* get_ptr(QString name) {
    QObject *o = new QObject(); // on the heap, I manages
    o->setObjectName(name);
    return o; // will not be deleted
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */
    QObject *o1 = get_ptr("Junwoo");

    qInfo() << o1;
    qInfo() << o1->objectName();

    delete o1; // delete off o1 from the heap


    return a.exec();
}
