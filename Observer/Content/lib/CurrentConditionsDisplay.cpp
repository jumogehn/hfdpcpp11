//===--- CurrentConditionsDisplay.hpp - -------------------------*- C++ -*-===//
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
#include "CurrentConditionsDisplay.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "Subject.hpp"


CurrentConditionsDisplay::CurrentConditionsDisplay() :
  _temperature(0.0), _humidity(0.0)
{
  std::cout << "CurrentConditionsDisplay"
    "::CurrentConditionsDisplay" << std::endl;
}
CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
  std::cout << "CurrentConditionsDisplay"
    "::~CurrentConditionsDisplay" << std::endl;
}
int CurrentConditionsDisplay::setSubject(std::shared_ptr<Subject> weatherData)
{
  assert(weatherData);
  assert(!_weatherData);
  _weatherData = weatherData;
  //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
  _weatherData->registerObserver(shared_from_this());

  return 0;
}
int CurrentConditionsDisplay::resetSubject()
{
  assert(_weatherData);
  //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
  _weatherData->removeObserver(shared_from_this());
  return 0;
}
void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure)
{
  std::cout << "CurrentConditionsDisplay::update" << std::endl;
  _temperature = temperature;
  _humidity = humidity;
  display();
}
void CurrentConditionsDisplay::display() const
{
  std::cout << "CurrentConditionsDisplay::display" << std::endl;
  std::cout.setf(std::ios::showpoint);
  std::cout.precision(3);
  std::cout << "Current conditions: " << _temperature;
  std::cout << " F degrees and " << _humidity;
  std::cout << "% humidity" << std::endl;
}
