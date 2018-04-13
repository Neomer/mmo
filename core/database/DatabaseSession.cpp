#include "DatabaseSession.h"
#include "postgresql/PostgresDatabaseQuery.h"

DatabaseSession::DatabaseSession()
{

}

std::shared_ptr<AbstractDatabaseQuery> DatabaseSession::exec(QString sql)
{
    return std::shared_ptr<AbstractDatabaseQuery>(new PostgresDatabaseQuery());
}