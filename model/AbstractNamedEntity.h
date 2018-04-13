#ifndef INAMEDENTITY_H
#define INAMEDENTITY_H

#include "AbstractEntity.h"

class AbstractNamedEntity : public AbstractEntity
{
    Q_PROPERTY(QString name READ getName WRITE setName)

public:
    AbstractNamedEntity() : AbstractEntity() {}

    PROP(QString, Name)
};

#endif // INAMEDENTITY_H
