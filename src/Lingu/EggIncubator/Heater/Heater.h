#ifndef LINGU_RELAY_HEATER_H
#define LINGU_RELAY_HEATER_H

#include <Lingu/State/State.h>

namespace Lingu
{
    namespace EggIncubator
    {
        class Heater
        {
        private:
            Lingu::State::State _STATE;

        public:
            void setup(Lingu::State::State State);
            void loop();
        };
    } // namespace EggIncubator
} // namespace Lingu

#endif
