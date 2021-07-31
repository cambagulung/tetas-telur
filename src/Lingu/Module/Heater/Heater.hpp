#ifndef LINGU_MODULE_HEATER_HPP
#define LINGU_MODULE_HEATER_HPP

#include <Lingu/Data/Store.hpp>
#include <Lingu/Module/Relay/Relay.hpp>

namespace Lingu
{
    namespace Module
    {
        class Heater
        {
        private:
            int _id;

            Data::Store _store;

            Relay _module;

        public:
            Heater(uint8_t pin, int type);

            void
            setup(Data::Store store, int id),
                loop(void);
        };
    }
}

#endif
