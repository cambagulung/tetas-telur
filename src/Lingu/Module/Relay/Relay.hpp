#ifndef LINGU_MODULE_RELAY_HPP
#define LINGU_MODULE_RELAY_HPP

#include <Arduino.h>

namespace Lingu
{
    namespace Module
    {
        class Relay
        {
        private:
            uint8_t _pin;
            bool _active_low;

        public:
            Relay(uint8_t pin, bool active_low = false);

            void setup(uint8_t pin, bool active_low = false),
                on(void),
                off(void);
        };
    }
} // namespace Lingu

#endif