//===--- Starbuzz.cpp - -----------------------------------------*- C++ -*-===//
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
//Other libraries' .h files.
//Your project's .h files.
#include "Beverage.hpp"
#include "DarkRoast.hpp"
#include "Espresso.hpp"
#include "HouseBlend.hpp"
#include "Mocha.hpp"
#include "Soy.hpp"
#include "Whip.hpp"


int main(int argc, char* argv[]) {

  //Maybe type 'auto' can be used here
  std::shared_ptr<Beverage> beverage = std::make_shared<Espresso>();
  std::cout.setf(std::ios::showpoint);
  std::cout.precision(3);
  std::cout << beverage->getDescription()
    << " $"
    << beverage->cost()
    << std::endl;

  std::shared_ptr<Beverage> beverage2 = std::make_shared<DarkRoast>();
  beverage2 = std::make_shared<Mocha>(beverage2);
  beverage2 = std::make_shared<Mocha>(beverage2);
  beverage2 = std::make_shared<Whip>(beverage2);
  std::cout << beverage2->getDescription()
    << " $"
    << beverage2->cost()
    << std::endl;

  std::shared_ptr<Beverage> beverage3 = std::make_shared<HouseBlend>();
  beverage3 = std::make_shared<Soy>(beverage3);
  beverage3 = std::make_shared<Mocha>(beverage3);
  beverage3 = std::make_shared<Whip>(beverage3);
  std::cout << beverage3->getDescription()
    << " $"
    << beverage3->cost()
    << std::endl;

  return 0;
}

