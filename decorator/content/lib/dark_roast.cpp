//===--- dark_roast.hpp - ---------------------------------------*- C++ -*-===//
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
#include "dark_roast.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  DarkRoast::DarkRoast()
  {
    std::cout << "DarkRoast::DarkRoast" << std::endl;
    description_ = "Dark Roast Coffee";
  }

  double DarkRoast::Cost() const
  {
    std::cout << "DarkRoast::cost" << std::endl;
    return 0.99;
  }
} //namespace headfirst
