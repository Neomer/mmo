#ifndef POSTGRESDATABASEQUERY_H
#define POSTGRESDATABASEQUERY_H

#include <core/database/AbstractDatabaseQuery.h>

class PostgresDatabaseQuery : public AbstractDatabaseQuery
{
public:
    PostgresDatabaseQuery();

    // AbstractDatabaseQuery interface
public:
    void close() override;
    int rowCount() override;
    bool next() override;
    bool first() override;
};

#endif // POSTGRESDATABASEQUERY_H
