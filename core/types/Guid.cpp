#include "Guid.h"
#include <core/helpers/RandomHelper.h>

Guid::Guid(const Guid &other)
{
    _data = other._data;
}

Guid Guid::newGuid()
{
    Guid ret;
    quint8 *ptr = (quint8 *)&(ret._data);
    for (unsigned int i = 0; i < sizeof(GuidStructure); i++)
    {
         ptr[i] = RandomHelper::Instance().nextInt(0x100);
    }
    return ret;
}

Guid Guid::emptyGuid()
{
    Guid ret;
    memset(&ret._data, 0, sizeof(GuidStructure));
    return ret;
}

Guid Guid::parse(QString guid, bool *ok)
{

}

bool Guid::operator !=(const Guid &other)
{
    return memcmp(&(other._data), &_data, sizeof(GuidStructure)) != 0;
}

bool Guid::operator ==(const Guid &other)
{
    return memcmp(&(other._data), &_data, sizeof(GuidStructure)) == 0;
}

Guid Guid::operator =(const Guid &other)
{
    _data = other._data;
    return *this;
}

bool Guid::operator <(const Guid &other)
{
    return memcmp(&(other._data), &_data, sizeof(GuidStructure)) > 0;
}

bool Guid::operator >(const Guid &other)
{
    return memcmp(&(other._data), &_data, sizeof(GuidStructure)) < 0;
}

QString Guid::toString()
{
    return QString("%1-%2-%3-%4-%5%6").arg(
                QString::number(_data.Data1, 16).rightJustified(8, '0'),
                QString::number(_data.Data2, 16).rightJustified(4, '0'),
                QString::number(_data.Data3, 16).rightJustified(4, '0'),
                QString::number((quint16)((_data.Data4 & 0xffff0000) >> 16), 16).rightJustified(4, '0'),
                QString::number((quint16)( _data.Data4 & 0x0000ffff), 16).rightJustified(4, '0'),
                QString::number( _data.Data5, 16).rightJustified(8, '0'));
}

Guid::Guid()
{

}
