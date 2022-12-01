#ifndef LION_H
#define LION_H

#include <QObject>
#include "cat.h"

class Lion : public Cat
{
    Q_OBJECT
public:
    explicit Lion(QObject *parent = nullptr);

    void speak();
signals:

};

#endif // LION_H
