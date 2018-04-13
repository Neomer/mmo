#ifndef ABSTRACTACTOR_H
#define ABSTRACTACTOR_H

#include <QObject>
#include "AbstractEntity.h"

class AbstractActor
{
public:
    AbstractActor();

    PROP(double, X)
    PROP(double, Y)
};

#endif // ABSTRACTACTOR_H
