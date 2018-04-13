#ifndef ABSTRACTDATABASESTORED_H
#define ABSTRACTDATABASESTORED_H

#include <QString>



class AbstractDatabaseStored
{
public:
    virtual QString getTableName() = 0;
};

#endif // ABSTRACTDATABASESTORED_H
