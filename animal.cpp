#include "animal.h"


Animal::Animal(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructed";
    count++;
}

Animal::~Animal()
{
    qInfo() << this << "deconstructed";
    count--;
}


