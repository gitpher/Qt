#ifndef MONSTER_H
#define MONSTER_H

#include <QObject>
#include <QDebug>

#include "cat.h"
#include "dog.h"

// ambiguous
class Monster : public QObject // , Cat, Dog
{
    Q_OBJECT
public:
    explicit Monster(QObject *parent = nullptr);

signals:

};

#endif // MONSTER_H
