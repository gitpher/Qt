#include "animal.h"

Animal::Animal(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructed";


}

void Animal::speak(QString message)
{
    qInfo() << this << message;
}
