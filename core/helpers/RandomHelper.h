#ifndef RANDOMHELPER_H
#define RANDOMHELPER_H

#include <math.h>

///
/// \brief RandomHelper класс для генерации последовательности псевдо-случайных чисел
///
class RandomHelper
{
public:
    ///
    /// \brief Instance вовзращает экземпляр класса
    /// \return
    ///
    static RandomHelper &Instance();
    ///
    /// \brief nextInt возвращает следующее в последовательности случайное число
    /// \return
    ///
    int nextInt();
    ///
    /// \brief nextInt возвращает следующее в последовательности случайное число
    /// \param max максимальное допустимое значение
    /// \return
    ///
    int nextInt(int max);
    ///
    /// \brief nextInt возвращает следующее в последовательности случайное число
    /// \param min минимальное допустимое значение
    /// \param max максимальное допустимое значение
    /// \return
    ///
    int nextInt(int min, int max);
    ///
    /// \brief nextDouble возвращает следующее случайное вещественное число в диапазоне [0; 1]
    /// \return
    ///
    double nextDouble();
    ///
    /// \brief nextBool возвращает следующее в последовательности случайное число
    /// \return
    ///
    bool nextBool();

private:
    RandomHelper();
    ~RandomHelper();

    RandomHelper(RandomHelper const&) = delete;
    RandomHelper& operator= (RandomHelper const&) = delete;
};

#endif // RANDOMHELPER_H
