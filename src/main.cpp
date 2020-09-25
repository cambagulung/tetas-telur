#include <Arduino.h>

#include "Lingu/EggIncubator/EggIncubator.h"

Lingu::EggIncubator::EggIncubator EGG_INCUBATOR;

void setup()
{
  EGG_INCUBATOR.setup();
}

void loop()
{
  EGG_INCUBATOR.loop();
}
