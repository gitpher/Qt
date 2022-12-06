#include <QCoreApplication>
#include <QDebug>
using namespace std;
/*-------------------------------*/

void testCpy(QString value)
{
    qInfo() << "test" << &value << "size:" << value.length();
}

void testRef(QString &value)
{
    qInfo() << "testRef" << &value << "size:" << value.length();
}

void testPtr(QString *value)
{
    qInfo() << "testPtr" << value << "size:" << value->length();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    QString name = "Junwoo";
    qInfo() << &name << "size:" << name.length();
    testCpy(name);
    testRef(name);
    testPtr(&name);

    return a.exec();
}
