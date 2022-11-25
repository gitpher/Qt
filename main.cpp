#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    enum Color {red, green, blue};

    // Color::red = 199;

    Color myColor = Color::red;

    qInfo() << "My Color: " << myColor;



    return a.exec();
}
