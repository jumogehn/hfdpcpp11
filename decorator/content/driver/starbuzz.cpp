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
#include <memory>
#include <utility>
//Other libraries' .h files.
//For Visual Leak Detector
//#include "vld.h"
//https://github.com/KindDragon/vld
//https://kinddragon.github.io/vld/
//http://zzoyu.tistory.com/52
//No memory leaks detected. 2018.4.8
//Your project's .h files.
#include "beverage.hpp"
#include "dark_roast.hpp"
#include "espresso.hpp"
#include "house_blend.hpp"
#include "mocha.hpp"
#include "soy.hpp"
#include "whip.hpp"


int main(int argc, char* argv[]) {

  std::unique_ptr<headfirst::Beverage> beverage (new headfirst::Espresso());
  std::cout.setf(std::ios::showpoint);
  std::cout.precision(3);
  std::cout << beverage->GetDescription()
    << " $"
    << beverage->Cost()
    << std::endl;

  std::unique_ptr<headfirst::Beverage> beverage2 (new headfirst::DarkRoast());
  beverage2.reset(new headfirst::Mocha(std::move(beverage2)));
  beverage2.reset(new headfirst::Mocha(std::move(beverage2)));
  beverage2.reset(new headfirst::Whip(std::move(beverage2)));
  std::cout << beverage2->GetDescription()
    << " $"
    << beverage2->Cost()
    << std::endl;

  std::unique_ptr<headfirst::Beverage> beverage3 (new headfirst::HouseBlend());
  beverage3.reset(new headfirst::Soy(std::move(beverage3)));
  beverage3.reset(new headfirst::Mocha(std::move(beverage3)));
  beverage3.reset(new headfirst::Whip(std::move(beverage3)));
  std::cout << beverage3->GetDescription()
    << " $"
    << beverage3->Cost()
    << std::endl;

  return 0;
}

