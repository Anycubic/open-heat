//
// Copyright (c) 2020 Alexander Mohr
// Open-Heat - Radiator control for ESP8266
// Licensed under the terms of the MIT license
//

#ifndef BME280_HPP_
#define BME280_HPP_
#include "ITemperatureSensor.hpp"
#include <Adafruit_BME280.h>

namespace open_heat {
namespace sensors {
class BME280 : public ITemperatureSensor {
  public:
  BME280();

  public: // ITemperatureSensor
      float getTemperature() override;
  void setup() override;
  void loop() override;

  private:
  // use I2C interface
  Adafruit_BME280 bme_;



  /*  Adafruit_Sensor* bme_pressure = bme.getPressureSensor();
    Adafruit_Sensor* bme_humidity = bme.getHumiditySensor();
  */
};
} // namespace sensors
} // namespace open_heat
#endif // BME280_HPP_
