#include "lion.h"

Lion::Lion(QObject *parent)
    : Cat{parent}
{
    qInfo() << this << "constructed";
}

void Lion::speak()
{
    qInfo() << "roar";
}

