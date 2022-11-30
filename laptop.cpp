#include "laptop.h"

Laptop::Laptop(QObject *parent, QString name)
    : QObject{parent}
{
    this->name = name;
    qInfo() << this << name << "constructed";
}

Laptop::~Laptop()
{
    qInfo() << this << name << "deconstructed";
}

double Laptop::asKilos()
{
    return this->weight * 0.453592;
}

void Laptop::test()
{
    qInfo() << this->name << "weighs" << this->asKilos() << "kilos";
}
