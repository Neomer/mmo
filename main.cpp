#include <QCoreApplication>
#include <QDebug>
#include <model/Weapon.h>
#include <model/Resource.h>
#include <model/Hero.h>
#include <QObject>
#include <memory>
#include <model/managers/RaceManager.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Hero player1;

    RaceManager mgr;

    return a.exec();
}
