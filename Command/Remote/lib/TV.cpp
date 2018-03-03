//===--- TV.cpp - -----------------------------------------------*- C++ -*-===//
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
#include "TV.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


TV::TV( const std::string location ) :
  _channel( 0 ), _location( location )
{
  std::cout << "TV::TV" << std::endl;
}
void TV::on() const
{
  std::cout << "TV::on" << std::endl;
  std::cout << _location.c_str() << " TV is on" << std::endl;
}
void TV::off() const
{
  std::cout << "TV::off" << std::endl;
  std::cout << _location.c_str() << " TV is off" << std::endl;
}
void TV::setInputChannel()
{
  std::cout << "TV::setInputChannel" << std::endl;
  _channel = 3;
  std::cout << _location.c_str() << " Channel is set for VCR"
    << std::endl;
}


