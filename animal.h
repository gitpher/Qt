#ifndef ANIMAL_H // ifndef => if not defined
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class Animal : public QObject
{
    Q_OBJECT // macro for adding long lines of codes

    // private area
public:
    // Constructor
    explicit Animal(QObject *parent = nullptr); // it is being defined somewhere else
    // Deconstructor
    ~Animal();

    QString name;
    static int count;

    // Functions
    bool isAlive() {
        return true;
    };

signals: // communication between objects

};

#endif // ANIMAL_H
