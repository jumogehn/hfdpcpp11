//===--- weather_station.cpp - ----------------------------------*- C++ -*-===//
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
#include "current_conditions_display.hpp"
#include "forecast_display.hpp"
#include "statistics_display.hpp"
#include "weather_data.hpp"
#ifdef _HEAT_INDEX_DISPLAY_
#include "heat_index_display.hpp"
#endif

int main(int argc, char* argv[]) {

  std::unique_ptr<WeatherData>
    weather_data(new WeatherData());

  std::unique_ptr<CurrentConditionsDisplay>
    current_display(new CurrentConditionsDisplay());
  current_display->SetSubject(weather_data.get());
  std::unique_ptr<StatisticsDisplay>
    statistics_display(new StatisticsDisplay());
  statistics_display->SetSubject(weather_data.get());
  std::unique_ptr<ForecastDisplay>
    forecast_display(new ForecastDisplay());
  forecast_display->SetSubject(weather_data.get());
#ifdef _HEAT_INDEX_DISPLAY_
  std::unique_ptr<HeatIndexDisplay>
    heat_index_display(new HeatIndexDisplay());
  heat_index_display->SetSubject(weather_data.get());
#endif

  weather_data->SetMeasurements(80, 65, 30.4f);
  weather_data->SetMeasurements(82, 70, 29.2f);
  weather_data->SetMeasurements(78, 90, 29.2f);

  return 0;
}

