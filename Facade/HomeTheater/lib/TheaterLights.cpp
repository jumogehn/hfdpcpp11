
//===--- TheaterLights.hpp - ------------------------------------*- C++ -*-===//
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
#include "TheaterLights.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


TheaterLights::TheaterLights( std::string description ) :
  _description( description )
{
  std::cout << "TheaterLights::TheaterLights" << std::endl;
}
void TheaterLights::on()
{
  std::cout << "TheaterLights::on" << std::endl;
  std::cout << _description.c_str() << " on" << std::endl;
}

void TheaterLights::off()
{
  std::cout << "TheaterLights::off" << std::endl;
  std::cout << _description.c_str() << " off" << std::endl;
}

void TheaterLights::dim( int level )
{
  std::cout << "TheaterLights::dim" << std::endl;
  std::cout << _description.c_str() << " dimming to " << level
    << "%" << std::endl;
}

std::string TheaterLights::toString()
{
  std::cout << "TheaterLights::toString" << std::endl;
  return _description;
}


