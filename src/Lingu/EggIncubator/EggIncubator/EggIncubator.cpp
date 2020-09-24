#include <Lingu/EggIncubator/EggIncubator/EggIncubator.h>
#include <Lingu/EggIncubator/Heater/Heater.h>
#include <Lingu/State/State.h>

namespace Lingu
{
    State::State STATE;

    namespace EggIncubator
    {
        Heater HEATER;

        void EggIncubator::setup()
        {
            HEATER.setup(STATE);
        }

        void EggIncubator::loop()
        {
            //
        }
    } // namespace EggIncubator
} // namespace Lingu
