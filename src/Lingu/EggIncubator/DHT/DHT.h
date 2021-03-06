#ifndef LINGU_EGG_INCUBATOR_DHT_H
#define LINGU_EGG_INCUBATOR_DHT_H

#include <Lingu/EggIncubator/State/State.h>

namespace Lingu
{
    namespace EggIncubator
    {
        class DHT
        {
        private:
            State _STATE;

        public:
            DHT();
            void setup(State State);
            void loop(void);
        };
    } // namespace EggIncubator
} // namespace Lingu

#endif