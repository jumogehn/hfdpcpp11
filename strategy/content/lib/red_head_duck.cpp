//===--- RedHeadDuck.cpp - --------------------------------------*- C++ -*-===//
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
#include "red_head_duck.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "duck.hpp"
#include "fly_with_wings.hpp"
#include "quack.hpp"


RedHead::RedHead() : Duck(new FlyWithWings(), new Quack())
{
  std::cout << "RedHead::RedHead" << std::endl;
}
void RedHead::display() const
{
  std::cout << "RedHead::display" << std::endl;
  std::cout << "I'm a real Red Headed duck" << std::endl;
}

