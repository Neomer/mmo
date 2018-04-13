#ifndef DATABASEHELPER_H
#define DATABASEHELPER_H

#include <core/database/DatabaseSession.h>.h>

class DatabaseHelper
{
public:
    static DatabaseHelper &Instance();

    DatabaseSession &getCurrentSession();

private:
    DatabaseHelper();
    ~DatabaseHelper();

    DatabaseHelper(DatabaseHelper const&) = delete;
    DatabaseHelper& operator= (DatabaseHelper const&) = delete;

    AbstractDatabaseConnection _conn;
};

#endif // DATABASEHELPER_H
