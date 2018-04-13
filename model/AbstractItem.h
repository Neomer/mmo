#ifndef ABSTRACTITEM_H
#define ABSTRACTITEM_H

#include <QObject>
#include "AbstractNamedEntity.h"

class AbstractItem : public AbstractNamedEntity
{
    Q_PROPERTY(Guid inventoryIcon READ getInventoryIcon WRITE setInventoryIcon)
    Q_PROPERTY(Guid droppedIcon READ getDroppedIcon WRITE setDroppedIcon)
    Q_PROPERTY(Guid weight READ getWeight WRITE setWeight)
    Q_PROPERTY(Guid description READ getDescription WRITE setDescription)

public:
    AbstractItem();

    PROP(Guid, InventoryIcon)
    PROP(Guid, DroppedIcon)
    PROP(Guid, Weight)
    PROP(Guid, Description)


    virtual bool get_IsEquippable() = 0;
};

#endif // ABSTRACTITEM_H
