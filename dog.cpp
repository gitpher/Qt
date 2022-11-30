#include "dog.h"

Dog::Dog(QObject *parent)
    : Mammal{parent}
{
    qInfo() << this << "constructed";
}
