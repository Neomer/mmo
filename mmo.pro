QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        main.cpp \
    core/types/Guid.cpp \
    core/helpers/RandomHelper.cpp \
    model/AbstractItem.cpp \
    model/AbstractEquippableItem.cpp \
    model/Resource.cpp \
    model/Weapon.cpp \
    model/AbstractActor.cpp \
    model/Race.cpp \
    model/Armor.cpp \
    model/BaseWeapon.cpp \
    model/Hero.cpp \
    model/Inventory.cpp \
    model/managers/AbstractManager.cpp \
    core/helpers/DatabaseHelper.cpp \
    core/database/DatabaseSession.cpp \
    core/database/AbstractDatabaseQuery.cpp \
    core/database/AbstractDatabaseConnection.cpp \
    core/database/postgresql/PostgresDatabaseQuery.cpp \
    model/managers/RaceManager.cpp

HEADERS += \
    core/types/Guid.h \
    core/helpers/RandomHelper.h \
    model/AbstractItem.h \
    model/AbstractEquippableItem.h \
    model/Resource.h \
    model/Weapon.h \
    model/AbstractActor.h \
    model/AbstractEntity.h \
    model/Race.h \
    model/AbstractNamedEntity.h \
    core/defines.h \
    model/Armor.h \
    model/BaseWeapon.h \
    model/Hero.h \
    model/Inventory.h \
    model/managers/AbstractManager.h \
    model/AbstractDatabaseStored.h \
    core/helpers/DatabaseHelper.h \
    core/database/DatabaseSession.h \
    core/database/AbstractDatabaseQuery.h \
    core/database/AbstractDatabaseConnection.h \
    core/database/postgresql/PostgresDatabaseQuery.h \
    model/managers/RaceManager.h

INCLUDEPATH += $$PWD
