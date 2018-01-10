//===--- PlumTomatoSauce.cpp - ----------------------------------*- C++ -*-===//
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
#include "PlumTomatoSauce.hpp"
//C system files.
//C++ system files.
#include <string>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


std::string PlumTomatoSauce::toString() const
{
  std::cout << "PlumTomatoSauce::toString" << std::endl;
  return "Tomato sauce with plum tomatoes";
}
