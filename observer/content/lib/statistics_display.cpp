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
  max_temp_(0.0), min_temp_(200.0F),
  temp_sum_(0.0), num_readings_(0)
{
  std::cout << "StatisticsDisplay::StatisticsDisplay" << std::endl;
}
StatisticsDisplay::~StatisticsDisplay()
{
  std::cout << "StatisticsDisplay::~StatisticsDisplay" << std::endl;
}
int StatisticsDisplay::SetSubject(Subject* weather_data)
{
  assert(weather_data);
  assert(!weather_data_);
  weather_data_ = weather_data;
  //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
  weather_data_->RegisterObserver(this);

  return 0;
}
int StatisticsDisplay::ResetSubject()
{
  assert(weather_data_);
  //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
  weather_data_->RemoveObserver(this);
  return 0;
}
void StatisticsDisplay::Update(float temp, float humidity, float pressure)
{
  std::cout << "StatisticsDisplay::Update" << std::endl;
  temp_sum_ += temp;
  num_readings_++;

  if (temp > max_temp_) {
    max_temp_ = temp;
  }

  if (temp < min_temp_) {
    min_temp_ = temp;
  }

  Display();
}
void StatisticsDisplay::Display() const
{
  std::cout << "StatisticsDisplay::display" << std::endl;
  std::cout.setf(std::ios::showpoint);
  std::cout.precision(3);
  std::cout << "Avg/Max/Min temperature = " << (temp_sum_ / num_readings_);
  std::cout << "/" << max_temp_ << "/" << min_temp_ << std::endl;
}
