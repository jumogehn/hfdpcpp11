//===--- HouseBlend.hpp - ---------------------------------------*- C++ -*-===//
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
#include "HouseBlend.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.



HouseBlend::HouseBlend()
{
  std::cout << "HouseBlend::HouseBlend" << std::endl;
  _description = "House Blend Coffee";
}

double HouseBlend::cost() const
{
  std::cout << "HouseBlend::cost" << std::endl;
  return 0.89;
}