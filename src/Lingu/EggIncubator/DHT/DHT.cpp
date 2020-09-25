#include <DHT.h>
#include <Lingu/Config.h>
#include <Lingu/EggIncubator/DHT/DHT.h>
#include <Lingu/EggIncubator/State/State.h>

DHT DHT_MODULE(DHT_PIN, DHT_TYPE);

namespace Lingu
{
  namespace EggIncubator
  {
    DHT::DHT() {}

    void DHT::setup(State State)
    {
      DHT_MODULE.begin();

      _STATE = State;
    }

    void DHT::loop(void)
    {
      _STATE.setNowHumi(DHT_MODULE.readHumidity());
      _STATE.setNowTemp(DHT_MODULE.readTemperature());
    }
  } // namespace EggIncubator
} // namespace Lingu
