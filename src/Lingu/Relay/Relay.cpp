#include <Arduino.h>
#include "Relay.h"

namespace Lingu
{
    namespace Relay
    {
        Relay::Relay(uint8_t PIN, bool ACTIVE_LOW = false)
        {
            _PIN = PIN;
            _ACTIVE_LOW = ACTIVE_LOW;
        }

        void Relay::on(void)
        {
            if (_ACTIVE_LOW)
            {
                return digitalWrite(_PIN, LOW);
            }

            return digitalWrite(_PIN, HIGH);
        }

        void Relay::off(void)
        {
            if (_ACTIVE_LOW)
            {
                return digitalWrite(_PIN, HIGH);
            }

            return digitalWrite(_PIN, LOW);
        }
    } // namespace Relay
} // namespace Lingu