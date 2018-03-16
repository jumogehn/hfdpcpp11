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
#include "tv.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


TV::TV( const std::string location ) :
  channel_( 0 ), location_( location )
{
  std::cout << "TV::TV" << std::endl;
}
void TV::TurnOn() const
{
  std::cout << "TV::on" << std::endl;
  std::cout << location_.c_str() << " TV is on" << std::endl;
}
void TV::TurnOff() const
{
  std::cout << "TV::off" << std::endl;
  std::cout << location_.c_str() << " TV is off" << std::endl;
}
void TV::SetInputChannel()
{
  std::cout << "TV::SetInputChannel" << std::endl;
  channel_ = 3;
  std::cout << location_.c_str() << " Channel is set for VCR"
    << std::endl;
}


