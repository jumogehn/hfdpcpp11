//===--- WeatherStation.cpp - -----------------------------------*- C++ -*-===//
//
//                     Head First Design Patterns
//
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief
///
//===----------------------------------------------------------------------===//

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "CurrentConditionsDisplay.hpp"
#include "ForecastDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "WeatherData.hpp"
#ifdef _HEAT_INDEX_DISPLAY_
#include "HeatIndexDisplay.hpp"
#endif

int main(int argc, char* argv[]) {

  auto weatherData = std::make_shared<WeatherData>();

  auto currentDisplay = std::make_shared<CurrentConditionsDisplay>();
  currentDisplay->setSubject(weatherData);
  auto statisticsDisplay = std::make_shared<StatisticsDisplay>();
  statisticsDisplay->setSubject(weatherData);
  auto forecastDisplay = std::make_shared<ForecastDisplay>();
  forecastDisplay->setSubject(weatherData);
#ifdef _HEAT_INDEX_DISPLAY_
  auto heatIndexDisplay = std::make_shared<HeatIndexDisplay>();
  heatIndexDisplay->setSubject(weatherData);
#endif

  weatherData->setMeasurements(80, 65, 30.4f);
  weatherData->setMeasurements(82, 70, 29.2f);
  weatherData->setMeasurements(78, 90, 29.2f);

  return 0;
}

