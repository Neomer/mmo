#include "AbstractManager.h"
#include <core/helpers/DatabaseHelper.h>

template<class T>
std::shared_ptr<T> AbstractManager<T>::getById(Guid id)
{
    DatabaseHelper::Instance().getCurrentSession();
}
