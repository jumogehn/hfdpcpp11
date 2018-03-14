//===--- CaffeineBeverageWithHook.cpp - -------------------------*- C++ -*-===//
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


void CaffeineBeverageWithHook::boilWater() const
{
  std::cout << "CaffeineBeverageWithHook::boilWater" << std::endl;
  std::cout << "Boiling water" << std::endl;
}
void CaffeineBeverageWithHook::pourInCup() const
{
  std::cout << "CaffeineBeverageWithHook::pourInCup" << std::endl;
  std::cout << "Pouring into cup" << std::endl;
}
bool CaffeineBeverageWithHook::customerWantsCondiments()
{
  std::cout << "CaffeineBeverageWithHook::"
                     "customerWantsCondiments" << std::endl;
  return true;
}
CaffeineBeverageWithHook::~CaffeineBeverageWithHook()
{
  std::cout << "CaffeineBeverageWithHook::"
                     "~CaffeineBeverageWithHook" << std::endl;
}
void CaffeineBeverageWithHook::prepareRecipe()
{
  std::cout << "CaffeineBeverageWithHook::prepareRecipe" << std::endl;
  boilWater();
  brew();
  pourInCup();
  if( customerWantsCondiments() ) {
    addCondiments();
  }
}
