#ifndef THING_H
#define THING_H

#include <QObject>
#include <QDebug>

class Thing : public QObject
{
    Q_OBJECT
public:
    explicit Thing(QObject *parent = nullptr, QString name = "");

    QString name;
    void exist(int time, int space);

signals:

};

#endif // THING_H
