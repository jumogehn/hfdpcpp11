//===--- screen.hpp - -------------------------------------------*- C++ -*-===//
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
#include "screen.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {



  Screen::Screen( std::string description ) :
    description_( description )
  {
    std::cout << "Screen::Screen" << std::endl;
  }
  void Screen::CloseUp()
  {
    std::cout << "Screen::up" << std::endl;
    std::cout << description_.c_str() << " going up" << std::endl;
  }
  void Screen::Down()
  {
    std::cout << "Screen::down" << std::endl;
    std::cout << description_.c_str() << " going down" << std::endl;
  }
  std::string Screen::ToString()
  {
    std::cout << "Screen::ToString" << std::endl;
    return description_;
  }


} //namespace headfirst
