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

    RaceManager mgr;
    auto race = mgr.getById(Guid::newGuid());

    return a.exec();
}
