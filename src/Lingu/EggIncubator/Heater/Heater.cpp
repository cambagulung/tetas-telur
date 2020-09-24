#include <Lingu/Config.h>
#include <Lingu/EggIncubator/Heater/Heater.h>
#include <Lingu/Relay/Relay.h>
#include <Lingu/State/State.h>

namespace Lingu
{
    Relay::Relay RELAY;

    namespace EggIncubator
    {
        void Heater::setup(Lingu::State::State State)
        {
            RELAY.setup(HEATER_PIN, HEATER_RELAY_ACTIVE_LOW);

            _STATE = State;
        }

        void Heater::loop()
        {
            float nowTemp, reqTemp;

            nowTemp = _STATE.getNowTemp();
            reqTemp = _STATE.getReqTemp();

            if (!isnan(nowTemp))
            {
                if (nowTemp < reqTemp)
                    RELAY.on();

                else
                    RELAY.off();
            }
        } // namespace Heater
    }     // namespace EggIncubator
} // namespace Lingu
