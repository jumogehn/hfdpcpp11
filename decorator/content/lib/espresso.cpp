//===--- espresso.hpp - -----------------------------------------*- C++ -*-===//
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
#include "espresso.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  Espresso::Espresso()
  {
    std::cout << "Espresso::Espresso" << std::endl;
    description_ = "Espresso";
  }

  double Espresso::Cost() const
  {
    std::cout << "Espresso::cost" << std::endl;
    return 1.99;
  }
} //namespace headfirst
