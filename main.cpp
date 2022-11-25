#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 24;
    double height = 174.3;

    qInfo() << "Age: " << age;
    qInfo() << "Height" << height;

    age = (int) 24.8;
    qInfo() << "New Age: " << age;

    // signed int
    signed int dogs = -1;
    qInfo() << "Dogs: " << dogs;

    // unsigned int
    unsigned int cats = -1;
    qInfo() << "Cats: " << cats;

    // sizeof()
    qInfo() << "sizeof(dogs): " << sizeof(dogs) << " bytes";
    qInfo() << "sizeof(cats): " << sizeof(cats) << " bytes";





    return a.exec();
}
