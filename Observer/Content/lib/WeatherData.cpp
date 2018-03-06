//===--- WeatherData.hpp - --------------------------------------*- C++ -*-===//
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
#include "WeatherData.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <list>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "Observer.hpp"

WeatherData::WeatherData() :
  _temperature(0.0), _humidity(0.0), _pressure(0.0)
{
  std::cout << "WeatherData::WeatherData" << std::endl;
}
void WeatherData::registerObserver(std::shared_ptr<Observer> o)
{
  assert(o);
  std::cout << "WeatherData::registerObserver" << std::endl;
  _observers.push_back(o);
}
void WeatherData::removeObserver(std::shared_ptr<Observer> o)
{
  assert(o);
  std::cout << "WeatherData::removeObserver" << std::endl;
  _observers.remove(o);
}
void WeatherData::notifyObservers() const
{
  std::cout << "WeatherData::notifyObservers" << std::endl;
  for (std::shared_ptr<Observer> observer : _observers) {
    observer->update(_temperature, _humidity, _pressure);
  }
}
void WeatherData::measurementsChanged()
{
  std::cout << "WeatherData::measurementsChanged" << std::endl;
  notifyObservers();
}
void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
  std::cout << "WeatherData::setMeasurements" << std::endl;
  _temperature = temperature;
  _humidity = humidity;
  _pressure = pressure;
  measurementsChanged();
}

// other WeatherData methods here

float WeatherData::getTemperature() const
{
  std::cout << "WeatherData::getTemperature" << std::endl;
  return _temperature;
}
float WeatherData::getHumidity() const
{
  std::cout << "WeatherData::getHumidity" << std::endl;
  return _humidity;
}
float WeatherData::getPressure() const
{
  std::cout << "WeatherData::getPressure" << std::endl;
  return _pressure;
}

