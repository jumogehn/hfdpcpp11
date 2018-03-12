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

  std::unique_ptr<WeatherData> weatherData(new WeatherData());

  std::unique_ptr<CurrentConditionsDisplay> currentDisplay(new CurrentConditionsDisplay());
  currentDisplay->setSubject(weatherData.get());
  std::unique_ptr<StatisticsDisplay> statisticsDisplay(new StatisticsDisplay());
  statisticsDisplay->setSubject(weatherData.get());
  std::unique_ptr<ForecastDisplay> forecastDisplay(new ForecastDisplay());
  forecastDisplay->setSubject(weatherData.get());
#ifdef _HEAT_INDEX_DISPLAY_
  std::unique_ptr<HeatIndexDisplay> heatIndexDisplay(new HeatIndexDisplay());
  heatIndexDisplay->setSubject(weatherData.get());
#endif

  weatherData->setMeasurements(80, 65, 30.4f);
  weatherData->setMeasurements(82, 70, 29.2f);
  weatherData->setMeasurements(78, 90, 29.2f);

  return 0;
}

