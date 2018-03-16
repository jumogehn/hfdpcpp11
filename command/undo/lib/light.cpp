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
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


Light::Light( const std::string location ) :
  location_( location ), level_( 0 )
{
  std::cout << "Light::Light" << std::endl;
}
void Light::TurnOn() const
{
  std::cout << "Light::on" << std::endl;
  level_ = 100;
  std::cout << location_.c_str() << " light is on" << std::endl;
}
void Light::TurnOff() const
{
  std::cout << "Light::off" << std::endl;
  level_ = 0;
  std::cout << location_.c_str() << " light is off" << std::endl;
}
void Light::Dim( int level ) const
{
  std::cout << "Light::dim" << std::endl;
  level_ = level;
  if( level_ == 0 ) {
    TurnOff();
  } else {
    std::cout << "Light is dimmed to " << level_ << "%" << std::endl;
  }
}
int Light::GetLevel() const
{
  std::cout << "Light::GetLevel" << std::endl;
  return level_;
}

