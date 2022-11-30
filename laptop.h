#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>
#include <QDebug>

class Laptop : public QObject
{
    Q_OBJECT
public:
    // Constructor
    explicit Laptop(QObject *parent = nullptr, QString name = "");

    // Destructor
    ~Laptop();

    // Variables
    QString name;
    int weight;

    // Functions
    double asKilos();
    void test();


signals:

};

#endif // LAPTOP_H
