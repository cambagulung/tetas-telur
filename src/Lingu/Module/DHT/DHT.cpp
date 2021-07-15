#include <DHT.h>
#include <Lingu/Data/Constant.hpp>
#include <Lingu/Module/DHT/DHT.hpp>

namespace Lingu
{
    namespace Module
    {
        DHT::DHT(uint8_t pin, int type) : _module(pin, type)
        {
            //
        }

        void DHT::setup(Data::Store store, int id)
        {
            _module.begin();
            _module.begin();

            _store = store;

            _id = id;
        }

        void DHT::loop(void)
        {
            _store.setNowHumi(_module.readHumidity(), _id);
            _store.setNowTemp(_module.readTemperature(), _id);
        }
    }
}
