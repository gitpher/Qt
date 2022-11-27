#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */
    int numberOfBears(10);
    int myFavoriteNumber(5);
    numberOfBears = myFavoriteNumber;

    qInfo() << numberOfBears;






    return a.exec();
}
