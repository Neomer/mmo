#ifndef ABSTRACTMANAGER_H
#define ABSTRACTMANAGER_H

#include <QString>
#include <model/AbstractEntity.h>

template<class T>
class AbstractManager
{
public:
    AbstractManager();

    std::shared_ptr<T> getById(Guid id);
};

#endif // ABSTRACTMANAGER_H
