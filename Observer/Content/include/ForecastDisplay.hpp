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


#ifndef	_HFDP_CPP_OBSERVER_FORECAST_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_FORECAST_DISPLAY_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "DisplayElement.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class ForecastDisplay : private Observer, private DisplayElement {

  Subject* _weatherData;
  float _currentPressure;
  float _lastPressure;

  ForecastDisplay(const ForecastDisplay&); // Disable copy constructor
  void operator=(const ForecastDisplay&); // Disable assignment operator

public:
  explicit ForecastDisplay();
  ~ForecastDisplay();
  int setSubject(Subject* weatherData);
  int resetSubject();
  void update(float temp, float humidity, float pressure);
  void display() const;
};

#endif
