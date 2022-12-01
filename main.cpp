#include <QCoreApplication>
#include <QDebug>

#include "agecalc.h"

using namespace std;


void print(AgeCalc &calc) {
    qInfo() << "name:" << calc.name();
    qInfo() << "- human years:" << calc.humanYears();
    qInfo() << "- cat years:" << calc.catYears();
    qInfo() << "- dog years:" << calc.dogYears();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    AgeCalc junwoo;
    AgeCalc jinkee;

    junwoo.setName("Junwoo");
    junwoo.setAge(24);

    jinkee.setName("Jinkee");
    jinkee.setAge(54);

    print(junwoo);
    print(jinkee);


    return a.exec();
}
