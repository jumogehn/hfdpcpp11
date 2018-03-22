//===--- heat_index_display.hpp - -------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_OBSERVER_HEAT_INDEX_DISPLAY_HPP_
#define _HFDP_CPP_OBSERVER_HEAT_INDEX_DISPLAY_HPP_

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

  class HeatIndexDisplay : private Observer, private DisplayElement {

    Subject* weather_data_;
    float heat_index_;

    HeatIndexDisplay(const HeatIndexDisplay&); // Disable copy constructor
    void operator=(const HeatIndexDisplay&); // Disable assignment operator

    float computeHeatIndex(float t, float rh) const;

  public:
    explicit HeatIndexDisplay();
    ~HeatIndexDisplay();
    int SetSubject(Subject* weather_data);
    int ResetSubject();
    void Update(float t, float rh, float pressure);
    void Display() const;
  };

} //namespace headfirst
#endif
