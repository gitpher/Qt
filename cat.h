#ifndef CAT_H
#define CAT_H

#include <QObject>
#include <QDebug>

#include "mammal.h"

class Cat : public Mammal
{
    Q_OBJECT
public:
    explicit Cat(QObject *parent = nullptr);

    void meow() {
        qInfo() << "meow";
    }
signals:

};

#endif // CAT_H
