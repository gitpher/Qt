#include "child.h"

Child::Child(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructed";
}

Child::~Child()
{
    qInfo() << this << "deconstructed";
}
