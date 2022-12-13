#include <QCoreApplication>
#include <QDebug>
using namespace std;
/*-------------------------------*/

#include <QTextStream>
#include "radio.h"
#include "station.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* playground */

    Radio radio;
    Station* channels[3];

    channels[0] = new Station(&radio, 94, "Hymn");
    channels[1] = new Station(&radio, 114, "Blues");
    channels[2] = new Station(&radio, 54, "Jazz");

    radio.connect(&radio, &Radio::quit, &a, &QCoreApplication::quit);


    do {
        qInfo() << "ENTER ON, OFF, TEST OR QUIT";
        QTextStream qtin(stdin);
        QString line = qtin.readLine().trimmed().toUpper();

        if(line == "ON")
        {
            qInfo() << "TURNING THE RADIO ON";
            for (int i=0; i<3; i++)
            {
                Station* channel = channels[i];
                radio.connect(channel, &Station::send, &radio, &Radio::listen);
            }
            qInfo() << "RADIO IS ON";
        }

        if(line == "OFF")
        {
            qInfo() << "TURNING THE RADIO OFF";
            for (int i=0; i<3; i++)
            {
                Station* channel = channels[i];
                radio.disconnect(channel, &Station::send, &radio, &Radio::listen);
            }
            qInfo() << "RADIO IS OFF";
        }

        if(line == "TEST")
        {
            qInfo() << "TESTING";
            for (int i=0; i<3; i++)
            {
                Station* channel = channels[i];
                channel->broadcast("BROADCASTING...");
            }
            qInfo() << "TEST COMPLETE";
        }

        if(line == "QUIT")
        {
            qInfo() << "QUITING";
            emit radio.quit();
            qInfo() << "QUITED";
            break;
        }

    } while (true);

    return a.exec();
}
