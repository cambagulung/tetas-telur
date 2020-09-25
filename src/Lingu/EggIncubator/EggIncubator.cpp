#include "EggIncubator.h"
#include "DHT/DHT.h"
#include "Heater/Heater.h"
#include "State/State.h"

namespace Lingu
{
    namespace EggIncubator
    {
        DHT DHT_MODULE;
        State STATE;
        Heater HEATER;

        void EggIncubator::setup()
        {
            DHT_MODULE.setup(STATE);
            HEATER.setup(STATE);
        }

        void EggIncubator::loop()
        {
            DHT_MODULE.loop();
            HEATER.loop();
        }
    } // namespace EggIncubator
} // namespace Lingu
