
#ifndef DATA_CONSTANT_HPP
#define DATA_CONSTANT_HPP

#include "DHT.h"

namespace Lingu
{
    namespace Data
    {
        class Constant
        {
        private:
            /* data */
        public:
            static const uint8_t HEATER1_PIN = 0,
                                 HEATER2_PIN = 0,

                                 FAN1_PIN = 0,
                                 FAN2_PIN = 0,

                                 DHT1_PIN = 0,
                                 DHT2_PIN = 0;

            static const bool HEATER1_RELAY_ACTIVE_LOW = false,
                              HEATER2_RELAY_ACTIVE_LOW = false,

                              FAN1_RELAY_ACTIVE_LOW = false,
                              FAN2_RELAY_ACTIVE_LOW = false;

            static const int DHT1_TYPE = DHT22,
                             DHT2_TYPE = DHT22,

                             DISPLAY_I2C_ADDR = 0x27,

                             DISPLAY_COLS = 16,
                             DISPLAY_ROWS = 2;
        };
    }
}

#endif
