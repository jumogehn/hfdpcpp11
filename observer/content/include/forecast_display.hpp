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


#ifndef	_HFDP_CPP_OBSERVER_FORECAST_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_FORECAST_DISPLAY_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "display_element.hpp"
#include "observer.hpp"
#include "subject.hpp"

namespace headfirst {

  class ForecastDisplay : private Observer, private DisplayElement {

    Subject* weather_data_;
    float current_pressure_;
    float last_pressure_;

    // Disable copy constructor and assignment operator
    ForecastDisplay(const ForecastDisplay&) = delete;
    void operator=(const ForecastDisplay&) = delete;

  public:
    explicit ForecastDisplay();
    ~ForecastDisplay();
    int SetSubject(Subject* weather_data);
    int ResetSubject();
    void Update(float temp, float humidity, float pressure);
    void Display() const;
  };

} //namespace headfirst
#endif
