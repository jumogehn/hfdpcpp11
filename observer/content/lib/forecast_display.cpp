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

namespace headfirst {

  ForecastDisplay::ForecastDisplay() :
    current_pressure_(29.92F),
    last_pressure_(0)
  {
    std::cout << "ForecastDisplay::ForecastDisplay" << std::endl;
  }
  ForecastDisplay::~ForecastDisplay()
  {
    std::cout << "ForecastDisplay::~ForecastDisplay" << std::endl;
  }
  int ForecastDisplay::SetSubject(Subject* weather_data)
  {
    assert(weather_data);
    assert(!weather_data_);
    weather_data_ = weather_data;
    //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
    weather_data_->RegisterObserver(this);

    return 0;
  }
  int ForecastDisplay::ResetSubject()
  {
    assert(weather_data_);
    //C++ Standard Library 2nd edition 5.2.3, util/enable_shared1.cpp
    weather_data_->RemoveObserver(this);
    return 0;
  }
  void ForecastDisplay::Update(float temp, float humidity, float pressure)
  {
    std::cout << "ForecastDisplay::Update" << std::endl;
    last_pressure_ = current_pressure_;
    current_pressure_ = pressure;
    Display();
  }
  void ForecastDisplay::Display() const
  {
    std::cout << "ForecastDisplay::display" << std::endl;
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(3);
    std::cout << "Forecast: ";
    if (current_pressure_ > last_pressure_) {
      std::cout << "Improving weather on the way!";
    }
    else if (current_pressure_ == last_pressure_) {
      std::cout << "More of the same";
    }
    else if (current_pressure_ < last_pressure_) {
      std::cout << "Watch out for cooler, rainy weather";
    }
    std::cout << std::endl;
  }
} //namespace headfirst
