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

    template<typename T> T value(int index);
    template<typename T> T value(QString name);
};

#endif // POSTGRESDATABASEQUERY_H
