#ifndef IENTITY_H
#define IENTITY_H

#include <QObject>
#include <core/types/Guid.h>

class IEntity : public QObject
{
    Q_OBJECT

    Q_PROPERTY(Guid Id READ getId WRITE setId)

public:
    IEntity() : _id(Guid::newGuid()) { }

    Guid getId() { return _id; }
    void setId(Guid value) { _id = value; }

private:
    Guid _id;
};

#endif // IENTITY_H
