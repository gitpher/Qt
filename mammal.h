#ifndef MAMMAL_H
#define MAMMAL_H

#include <QObject>
#include <QDebug>

#include "animal.h" // including animal

class Mammal : public Animal
{
    Q_OBJECT
public:
    explicit Mammal(QObject *parent = nullptr);
    ~Mammal();

    bool hasMilk() {
        return true;
    }

signals:

};

#endif // MAMMAL_H
