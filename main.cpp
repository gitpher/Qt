#include <QCoreApplication>
#include <QDebug>
using namespace std;
/*-------------------------------*/

void display(QString *value)
{
    qInfo() << "ptr:" << value;
    qInfo() << "adr of ptr:" << &value;
    qInfo() << "val:" << *value;
}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    QString *description = new QString("Hello World");

    qInfo() << description;

    display(description);

    delete description;



    return a.exec();
}
