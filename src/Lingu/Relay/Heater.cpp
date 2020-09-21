#include <Arduino.h>
#include "Heater.h"

namespace Lingu
{
    namespace Relay
    {
        Heater::Heater(uint8_t PIN, bool ACTIVE_LOW) : Relay(PIN, ACTIVE_LOW)
        {
            //
        }

        void Heater::onOff(float temp, float reqTemp)
        {
            if (temp < reqTemp)
                on();

            else
                off();
        }
    } // namespace Relay
} // namespace Lingu