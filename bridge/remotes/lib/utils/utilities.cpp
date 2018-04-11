//===--- Utilities.cpp - ----------------------------------------*- C++ -*-===//
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

//http://chadaustin.me/cppinterface.html

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
#include "utilities.hpp"
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include <iostream>
#include <cassert>

namespace headfirst {

  void CALL PrintMessage(const char * pMessage, bool newline)
  {
    assert(pMessage);
    if (newline)
      std::cout << pMessage << std::endl;
    else
      std::cout << pMessage;
  }

  void CALL PrintNumber(unsigned int num, bool newline)
  {
    if (newline)
      std::cout << num << std::endl;
    else
      std::cout << num;
  }

} //namespace headfirst
