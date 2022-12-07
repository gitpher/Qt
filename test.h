#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>

class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);
    // Deconstructor
    ~Test();

    void doStuff();
    static void doOtherStuff();


signals:

};

#endif // TEST_H
