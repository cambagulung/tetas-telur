
#ifndef DATA_STORE_HPP
#define DATA_STORE_HPP

namespace Lingu
{
    namespace Data
    {
        class Store
        {
        private:
            float nowTemp[2], nowHumi[2], reqTemp, reqHumi;

        public:
            void
            setNowTemp(float temp, int index),
                setNowHumi(float humi, int index),

                setReqTemp(float temp),
                setReqHumi(float humi);

            float
            getNowTemp(int index),
                getNowHumi(int index),

                getReqTemp(void),
                getReqHumi(void);
        };
    }
}

#endif
