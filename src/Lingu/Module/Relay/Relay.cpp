#include <Arduino.h>
#include <Lingu/Module/Relay/Relay.hpp>

namespace Lingu
{
    namespace Module
    {
        Relay::Relay(uint8_t pin, bool active_low)
        {
            setup(pin, active_low);
        }

        void Relay::setup(uint8_t pin, bool active_low)
        {
            _pin = pin;
            _active_low = active_low;
        }

        void Relay::on(void)
        {
            if (_active_low)
            {
                return digitalWrite(_pin, LOW);
            }

            digitalWrite(_pin, HIGH);
        }

        void Relay::off(void)
        {
            if (_active_low)
            {
                return digitalWrite(_pin, HIGH);
            }

            digitalWrite(_pin, LOW);
        }
    }
} // namespace Lingu