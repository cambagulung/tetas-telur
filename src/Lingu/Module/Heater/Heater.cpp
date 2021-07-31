#include <Lingu/Data/Constant.hpp>
#include <Lingu/Module/Heater/Heater.hpp>

namespace Lingu
{
    namespace Module
    {
        Heater::Heater(uint8_t pin, int type) : _module(pin, type)
        {
            //
        }

        void Heater::setup(Data::Store store, int id)
        {
            _store = store;

            _id = id;
        }

        void Heater::loop(void)
        {
            if (_store.getReqTemp() >= _store.getNowTemp(_id))
            {
                return _module.off();
            }

            _module.on();
        }
    }
}
