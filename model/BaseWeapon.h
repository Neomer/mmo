#ifndef ABSTRACTWEAPON_H
#define ABSTRACTWEAPON_H

#include <QObject>
#include "AbstractEquippableItem.h"

///
/// \brief BaseWeapon базовая модель для оружия
///
class BaseWeapon : public AbstractEquippableItem
{
public:
    BaseWeapon();

    // AbstractEquippableItem interface
public:
    QList<EquipSlot> getPossibleEqipSlots() override { return _possibleSlots; }

private:
    QList<EquipSlot> _possibleSlots;
};

#endif // ABSTRACTWEAPON_H
