#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    int value(15); // c++ way of declaring & assigning/initializing variable
    qInfo() << "value: " << value;

    value += 5;
    qInfo() << "value: " << value;

    value -= 10;
    qInfo() << "value: " << value;

    value *= 2;
    qInfo() << "value: " << value;

    value /= 5;
    qInfo() << "value: " << value;

    return a.exec();
}
