#ifndef LINGU_EGG_INCUBATOR_EGG_INCUBATOR_H
#define LINGU_EGG_INCUBATOR_EGG_INCUBATOR_H

#include <Arduino.h>
#include <Lingu/State/State.h>

namespace Lingu
{
    namespace EggIncubator
    {
        class EggIncubator
        {
        public:
            void setup();
            void loop();
        };
    } // namespace EggIncubator
} // namespace Lingu

#endif