#ifndef LINGU_RELAY_HEATER_H
#define LINGU_RELAY_HEATER_H

#include <Lingu/EggIncubator/State/State.h>

namespace Lingu
{
    namespace EggIncubator
    {
        class Heater
        {
        private:
            State _STATE;

        public:
            Heater();
            void setup(State State);
            void loop();
        };
    } // namespace EggIncubator
} // namespace Lingu

#endif
