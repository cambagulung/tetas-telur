#include <Lingu/EggIncubator/DHT/DHT.h>
#include <Lingu/EggIncubator/Display/Display.h>
#include <Lingu/EggIncubator/EggIncubator.h>
#include <Lingu/EggIncubator/Heater/Heater.h>
#include <Lingu/EggIncubator/State/State.h>

namespace Lingu
{
    namespace EggIncubator
    {
        DHT DHT_MODULE;
        Display DISPLAY;
        State STATE;
        Heater HEATER;

        EggIncubator::EggIncubator() {}

        void EggIncubator::setup()
        {
            DHT_MODULE.setup(STATE);
            HEATER.setup(STATE);
            DISPLAY.setup(STATE);
        }

        void EggIncubator::loop()
        {
            DHT_MODULE.loop();
            HEATER.loop();
            DISPLAY.loop();
        }
    } // namespace EggIncubator
} // namespace Lingu
