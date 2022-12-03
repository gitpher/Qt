#include <QCoreApplication>
#include <QDebug>
using namespace std;
/*-------------------------------*/

int addTen(int n)
{
    return n + 10;
}

int humanYearsToDogYears(int humanYears)
{
    return humanYears * 8;
}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    int humanYear(24);
    qInfo() << humanYearsToDogYears(addTen(humanYear));

    return a.exec();
}
