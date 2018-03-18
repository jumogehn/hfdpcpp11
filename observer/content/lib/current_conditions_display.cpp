//===--- current_conditions_display.hpp - -----------------------*- C++ -*-===//
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
#include "current_conditions_display.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "subject.hpp"


CurrentConditionsDisplay::CurrentConditionsDisplay() :
  temperature_(0.0), humidity_(0.0)
{
  std::cout << "CurrentConditionsDisplay"
    "::CurrentConditionsDisplay" << std::endl;
}
CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
  std::cout << "CurrentConditionsDisplay"
    "::~CurrentConditionsDisplay" << std::endl;
}
int CurrentConditionsDisplay::SetSubject(Subject* weather_data)
{
  assert(weather_data);
  assert(!weather_data_);
  weather_data_ = weather_data;
  //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
  weather_data_->RegisterObserver(this);

  return 0;
}
int CurrentConditionsDisplay::ResetSubject()
{
  assert(weather_data_);
  //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
  weather_data_->RemoveObserver(this);
  return 0;
}
void CurrentConditionsDisplay::Update(float temperature, float humidity,
                                      float pressure)
{
  std::cout << "CurrentConditionsDisplay::Update" << std::endl;
  temperature_ = temperature;
  humidity_ = humidity;
  Display();
}
void CurrentConditionsDisplay::Display() const
{
  std::cout << "CurrentConditionsDisplay::display" << std::endl;
  std::cout.setf(std::ios::showpoint);
  std::cout.precision(3);
  std::cout << "Current conditions: " << temperature_;
  std::cout << " F degrees and " << humidity_;
  std::cout << "% humidity" << std::endl;
}
