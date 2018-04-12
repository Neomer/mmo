#ifndef RANDOMHELPER_H
#define RANDOMHELPER_H

#include <math.h>

class RandomHelper
{
public:
    static RandomHelper &Instance();

    int nextInt();
    int nextInt(int max);
    int nextInt(int min, int max);

private:
    RandomHelper();
    ~RandomHelper();

    RandomHelper(RandomHelper const&) = delete;
    RandomHelper& operator= (RandomHelper const&) = delete;
};

#endif // RANDOMHELPER_H
