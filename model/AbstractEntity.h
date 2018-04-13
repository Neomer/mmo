#ifndef IENTITY_H
#define IENTITY_H

#include <QObject>
#include <core/defines.h>
#include <core/types/Guid.h>

class AbstractEntity : public QObject
{
    Q_OBJECT

public:
    AbstractEntity()  { setId(Guid::newGuid()); }
    AbstractEntity(Guid id)  { setId(id); }

    PROP(Guid, Id)
};

#endif // IENTITY_H
