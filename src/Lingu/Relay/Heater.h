#ifndef LINGU_RELAY_HEATER_H
#define LINGU_RELAY_HEATER_H

#include "Relay.h"

namespace Lingu
{
    namespace Relay
    {
        class Heater : public Relay
        {
        public:
            Heater(uint8_t PIN, bool ACTIVE_LOW = false);
            void onOff(float temp, float reqTemp);
        };
    } // namespace Relay

} // namespace Lingu

#endif