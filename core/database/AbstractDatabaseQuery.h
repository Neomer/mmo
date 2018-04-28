#ifndef DATABASEQUERY_H
#define DATABASEQUERY_H

#include <QString>



class AbstractDatabaseQuery
{
public:
    AbstractDatabaseQuery();

    virtual void close() = 0;

    virtual int rowCount() = 0;

    virtual bool next() = 0;
    virtual bool first() = 0;

    template<typename T> T value(int index) { }
    template<typename T> T value(QString name) { }

};

#endif // DATABASEQUERY_H
