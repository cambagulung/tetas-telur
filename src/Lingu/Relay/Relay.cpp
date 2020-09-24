#include <Arduino.h>
#include <Lingu/Relay/Relay.h>

namespace Lingu
{
    namespace Relay
    {
        void Relay::setup(uint8_t PIN, bool ACTIVE_LOW)
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