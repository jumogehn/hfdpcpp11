//===--- weather_data.hpp - -------------------------------------*- C++ -*-===//
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
#include "weather_data.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <list>
//Other libraries' .h files.
//Your project's .h files.
#include "observer.hpp"

WeatherData::WeatherData() :
  temperature_(0.0), humidity_(0.0), pressure_(0.0)
{
  std::cout << "WeatherData::WeatherData" << std::endl;
}
void WeatherData::RegisterObserver(Observer* o)
{
  assert(o);
  std::cout << "WeatherData::RegisterObserver" << std::endl;
  observers_.push_back(o);
}
void WeatherData::RemoveObserver(Observer* o)
{
  assert(o);
  std::cout << "WeatherData::RemoveObserver" << std::endl;
  observers_.remove(o);
}
void WeatherData::NotifyObservers() const
{
  std::cout << "WeatherData::NotifyObservers" << std::endl;
  //http://en.cppreference.com/w/cpp/language/range-for
  for (Observer* observer : observers_) {
    observer->Update(temperature_, humidity_, pressure_);
  }
}
void WeatherData::MeasurementsChanged()
{
  std::cout << "WeatherData::MeasurementsChanged" << std::endl;
  NotifyObservers();
}
void WeatherData::SetMeasurements(float temperature, float humidity, float pressure)
{
  std::cout << "WeatherData::SetMeasurements" << std::endl;
  temperature_ = temperature;
  humidity_ = humidity;
  pressure_ = pressure;
  MeasurementsChanged();
}

// other WeatherData methods here

float WeatherData::GetTemperature() const
{
  std::cout << "WeatherData::GetTemperature" << std::endl;
  return temperature_;
}
float WeatherData::GetHumidity() const
{
  std::cout << "WeatherData::GetHumidity" << std::endl;
  return humidity_;
}
float WeatherData::GetPressure() const
{
  std::cout << "WeatherData::GetPressure" << std::endl;
  return pressure_;
}

