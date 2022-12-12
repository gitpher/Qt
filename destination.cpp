#include "destination.h"

Destination::Destination(QObject *parent)
    : QObject{parent}
{

}

void Destination::mySignal(QString message)
{
    qInfo() << message;
}
