#include <Arduino.h>
#include <Lingu/EggIncubator/EggIncubator.h>
#include <Lingu/State/State.h>

Lingu::EggIncubator::EggIncubator EGG_ICUBATOR;

void setup()
{
  EGG_ICUBATOR.setup();
}

void loop()
{
  EGG_ICUBATOR.loop();
}
