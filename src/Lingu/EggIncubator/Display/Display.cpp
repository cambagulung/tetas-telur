#include <Lingu/Config.h>
#include <Lingu/EggIncubator/Display/Display.h>
#include <Lingu/EggIncubator/State/State.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C LCD(DISPLAY_I2C_ADDR, DISPLAY_ROWS, DISPLAY_COLS);

namespace Lingu
{
    namespace EggIncubator
    {
        Display::Display() {}

        void Display::setup(State State)
        {
            LCD.init();
            LCD.backlight();

            LCD.setCursor(0, 0);
            LCD.print("Temp:");

            LCD.setCursor(1, 0);
            LCD.print("Humi:");

            _STATE = State;
        }

        void Display::loop()
        {
            //
        }

    } // namespace EggIncubator
} // namespace Lingu
