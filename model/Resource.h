#ifndef RESOURCE_H
#define RESOURCE_H

#include <QObject>
#include "AbstractItem.h"

class Resource : public AbstractItem
{
public:
    Resource();

    // AbstractItem interface
public:
    bool get_IsEquippable() override { return false; }
};

#endif // RESOURCE_H
