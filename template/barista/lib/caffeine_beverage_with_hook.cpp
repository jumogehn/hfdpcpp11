//===--- caffeine_beverage_with_hook.cpp - ----------------------*- C++ -*-===//
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
#include "caffeine_beverage_with_hook.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  void CaffeineBeverageWithHook::BoilWater() const
  {
    std::cout << "CaffeineBeverageWithHook::BoilWater" << std::endl;
    std::cout << "Boiling water" << std::endl;
  }
  void CaffeineBeverageWithHook::PourInCup() const
  {
    std::cout << "CaffeineBeverageWithHook::PourInCup" << std::endl;
    std::cout << "Pouring into cup" << std::endl;
  }
  bool CaffeineBeverageWithHook::CustomerWantsCondiments()
  {
    std::cout << "CaffeineBeverageWithHook::"
      "CustomerWantsCondiments" << std::endl;
    return true;
  }
  CaffeineBeverageWithHook::~CaffeineBeverageWithHook()
  {
    std::cout << "CaffeineBeverageWithHook::"
      "~CaffeineBeverageWithHook" << std::endl;
  }
  void CaffeineBeverageWithHook::PrepareRecipe()
  {
    std::cout << "CaffeineBeverageWithHook::PrepareRecipe" << std::endl;
    BoilWater();
    Brew();
    PourInCup();
    if( CustomerWantsCondiments() ) {
      AddCondiments();
    }
  }
} //namespace headfirst
