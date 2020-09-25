#include "State.h"

namespace Lingu
{
    namespace EggIncubator
    {
        float State::getNowHumi(void)
        {
            return nowHumi;
        }

        float State::getNowTemp(void)
        {
            return nowTemp;
        }

        float State::getReqHumi(void)
        {
            return reqHumi;
        }

        float State::getReqTemp(void)
        {
            return reqTemp;
        }

        void State::setNowHumi(float humi)
        {
            nowHumi = humi;
        }

        void State::setReqHumi(float humi)
        {
            reqHumi = humi;
        }

        void State::setNowTemp(float temp)
        {
            nowTemp = temp;
        }

        void State::setReqTemp(float temp)
        {
            reqTemp = temp;
        }
    } // namespace EggIncubator
} // namespace Lingu
