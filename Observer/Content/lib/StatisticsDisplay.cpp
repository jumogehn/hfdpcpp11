//===--- StatisticsDisplay.hpp - --------------------------------*- C++ -*-===//
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
#include "StatisticsDisplay.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "WeatherData.hpp"


StatisticsDisplay::StatisticsDisplay(std::shared_ptr<WeatherData> weatherData) :
  _weatherData(weatherData), _maxTemp(0.0), _minTemp(200.0F),
  _tempSum(0.0), _numReadings(0)
{
  assert(weatherData);
  std::cout << "StatisticsDisplay::StatisticsDisplay" << std::endl;
  _weatherData->registerObserver(this);
}
StatisticsDisplay::~StatisticsDisplay()
{
  std::cout << "StatisticsDisplay::~StatisticsDisplay" << std::endl;
  _weatherData->removeObserver(this);
}
void StatisticsDisplay::update(float temp, float humidity, float pressure)
{
  std::cout << "StatisticsDisplay::update" << std::endl;
  _tempSum += temp;
  _numReadings++;

  if (temp > _maxTemp) {
    _maxTemp = temp;
  }

  if (temp < _minTemp) {
    _minTemp = temp;
  }

  display();
}
void StatisticsDisplay::display() const
{
  std::cout << "StatisticsDisplay::display" << std::endl;
  std::cout.setf(std::ios::showpoint);
  std::cout.precision(3);
  std::cout << "Avg/Max/Min temperature = " << (_tempSum / _numReadings);
  std::cout << "/" << _maxTemp << "/" << _minTemp << std::endl;
}
