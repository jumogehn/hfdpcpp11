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


#ifndef	_HFDP_CPP_OBSERVER_CURRENT_CONDITIONS_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_CURRENT_CONDITIONS_DISPLAY_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "display_element.hpp"
#include "observer.hpp"
#include "subject.hpp"

class CurrentConditionsDisplay : private Observer, private DisplayElement {

  Subject* _weatherData;
  float _temperature;
  float _humidity;

  CurrentConditionsDisplay(const CurrentConditionsDisplay&);
  void operator=(const CurrentConditionsDisplay&);

public:
  explicit CurrentConditionsDisplay();
  ~CurrentConditionsDisplay();
  int setSubject(Subject* weatherData);
  int resetSubject();
  void update(float temperature, float humidity, float pressure);
  void display() const;
};

#endif
