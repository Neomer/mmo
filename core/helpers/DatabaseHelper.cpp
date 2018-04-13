#include "DatabaseHelper.h"

DatabaseHelper::DatabaseHelper()
{

}

DatabaseHelper::~DatabaseHelper()
{

}

DatabaseHelper &DatabaseHelper::Instance()
{
    static DatabaseHelper inst;
    return inst;
}

DatabaseSession &DatabaseHelper::getCurrentSession()
{

}
