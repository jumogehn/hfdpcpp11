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

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

void PrintMessage(const char * pMessage, bool newline = true)
{
  assert(pMessage);
  if (newline)
    std::cout << pMessage << std::endl;
  else
    std::cout << pMessage;
}

void PrintMessage(unsigned int num, bool newline = true)
{
  if (newline)
    std::cout << num << std::endl;
  else
    std::cout << num;
}

