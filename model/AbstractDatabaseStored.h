#ifndef ABSTRACTDATABASESTORED_H
#define ABSTRACTDATABASESTORED_H

#include <memory>

#include <QString>
#include <core/database/AbstractDatabaseQuery.h>

class AbstractDatabaseStored
{
public:
    virtual QString getTableName() = 0;
    virtual void fromDatabaseQuery(std::shared_ptr<AbstractDatabaseQuery> query) = 0;
};

#endif // ABSTRACTDATABASESTORED_H
