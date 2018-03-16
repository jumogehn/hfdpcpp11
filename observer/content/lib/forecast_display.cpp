//===--- forecast_display.hpp - ---------------------------------*- C++ -*-===//
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
#include "forecast_display.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "subject.hpp"

ForecastDisplay::ForecastDisplay() :
  _currentPressure(29.92F),
  _lastPressure(0)
{
  std::cout << "ForecastDisplay::ForecastDisplay" << std::endl;
}
ForecastDisplay::~ForecastDisplay()
{
  std::cout << "ForecastDisplay::~ForecastDisplay" << std::endl;
}
int ForecastDisplay::setSubject(Subject* weatherData)
{
  assert(weatherData);
  assert(!_weatherData);
  _weatherData = weatherData;
  //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
  _weatherData->registerObserver(this);

  return 0;
}
int ForecastDisplay::resetSubject()
{
  assert(_weatherData);
  //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
  _weatherData->removeObserver(this);
  return 0;
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
