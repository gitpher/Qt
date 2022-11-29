#ifndef ANIMAL_H // ifndef => if not defined
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class Animal : public QObject
{
    Q_OBJECT // macro for adding long lines of codes
public:
    explicit Animal(QObject *parent = nullptr); // it is being defined somewhere else

signals:

};

#endif // ANIMAL_H
