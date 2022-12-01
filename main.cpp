#include <QCoreApplication>
#include <QDebug>



using namespace std;


void test(int number) {
    number = 50;
    qInfo() << "(2) number" << &number << "=" << number;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    int number = 75;

    qInfo() << "(1) number" << &number << "=" << number;

    test(number);

    qInfo() << "(3) number" << &number << "=" << number;

    bool ok = true;
    if (ok)
    {
        qInfo() << "(4) number" << &number << "=" << number;
        int number = 100; // <= pain in the ass
        qInfo() << "(5) number" << &number << "=" << number;
    }

    qInfo() << "(6) number" << &number << "=" << number;

    return a.exec();
}
