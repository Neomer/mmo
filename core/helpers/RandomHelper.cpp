#include "RandomHelper.h"

RandomHelper &RandomHelper::Instance()
{
    static RandomHelper inst;
    return inst;
}

RandomHelper::RandomHelper()
{

}

RandomHelper::~RandomHelper()
{

}
