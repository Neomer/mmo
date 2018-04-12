#ifndef RANDOMHELPER_H
#define RANDOMHELPER_H

#include <math.h>

class RandomHelper
{
public:
    static RandomHelper &Instance();

private:
    RandomHelper();
    ~RandomHelper();

    RandomHelper(RandomHelper const&) = delete;
    RandomHelper& operator= (RandomHelper const&) = delete;
};

#endif // RANDOMHELPER_H
