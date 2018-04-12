#ifndef GUID_H
#define GUID_H

#include <QString>

class Guid
{
public:
    Guid(const Guid &other);

    static Guid &newGuid();

private:
    Guid();

private:
    struct GuidStructure
    {
        quint32 Data1;
        quint16 Data2;
        quint16 Data3;
        quint32 Data4;
        quint32 Data5;
    };
    GuidStructure _data;
};

#endif // GUID_H
