#ifndef RACE_H
#define RACE_H

#include <QObject>
#include "AbstractNamedEntity.h"
#include "AbstractDatabaseStored.h"

class Race :
        public AbstractNamedEntity,
        public AbstractDatabaseStored
{
    Q_OBJECT

public:
    Race();

    PROP(QString, Description)
    PROP(Guid, Icon)

// AbstractDatabaseStored interface
public:
    QString getTableName() final { return "Races"; }
    void fromDatabaseQuery(std::shared_ptr<AbstractDatabaseQuery> query) override;
};

#endif // RACE_H
