//===--- theater_lights.hpp - -----------------------------------*- C++ -*-===//
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
#include "theater_lights.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


TheaterLights::TheaterLights( std::string description ) :
  description_( description )
{
  std::cout << "TheaterLights::TheaterLights" << std::endl;
}
void TheaterLights::TurnOn()
{
  std::cout << "TheaterLights::on" << std::endl;
  std::cout << description_.c_str() << " on" << std::endl;
}

void TheaterLights::TurnOff()
{
  std::cout << "TheaterLights::off" << std::endl;
  std::cout << description_.c_str() << " off" << std::endl;
}

void TheaterLights::Dim( int level )
{
  std::cout << "TheaterLights::dim" << std::endl;
  std::cout << description_.c_str() << " dimming to " << level
    << "%" << std::endl;
}

std::string TheaterLights::ToString()
{
  std::cout << "TheaterLights::ToString" << std::endl;
  return description_;
}


