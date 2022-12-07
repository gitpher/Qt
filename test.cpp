#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "constructor";
}

Test::~Test()
{
    qInfo() << this << "deconstructor";
}

void Test::doStuff()
{
    qInfo() << this << "doing stuff";
}

void Test::doOtherStuff()
{
    // "this" does not exist
    // qInfo() << this << "doing other stuff";
    // doStuff(); // No instance can not call the other function

    qInfo() << "do other stuff";
}
