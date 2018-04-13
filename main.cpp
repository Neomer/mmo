#include <QCoreApplication>
#include <QDebug>
#include <model/AbstractItem.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AbstractItem item;
    item.setName("Short sword");
    item.setInventoryIcon(Guid::newGuid());
    item.setWeight(0.5);
    item.setDroppedIcon(Guid::newGuid());
    item.setIsEquippable(true);
    item.setDescription("Short sword");

    qDebug() << item.getName()
             << item.getId().toString()
             << item.getInventoryIcon().toString();

    return a.exec();
}
