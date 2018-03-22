//===--- reggiano_cheese.cpp - ----------------------------------*- C++ -*-===//
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
#include "reggiano_cheese.hpp"
//C system files.
//C++ system files.
#include <string>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  std::string ReggianoCheese::ToString() const
  {
    std::cout << "ReggianoCheese::ToString" << std::endl;
    return "Reggiano Cheese";
  }
} //namespace headfirst
