#include <QCoreApplication>
#include <QDebug>
using namespace std;
/*-------------------------------*/

//QObject getObject()
//{
//    QObject o;
//    return o;
//}

QObject* getObject()
{
    QObject *o = new QObject();
    return o;
}

void testPtr(QObject *object)
{
    qInfo() << object << Q_FUNC_INFO;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */
    QObject *p = getObject();
    testPtr(p);

    delete p;

    return a.exec();
}
