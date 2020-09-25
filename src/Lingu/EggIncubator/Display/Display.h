#ifndef LINGU_EGG_INCUBATOR_DISPLAY_H
#define LINGU_EGG_INCUBATOR_DISPLAY_H

#include <Lingu/EggIncubator/State/State.h>

namespace Lingu
{
    namespace EggIncubator
    {
        class Display
        {
        private:
            State _STATE;
        public:
            Display();
            void setup(State State);
            void loop(void);
        };

    } // namespace EggIncubator
} // namespace Lingu

#endif