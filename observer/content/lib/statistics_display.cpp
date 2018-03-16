//===--- statistics_display.hpp - -------------------------------*- C++ -*-===//
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
#include "statistics_display.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "subject.hpp"


StatisticsDisplay::StatisticsDisplay() :
  _maxTemp(0.0), _minTemp(200.0F),
  _tempSum(0.0), _numReadings(0)
{
  std::cout << "StatisticsDisplay::StatisticsDisplay" << std::endl;
}
StatisticsDisplay::~StatisticsDisplay()
{
  std::cout << "StatisticsDisplay::~StatisticsDisplay" << std::endl;
}
int StatisticsDisplay::setSubject(Subject* weatherData)
{
  assert(weatherData);
  assert(!_weatherData);
  _weatherData = weatherData;
  //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
  _weatherData->registerObserver(this);

  return 0;
}
int StatisticsDisplay::resetSubject()
{
  assert(_weatherData);
  //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
  _weatherData->removeObserver(this);
  return 0;
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
