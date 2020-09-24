#ifndef LINGU_RELAY_RELAY_H
#define LINGU_RELAY_RELAY_H

#include <Arduino.h>

namespace Lingu
{
    namespace Relay
    {
        class Relay
        {
        private:
            uint8_t _PIN;
            bool _ACTIVE_LOW;

        public:
            void setup(uint8_t PIN, bool ACTIVE_LOW = false);
            void on(void);
            void off(void);
        };
    } // namespace Relay
} // namespace Lingu

#endif