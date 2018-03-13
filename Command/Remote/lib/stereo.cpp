//===--- Stereo.cpp - -------------------------------------------*- C++ -*-===//
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
  _location( location )
{
  std::cout << "Stereo::Stereo" << std::endl;
}
void Stereo::on() const
{
  std::cout << "Stereo::on" << std::endl;
  std::cout << _location.c_str() << " stereo is on" << std::endl;
}
void Stereo::off() const
{
  std::cout << "Stereo::off" << std::endl;
  std::cout << _location.c_str() << " stereo is off" << std::endl;
}
void Stereo::setCD() const
{
  std::cout << "Stereo::setCD" << std::endl;
  std::cout << _location.c_str() << " stereo is set for CD input"
    << std::endl;
}
void Stereo::setDVD() const
{
  std::cout << "Stereo::setDVD" << std::endl;
  std::cout << _location.c_str() << " stereo is set for DVD input"
    << std::endl;
}
void Stereo::setRadio() const
{
  std::cout << "Stereo::setRadio" << std::endl;
  std::cout << _location.c_str() << " stereo is set for Radio"
    << std::endl;
}
void Stereo::setVolume(int volume) const
{
  assert(volume > 0 && volume < 12);
  std::cout << "Stereo::setVolume" << std::endl;
  // code to set the volume
  // valid range: 1-11 (after all 11 is better than 10, right?)
  std::cout << _location.c_str() << " Stereo volume set to "
    << volume << std::endl;
}


