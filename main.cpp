#include <QCoreApplication>
#include <QDebug>

#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    /* playground */

    const int dog_years = 16;
    const int cat_years = 15;
    const int fish_years = 8;

    int my_age = 24;

    qInfo() << "my age" << my_age;
    qInfo() << "dog years:" << my_age * dog_years;
    qInfo() << "cat years:" << my_age * cat_years;
    qInfo() << "fish years:" << my_age * fish_years;



    return a.exec();
}
