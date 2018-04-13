#ifndef DATABASESESSION_H
#define DATABASESESSION_H

#include "AbstractDatabaseConnection.h"
#include "AbstractDatabaseQuery.h"
#include <memory>

class DatabaseSession : private AbstractDatabaseConnection
{
public:
    DatabaseSession();

    std::shared_ptr<AbstractDatabaseQuery> exec(QString sql);

};

#endif // DATABASESESSION_H
