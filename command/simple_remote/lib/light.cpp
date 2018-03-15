//===--- Light.cpp - --------------------------------------------*- C++ -*-===//
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
#include "light.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.



Light::Light()
{
  std::cout << "Light::Light" << std::endl;
}
void Light::on() const
{
  std::cout << "Light::on" << std::endl;
  std::cout << "Light is on" << std::endl;
}
void Light::off() const
{
  std::cout << "Light::off" << std::endl;
  std::cout << "Light is off" << std::endl;
}

