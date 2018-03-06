//===--- ForecastDisplay.hpp - ----------------------------------*- C++ -*-===//
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
#include "ForecastDisplay.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.

ForecastDisplay::ForecastDisplay(std::shared_ptr<WeatherData> weatherData) :
  _weatherData(weatherData), _currentPressure(29.92F),
  _lastPressure(0)
{
  assert(weatherData);
  std::cout << "ForecastDisplay::ForecastDisplay" << std::endl;
  weatherData->registerObserver(this);
}
ForecastDisplay::~ForecastDisplay()
{
  std::cout << "ForecastDisplay::~ForecastDisplay" << std::endl;
  _weatherData->removeObserver(this);
}
void ForecastDisplay::update(float temp, float humidity, float pressure)
{
  std::cout << "ForecastDisplay::update" << std::endl;
  _lastPressure = _currentPressure;
  _currentPressure = pressure;
  display();
}
void ForecastDisplay::display() const
{
  std::cout << "ForecastDisplay::display" << std::endl;
  std::cout.setf(std::ios::showpoint);
  std::cout.precision(3);
  std::cout << "Forecast: ";
  if (_currentPressure > _lastPressure) {
    std::cout << "Improving weather on the way!";
  }
  else if (_currentPressure == _lastPressure) {
    std::cout << "More of the same";
  }
  else if (_currentPressure < _lastPressure) {
    std::cout << "Watch out for cooler, rainy weather";
  }
  std::cout << std::endl;
}
