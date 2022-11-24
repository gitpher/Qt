#include <QCoreApplication>
#include <QDebug>


/*! Documentation for automated systems like Doxygen
 * \brief main The starting point
 * \param argc The argument count
 * \param argv The argument
 * \return int the exit value of the application
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Hello World";

    return a.exec();
}
