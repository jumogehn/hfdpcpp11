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
//Other libraries' .h files.
//Your project's .h files.
#include "Subject.hpp"


CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* weatherData) :
  _weatherData(weatherData), _temperature(0.0), _humidity(0.0)
{
  assert(weatherData);
  std::cout << "CurrentConditionsDisplay"
    "::CurrentConditionsDisplay" << std::endl;
  _weatherData->registerObserver(this);
}
CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
  std::cout << "CurrentConditionsDisplay"
    "::~CurrentConditionsDisplay" << std::endl;
  _weatherData->removeObserver(this);
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
