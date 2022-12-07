#ifndef CHILD_H
#define CHILD_H

#include <QObject>
#include <QDebug>
#include "parent.h"

class Child : public QObject
{
    Q_OBJECT
public:
    explicit Child(QObject *parent = nullptr);
    ~Child();

    Parent *p;

signals:

};

#endif // CHILD_H
