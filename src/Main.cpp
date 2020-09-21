#include <Arduino.h>
#include <DHT.h>
#include <Lingu/Relay/Heater.h>

#define HEATER_PIN 6
#define DHT_PIN 7
#define DHT_TYPE DHT22

DHT DHT_MODULE(DHT_PIN, DHT_TYPE);

Lingu::Relay::Heater HEATER_MODULE(HEATER_PIN);

float humi, temp, reqHumi, reqTemp;

void setup()
{
  // put your setup code here, to run once:
}

void loop()
{
  humi = DHT_MODULE.readHumidity();    //baca kelembaban
  temp = DHT_MODULE.readTemperature(); //baca suhu

  if (isnan(humi) || isnan(temp))

    return; //kembali jika tidak berhasil
    
    HEATER_MODULE.onOff(temp, reqTemp);
}
