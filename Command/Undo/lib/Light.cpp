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
#include "Light.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


Light::Light( const std::string location ) :
  _location( location ), _level( 0 )
{
  std::cout << "Light::Light" << std::endl;
}
void Light::on() const
{
  std::cout << "Light::on" << std::endl;
  _level = 100;
  std::cout << _location.c_str() << " light is on" << std::endl;
}
void Light::off() const
{
  std::cout << "Light::off" << std::endl;
  _level = 0;
  std::cout << _location.c_str() << " light is off" << std::endl;
}
void Light::dim( int level ) const
{
  std::cout << "Light::dim" << std::endl;
  _level = level;
  if( _level == 0 ) {
    off();
  } else {
    std::cout << "Light is dimmed to " << _level << "%" << std::endl;
  }
}
int Light::getLevel() const
{
  std::cout << "Light::getLevel" << std::endl;
  return _level;
}

