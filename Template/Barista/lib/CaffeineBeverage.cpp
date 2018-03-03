//===--- CaffeineBeverage.cpp - ---------------------------------*- C++ -*-===//
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
#include "CaffeineBeverage.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


void CaffeineBeverage::boilWater() const
{
  std::cout << "CaffeineBeverage::boilWater" << std::endl;
  std::cout << "Boiling water" << std::endl;
}
void CaffeineBeverage::pourInCup() const
{
  std::cout << "CaffeineBeverage::pourInCup" << std::endl;
  std::cout << "Pouring into cup" << std::endl;
}
CaffeineBeverage::~CaffeineBeverage()
{
  std::cout << "CaffeineBeverage::~CaffeineBeverage" << std::endl;
}
void CaffeineBeverage::prepareRecipe() {
  std::cout << "CaffeineBeverage::prepareRecipe" << std::endl;
  boilWater();
  brew();
  pourInCup();
  addCondiments();
}


