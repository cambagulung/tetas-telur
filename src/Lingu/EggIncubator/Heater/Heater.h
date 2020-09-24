#ifndef LINGU_RELAY_HEATER_H
#define LINGU_RELAY_HEATER_H

#include <Arduino.h>
#include <DHT.h>
#include <Lingu/State/State.h>

namespace Lingu
{
    namespace EggIncubator
    {
        namespace Heater
        {
            class Heater
            {
            private:
                Lingu::State::State _STATE;

            public:
                void setup(Lingu::State::State State);
                void loop();
            };
        } // namespace Heater
    }     // namespace EggIncubator
} // namespace Lingu

#endif
