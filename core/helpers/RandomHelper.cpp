#include "RandomHelper.h"
#include <QDateTime>
#include <iostream>
using namespace std;

RandomHelper &RandomHelper::Instance()
{
    static RandomHelper inst;
    return inst;
}

int RandomHelper::nextInt()
{
    return std::rand();
}

int RandomHelper::nextInt(int max)
{
    return std::rand() % max;
}

int RandomHelper::nextInt(int min, int max)
{
    return min + std::rand() % (max - min);
}

RandomHelper::RandomHelper()
{
    std::srand(QDateTime::currentDateTime().toMSecsSinceEpoch());
}

RandomHelper::~RandomHelper()
{

}
