#include <QCoreApplication>
#include <QDebug>

#include <array>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    int max(5);
    QString task = "Plz take out the trash";
    for (int i=1; i<50; i++) {
        qInfo() << "Wife:" << task;
        qWarning() << "Wife: I have asked" << i << "times!";

        if (i>=max) {
            qInfo() << "Husband: ok, ok, I'm going";
            break;
        }

        qInfo() << "Husband: I will";
    }

    qInfo() << "Done";

    return a.exec();
}
