//===--- fresh_clams.cpp - --------------------------------------*- C++ -*-===//
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
#include "fresh_clams.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  std::string FreshClams::ToString() const
  {
    std::cout << "FreshClams::ToString" << std::endl;
    return "Fresh Clams from Long Island Sound";
  }
} //namespace headfirst
