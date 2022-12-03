#include "animal.h"


Animal::Animal(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructed";

}

Animal::~Animal()
{
    qInfo() << this << "deconstructed";

}


