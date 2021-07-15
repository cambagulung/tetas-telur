#include <Lingu/Data/Constant.hpp>
#include <Lingu/Pusher/Pusher.hpp>
#include <Lingu/Module/DHT/DHT.hpp>
namespace Lingu
{
    Module::DHT DHT_MODULE1(Data::Constant::DHT1_PIN, Data::Constant::DHT1_TYPE);
    Module::DHT DHT_MODULE2(Data::Constant::DHT2_PIN, Data::Constant::DHT2_TYPE);

    Pusher::Pusher(Data::Store store)
    {
        setup(store);
    }

    void Pusher::setup(Data::Store store)
    {
        DHT_MODULE1.setup(store, 1);
        DHT_MODULE2.setup(store, 2);
    }

    void Pusher::loop(void)
    {
        DHT_MODULE1.loop();
        DHT_MODULE2.loop();
    }
}
