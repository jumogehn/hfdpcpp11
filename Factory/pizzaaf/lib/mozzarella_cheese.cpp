//===--- MozzarellaCheese.cpp - ---------------------------------*- C++ -*-===//
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
#include "mozzarella_cheese.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


std::string MozzarellaCheese::toString() const
{
  std::cout << "MozzarellaCheese::toString" << std::endl;
  return "Shredded Mozzarella";
}
