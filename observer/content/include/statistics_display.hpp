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


#ifndef	_HFDP_CPP_OBSERVER_STATISTICS_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_STATISTICS_DISPLAY_HPP_


//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "display_element.hpp"
#include "observer.hpp"
#include "subject.hpp"

class StatisticsDisplay : private Observer, private DisplayElement {

  Subject* weather_data_;
  float max_temp_;
  float min_temp_;
  float temp_sum_;
  int num_readings_;

  StatisticsDisplay(const StatisticsDisplay&); // Disable copy constructor
  void operator=(const StatisticsDisplay&); // Disable assignment operator

public:
  explicit StatisticsDisplay();
  ~StatisticsDisplay();
  int SetSubject(Subject* weather_data);
  int ResetSubject();
  void Update(float temp, float humidity, float pressure);
  void Display() const;
};

#endif
