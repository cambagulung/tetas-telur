#include <Lingu/Config.h>
#include <Lingu/EggIncubator/Heater/Heater.h>
#include <Lingu/EggIncubator/State/State.h>
#include <Lingu/Relay/Relay.h>

namespace Lingu
{
    Relay::Relay RELAY;

    namespace EggIncubator
    {
        Heater::Heater() {}

        void Heater::setup(State State)
        {
            RELAY.setup(HEATER_PIN, HEATER_RELAY_ACTIVE_LOW);

            _STATE = State;
        }

        void Heater::loop()
        {
            float nowTemp, reqTemp;

            nowTemp = _STATE.getNowTemp();
            reqTemp = _STATE.getReqTemp();

            if (!isnan(nowTemp)) // Mengabaikan jika pembacaan gagal.
            {
                if (nowTemp < reqTemp)
                    RELAY.on();

                else
                    RELAY.off();
            }
        } // namespace Heater
    }     // namespace EggIncubator
} // namespace Lingu
