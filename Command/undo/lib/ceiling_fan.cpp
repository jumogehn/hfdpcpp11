//===--- CeilingFan.cpp - ---------------------------------------*- C++ -*-===//
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
#include "ceiling_fan.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


CeilingFan::CeilingFan( std::string location ) :
  _speed( OFF ), _location( location )
{
  std::cout << "CeilingFan::CeilingFan" << std::endl;
}
void CeilingFan::high() const
{
  std::cout << "CeilingFan::high" << std::endl;
  _speed = HIGH;
  std::cout << _location.c_str() << " ceiling fan is on high"
    << std::endl;
}
void CeilingFan::medium() const
{
  std::cout << "CeilingFan::medium" << std::endl;
  _speed = MEDIUM;
  std::cout << _location.c_str() << " ceiling fan is on medium"
    << std::endl;
}
void CeilingFan::low() const
{
  std::cout << "CeilingFan::low" << std::endl;
  _speed = LOW;
  std::cout << _location.c_str() << " ceiling fan is on low"
    << std::endl;
}
void CeilingFan::off() const
{
  std::cout << "CeilingFan::off" << std::endl;
  _speed = OFF;
  std::cout << _location.c_str() << " ceiling fan is off"
    << std::endl;
}
int CeilingFan::getSpeed() const
{
  std::cout << "CeilingFan::getSpeed" << std::endl;
  return _speed;
}


