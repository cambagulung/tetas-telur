#ifndef LINGU_MODULE_DHT_HPP
#define LINGU_MODULE_DHT_HPP

#include <DHT.h>
#include <Lingu/Data/Store.hpp>

namespace Lingu
{
    namespace Module
    {
        class DHT
        {
        private:
            int _id;

            Data::Store _store;

            ::DHT _module;

        public:
            DHT(uint8_t pin, int type);

            void
            setup(Data::Store store, int id),
                loop(void);
        };
    }
}

#endif
