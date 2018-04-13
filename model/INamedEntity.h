#ifndef INAMEDENTITY_H
#define INAMEDENTITY_H

#include "IEntity.h"

class INamedEntity : public IEntity
{
    Q_PROPERTY(QString name READ getName WRITE setName)

public:
    INamedEntity() {}

    QString getName() { return m_name; }
    void setName(QString name) { m_name = name; }

private:
    QString m_name;
};

#endif // INAMEDENTITY_H
