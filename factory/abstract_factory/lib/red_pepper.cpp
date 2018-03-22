//===--- red_pepper.cpp - ---------------------------------------*- C++ -*-===//
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
#include "red_pepper.hpp"
//C system files.
//C++ system files.
#include <string>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  std::string RedPepper::ToString() const
  {
    std::cout << "RedPepper::ToString" << std::endl;
    return ( "Red Pepper" );
  }
} //namespace headfirst
