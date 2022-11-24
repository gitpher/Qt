#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    bool lightSwitch = false;

    qInfo() << "isOn: " << lightSwitch;

    lightSwitch = true;

    qInfo() << "isOn: " << lightSwitch;

    return a.exec();
}
