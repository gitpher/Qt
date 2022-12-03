#include <QCoreApplication>
#include <QDebug>


using namespace std;

QString name = "Albert";

void testing()
{
    qInfo() << name;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */
    name = "Junwoo";
    qInfo() << name;

    bool test = true;
    if (test)
    {
        QString name = "Junior";
        qInfo() << name;
        qInfo() << ::name;
    }

    qInfo() << name;
    testing();



    return a.exec();
}
