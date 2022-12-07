#include "parent.h"

Parent::Parent(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructed";
}

Parent::~Parent()
{
    qInfo() << this << "deconstructed";
}
