//===--- DecoyDuck.cpp - ----------------------------------------*- C++ -*-===//
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
#include "DecoyDuck.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "Duck.hpp"
#include "FlyNoWay.hpp"
#include "MuteQuack.hpp"


  DecoyDuck::DecoyDuck()
: Duck(new FlyNoWay(), new MuteQuack())
{
  std::cout << "DecoyDuck::DecoyDuck" << std::endl;
}
void DecoyDuck::display() const
{
  std::cout << "DecoyDuck::display" << std::endl;
  std::cout << "I'm a duck Decoy" << std::endl;
}
