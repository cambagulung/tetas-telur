#ifndef LINGU_EGG_INCUBATOR_STATE_H
#define LINGU_EGG_INCUBATOR_STATE_H

namespace Lingu
{
    namespace EggIncubator
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
