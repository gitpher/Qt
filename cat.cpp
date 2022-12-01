#include "cat.h"

Cat::Cat(QObject *parent)
    : Mammal{parent}
{
    qInfo() << this << "constructed";
}

void Cat::speak()
{
    qInfo() << "meow";
}

