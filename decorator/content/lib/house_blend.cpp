//===--- house_blend.hpp - --------------------------------------*- C++ -*-===//
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
#include "house_blend.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.



HouseBlend::HouseBlend()
{
  std::cout << "HouseBlend::HouseBlend" << std::endl;
  description_ = "House Blend Coffee";
}

double HouseBlend::Cost() const
{
  std::cout << "HouseBlend::cost" << std::endl;
  return 0.89;
}
