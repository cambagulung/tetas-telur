#ifndef LINGU_STATE_STATE_H
#define LINGU_STATE_STATE_H

#include <Arduino.h>
#include <Lingu/Config.h>

namespace Lingu
{
    namespace State
    {
        class State
        {
        private:
            float nowTemp, nowHumi, reqTemp, reqHumi;

        public:
            void setNowTemp(float temp);
            void setReqTemp(float temp);
            void setNowHumi(float humi);
            void setReqHumi(float humi);

            float getNowTemp(void);
            float getReqTemp(void);
            float getNowHumi(void);
            float getReqHumi(void);
        };
    } // namespace State
} // namespace Lingu

#endif
