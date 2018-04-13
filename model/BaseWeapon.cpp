#include "BaseWeapon.h"

BaseWeapon::BaseWeapon() :
    AbstractEquippableItem(),
    _possibleSlots(QList<AbstractEquippableItem::EquipSlot>()
                   << AbstractEquippableItem::enSlotLeftHand
                   << AbstractEquippableItem::enSlotRightHand)
{

}
