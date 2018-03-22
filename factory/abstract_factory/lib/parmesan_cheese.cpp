//===--- parmesan_cheese.cpp - ----------------------------------*- C++ -*-===//
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
#include "parmesan_cheese.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  std::string ParmesanCheese::ToString() const
  {
    std::cout << "ParmesanCheese::ToString" << std::endl;
    return "Shredded Parmesan";
  }
} //namespace headfirst
