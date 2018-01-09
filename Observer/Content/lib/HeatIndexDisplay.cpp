//===--- HeatIndexDisplay.hpp - ---------------------------------*- C++ -*-===//
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
#include "HeatIndexDisplay.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "Subject.hpp"

float HeatIndexDisplay::computeHeatIndex(float t, float rh) const
{
  std::cout << "HeatIndexDisplay::computeHeatIndex" << std::endl;
  float index = (float)((16.923 + (0.185212 * t) + (5.37941 * rh)
    - (0.100254 * t * rh) + (0.00941695 * (t * t))
    + (0.00728898 * (rh * rh))
    + (0.000345372 * (t * t * rh))
    - (0.000814971 * (t * rh * rh))
    + (0.0000102102 * (t * t * rh * rh))
    - (0.000038646 * (t * t * t))
    + (0.0000291583 * (rh * rh * rh))
    + (0.00000142721 * (t * t * t * rh))
    + (0.000000197483 * (t * rh * rh * rh))
    - (0.0000000218429 * (t * t * t * rh * rh))
    + 0.000000000843296 * (t * t * rh * rh * rh))
    - (0.0000000000481975 * (t * t * t * rh * rh * rh)
      ));
  return index;
}

HeatIndexDisplay::HeatIndexDisplay(Subject* weatherData) :
  _weatherData(weatherData), _heatIndex(0.0)
{
  assert(weatherData);
  std::cout << "HeatIndexDisplay::HeatIndexDisplay" << std::endl;
  _weatherData->registerObserver(this);
}
HeatIndexDisplay::~HeatIndexDisplay()
{
  std::cout << "HeatIndexDisplay::~HeatIndexDisplay" << std::endl;
  _weatherData->removeObserver(this);
}
void HeatIndexDisplay::update(float t, float rh, float pressure)
{
  std::cout << "HeatIndexDisplay::update" << std::endl;
  _heatIndex = computeHeatIndex(t, rh);
  display();
}

void HeatIndexDisplay::display() const
{
  std::cout << "HeatIndexDisplay::display" << std::endl;
  std::cout.setf(std::ios::showpoint);
  std::cout.precision(7);
  std::cout << "Heat index is " << _heatIndex << std::endl;
}
