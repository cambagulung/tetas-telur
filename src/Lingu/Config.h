#ifndef CONFIG_H
#define CONFIG_H

#include <DHT.h>

#define HEATER_PIN 6
#define HEATER_RELAY_ACTIVE_LOW false

#define DHT_PIN 7
#define DHT_TYPE DHT22

#define DISPLAY_I2C_ADDR 0x27
#define DISPLAY_COLS 16
#define DISPLAY_ROWS 2

#endif
