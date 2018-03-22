//===--- egg_plant.cpp - ----------------------------------------*- C++ -*-===//
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
#include "egg_plant.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {



  std::string Eggplant::ToString() const
  {
    std::cout << "Eggplant::ToString" << std::endl;
    return "Eggplant";
  }
} //namespace headfirst
