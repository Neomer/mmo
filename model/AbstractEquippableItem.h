#ifndef EQIPPABLEITEM_H
#define EQIPPABLEITEM_H

#include <QObject>
#include "AbstractItem.h"

class EquippableItem : public AbstractItem
{
    Q_OBJECT

public:
    enum EquipSlot {
        enSlotHead,
        enSlotRightHand,
        enSlotLeftHand,
        enSlotBody,
        enSlotPants,
        enSlotShoes
    };

    EquippableItem();

    virtual EquipSlot getEqipSlot() = 0;

    // AbstractItem interface
public:
    bool getIsEquippable() override { return true; }
};

#endif // EQIPPABLEITEM_H
