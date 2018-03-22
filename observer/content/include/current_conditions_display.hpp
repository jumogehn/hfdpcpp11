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

namespace headfirst {

  class CurrentConditionsDisplay : private Observer, private DisplayElement {

    Subject* weather_data_;
    float temperature_;
    float humidity_;

    CurrentConditionsDisplay(const CurrentConditionsDisplay&);
    void operator=(const CurrentConditionsDisplay&);

  public:
    explicit CurrentConditionsDisplay();
    ~CurrentConditionsDisplay();
    int SetSubject(Subject* weather_data);
    int ResetSubject();
    void Update(float temperature, float humidity, float pressure);
    void Display() const;
  };

} //namespace headfirst
#endif
