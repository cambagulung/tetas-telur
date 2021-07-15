#include "Store.hpp"

namespace Lingu
{
    namespace Data
    {
        void Store::setNowTemp(float temp, int index)
        {
            nowTemp[index] = temp;
        }

        void Store::setNowHumi(float humi, int index)
        {
            nowHumi[index] = humi;
        }

        float Store::getNowTemp(int index)
        {
            return nowTemp[index];
        }

        float Store::getNowHumi(int index)
        {
            return nowHumi[index];
        }

        float Store::getReqTemp(void)
        {
            return reqTemp;
        }

        float Store::getReqHumi(void)
        {
            return reqHumi;
        }
    }
}
