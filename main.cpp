#include <QCoreApplication>
#include <QDebug>



enum Colors {red, green, blue};

struct Product {
    int weight;
    double value;
    Colors color;
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    Product laptop;
    qInfo() << "sizeof(laptop): " << sizeof(laptop);

    laptop.color = Colors::blue;
    laptop.value = 420.87;
    laptop.weight = 3;

    qInfo() << "weight of laptop:" << laptop.weight << "kg";
    qInfo() << "value of laptop:" << laptop.value << "usd";
    qInfo() << "color of laptop:" << laptop.color;
    // qInfo() << "laptop: " << laptop;




    return a.exec();
}
