//===--- caffeine_beverage.cpp - --------------------------------*- C++ -*-===//
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
#include "caffeine_beverage.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  void CaffeineBeverage::BoilWater() const
  {
    std::cout << "CaffeineBeverage::BoilWater" << std::endl;
    std::cout << "Boiling water" << std::endl;
  }
  void CaffeineBeverage::PourInCup() const
  {
    std::cout << "CaffeineBeverage::PourInCup" << std::endl;
    std::cout << "Pouring into cup" << std::endl;
  }
  CaffeineBeverage::~CaffeineBeverage()
  {
    std::cout << "CaffeineBeverage::~CaffeineBeverage" << std::endl;
  }
  void CaffeineBeverage::PrepareRecipe() {
    std::cout << "CaffeineBeverage::PrepareRecipe" << std::endl;
    BoilWater();
    Brew();
    PourInCup();
    AddCondiments();
  }


} //namespace headfirst
