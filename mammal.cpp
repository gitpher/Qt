#include "mammal.h"

Mammal::Mammal(QObject *parent)
    : Animal{parent}
{
    qInfo() << this << "constructed";
}

Mammal::~Mammal()
{
    qInfo() << this << "deconstructed";
}
