#ifndef EQIPPABLEITEM_H
#define EQIPPABLEITEM_H

#include <QObject>
#include "AbstractItem.h"
#include <QList>

class AbstractEquippableItem : public AbstractItem
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

    AbstractEquippableItem();

    PROP(bool, IsEquipped)

    ///
    /// \brief getPossibleEqipSlots возвращает список слотов, в которые можно экипировать предмет
    /// \return
    ///
    virtual QList<EquipSlot> getPossibleEqipSlots() = 0;

    // AbstractItem interface
public:
    bool get_IsEquippable() override { return true; }

private:
    bool _is_equipped;
};

#endif // EQIPPABLEITEM_H
