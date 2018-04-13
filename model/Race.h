#ifndef RACE_H
#define RACE_H

#include <QObject>
#include "AbstractNamedEntity.h"

class Race : public AbstractNamedEntity
{
public:
    Race();

    PROP(QString, Description)
    PROP(Guid, Icon)
};

#endif // RACE_H
