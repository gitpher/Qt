#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    int yearsPassed = 12;
    int currentAge = 24;

    for (int i=0; i<yearsPassed; i++) {
        currentAge++;
    }

    qInfo() << "Age after" << yearsPassed << "years:" << currentAge;

    return a.exec();
}
