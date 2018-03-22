//===--- starbuzz.cpp - -----------------------------------------*- C++ -*-===//
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
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "beverage.hpp"
#include "dark_roast.hpp"
#include "espresso.hpp"
#include "house_blend.hpp"
#include "mocha.hpp"
#include "soy.hpp"
#include "whip.hpp"


int main(int argc, char* argv[]) {

  headfirst::Beverage* beverage = new headfirst::Espresso();
  std::cout.setf(std::ios::showpoint);
  std::cout.precision(3);
  std::cout << beverage->GetDescription()
    << " $"
    << beverage->Cost()
    << std::endl;

  headfirst::Beverage* beverage2 = new headfirst::DarkRoast();
  beverage2 = new headfirst::Mocha(beverage2);
  beverage2 = new headfirst::Mocha(beverage2);
  beverage2 = new headfirst::Whip(beverage2);
  std::cout << beverage2->GetDescription()
    << " $"
    << beverage2->Cost()
    << std::endl;

  headfirst::Beverage* beverage3 = new headfirst::HouseBlend();
  beverage3 = new headfirst::Soy(beverage3);
  beverage3 = new headfirst::Mocha(beverage3);
  beverage3 = new headfirst::Whip(beverage3);
  std::cout << beverage3->GetDescription()
    << " $"
    << beverage3->Cost()
    << std::endl;

  delete beverage3;
  delete beverage2;
  delete beverage;

  return 0;
}

