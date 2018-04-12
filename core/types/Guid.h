#ifndef GUID_H
#define GUID_H

#include <QString>

///
/// \brief Guid класс реализующий работу с Guid.
///
class Guid
{
public:
    ///
    /// \brief Guid создает копию Guid
    /// \param other
    ///
    Guid(const Guid &other);
    ///
    /// \brief newGuid создает новый Guid
    /// \return
    ///
    static Guid &newGuid();
    ///
    /// \brief emptyGuid возвращает пустой Guid
    /// \return
    ///
    static Guid &emptyGuid();
    ///
    /// \brief parse получает Guid из строкового значения. Если преобразование не удалось, то вернется пустой Guid.
    /// \param guid строка, которую необходимо распарсить
    /// \param ok результат обработки
    /// \return
    ///
    static Guid &parse(QString guid, bool &ok = nullptr);

    bool operator !=(const Guid &other);
    bool operator ==(const Guid &other);
    Guid &operator =(const Guid &other);
    bool operator <(const Guid &other);
    bool operator >(const Guid &other);


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
