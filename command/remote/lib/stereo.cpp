//===--- stereo.cpp - -------------------------------------------*- C++ -*-===//
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
#include "stereo.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


Stereo::Stereo( std::string location ) :
  location_( location )
{
  std::cout << "Stereo::Stereo" << std::endl;
}
void Stereo::TurnOn() const
{
  std::cout << "Stereo::on" << std::endl;
  std::cout << location_.c_str() << " stereo is on" << std::endl;
}
void Stereo::TurnOff() const
{
  std::cout << "Stereo::off" << std::endl;
  std::cout << location_.c_str() << " stereo is off" << std::endl;
}
void Stereo::SetCd() const
{
  std::cout << "Stereo::setCD" << std::endl;
  std::cout << location_.c_str() << " stereo is set for CD input"
    << std::endl;
}
void Stereo::SetDvd() const
{
  std::cout << "Stereo::SetDvd" << std::endl;
  std::cout << location_.c_str() << " stereo is set for DVD input"
    << std::endl;
}
void Stereo::SetRadio() const
{
  std::cout << "Stereo::SetRadio" << std::endl;
  std::cout << location_.c_str() << " stereo is set for Radio"
    << std::endl;
}
void Stereo::SetVolume(int volume) const
{
  assert(volume > 0 && volume < 12);
  std::cout << "Stereo::SetVolume" << std::endl;
  // code to set the volume
  // valid range: 1-11 (after all 11 is better than 10, right?)
  std::cout << location_.c_str() << " Stereo volume set to "
    << volume << std::endl;
}


