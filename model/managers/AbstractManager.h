#ifndef ABSTRACTMANAGER_H
#define ABSTRACTMANAGER_H

#include <core/types/Guid.h>
#include <model/AbstractEntity.h>
#include <core/helpers/DatabaseHelper.h>
#include <model/AbstractDatabaseStored.h>

#include <QList>

template<class T> class AbstractManager
{
public:
    AbstractManager()
    {

    }

    std::shared_ptr<T> getById(Guid id)
    {
        auto session = DatabaseHelper::Instance().getCurrentSession();
        auto entity = new T();
        AbstractDatabaseStored *stored = dynamic_cast<AbstractDatabaseStored *>(entity);
        if (stored == nullptr)
        {
            throw std::runtime_error("AbstractDatabaseStored conversion failed!");
        }
        auto query = session.exec("select * from " + stored->getTableName() + " where Id='" + id.toString() + "'");
        if (query.get()->first())
        {
            return std::shared_ptr<T>();
        }
        return std::shared_ptr<T>(entity);
    }

    QList<std::shared_ptr<T>> getAll()
    {

    }
};

#endif // ABSTRACTMANAGER_H
