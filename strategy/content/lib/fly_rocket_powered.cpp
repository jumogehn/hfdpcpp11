//===--- fly_rocket_powered.cpp - -------------------------------*- C++ -*-===//
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
#include "fly_rocket_powered.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  void FlyRocketPowered::Fly() const
  {
    std::cout << "FlyRocketPowered::fly" << std::endl;
    std::cout << "I'm flying with a rocket" << std::endl;
  }

} //namespace headfirst
