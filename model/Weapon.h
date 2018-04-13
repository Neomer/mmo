#ifndef WEAPON_H
#define WEAPON_H

#include <QObject>
#include "BaseWeapon.h"

///
/// \brief Weapon модель для определения любого оружия
///
class Weapon : public BaseWeapon
{
public:
    Weapon();

    PROP(double, Range)
    PROP(double, PhysicalDamage)
    PROP(double, MagicalDamage)
};

#endif // WEAPON_H

