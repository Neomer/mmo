#ifndef ABSTRACTITEM_H
#define ABSTRACTITEM_H

#include <QObject>
#include "INamedEntity.h"

class AbstractItem : public INamedEntity
{
    Q_PROPERTY(Guid inventoryIcon READ getInventoryIcon WRITE setInventoryIcon)
    Q_PROPERTY(Guid droppedIcon READ getDroppedIcon WRITE setDroppedIcon)
    Q_PROPERTY(Guid weight READ getWeight WRITE setWeight)
    Q_PROPERTY(Guid description READ getDescription WRITE setDescription)

public:
    AbstractItem();

    Guid getInventoryIcon() { return _inventoryIcon; }
    void setInventoryIcon(Guid value) { _inventoryIcon = value; }

    Guid getDroppedIcon() { return _droppedIcon; }
    void setDroppedIcon(Guid value) { _droppedIcon = value; }

    float getWeight() { return _weight; }
    void setWeight(float value) { _weight = value; }

    QString getDescription() { return _description; }
    void setDescription(QString value) { _description = value; }

    virtual bool getIsEquippable() = 0;

private:
    Guid _inventoryIcon, _droppedIcon;
    float _weight;
    QString _description;
};

#endif // ABSTRACTITEM_H
