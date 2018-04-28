#include "Race.h"

Race::Race()
{

}

void Race::fromDatabaseQuery(std::shared_ptr<AbstractDatabaseQuery> query)
{
    setName(query.get()->value<QString>("name"));
    setId(Guid::parse(query.get()->value<QString>("id")));
    setDescription(query.get()->value<QString>("description"));
}
