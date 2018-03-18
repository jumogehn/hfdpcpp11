//===--- red_head_duck.cpp - ------------------------------------*- C++ -*-===//
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
#include "just_quack.hpp"


RedHead::RedHead() : Duck(new FlyWithWings(), new JustQuack())
{
  std::cout << "RedHead::RedHead" << std::endl;
}
void RedHead::Display() const
{
  std::cout << "RedHead::Display" << std::endl;
  std::cout << "I'm a real Red Headed duck" << std::endl;
}

