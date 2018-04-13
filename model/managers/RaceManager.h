#ifndef RACEMANAGER_H
#define RACEMANAGER_H

#include "AbstractManager.h"
#include <model/Race.h>

class RaceManager : public AbstractManager<Race>
{
public:
    RaceManager();
};

#endif // RACEMANAGER_H
