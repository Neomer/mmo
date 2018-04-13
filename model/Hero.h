#ifndef HERO_H
#define HERO_H

#include <QObject>
#include "AbstractActor.h"
#include "Race.h"
#include "Inventory.h"

class Hero :
        public AbstractNamedEntity,
        public AbstractActor
{
public:
    Hero();

    enum Gender {
        enMale,
        enFemale
    };

    PROP_PTR(Race, Race)
    PROP_PTR(Gender, Gender)
    PROP_PTR(Inventory, Inventory)
};

#endif // HERO_H
