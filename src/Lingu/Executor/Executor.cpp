#include <Lingu/Data/Constant.hpp>
#include <Lingu/Executor/Executor.hpp>
#include <Lingu/Module/Heater/Heater.hpp>

namespace Lingu
{
    Module::Heater HEATER1(Data::Constant::HEATER1_PIN, Data::Constant::HEATER1_RELAY_ACTIVE_LOW);
    Module::Heater HEATER2(Data::Constant::HEATER2_PIN, Data::Constant::HEATER2_RELAY_ACTIVE_LOW);

    void Executor::setup(Data::Store store)
    {
        HEATER1.setup(store, 1);
        HEATER2.setup(store, 2);

        _store = store;
    }

    void Executor::loop(void)
    {
        HEATER1.loop();
        HEATER2.loop();
    }
}