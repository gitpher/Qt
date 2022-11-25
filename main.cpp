#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* practice */

    int age = 24;

    const int id = 007;

    // id = 008;

    qInfo() << "age: " << age;
    qInfo() << "id: " << id;



    return a.exec();
}
