#include "thing.h"

Thing::Thing(QObject *parent, QString name)
    : QObject{parent}
{
    qInfo() << &name << name << "name";
    qInfo() << &this->name << this->name << "this->name";

    this->name = name;
}

void Thing::exist(int time, int space)
{
    qInfo() << (time * space);
}
