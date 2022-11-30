#include "cat.h"

Cat::Cat(QObject *parent)
    : Mammal{parent}
{
    qInfo() << this << "constructed";
}
