
//===--- Tuner.hpp - --------------------------------------------*- C++ -*-===//
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
#include "Tuner.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.



Tuner::Tuner( std::string description, Amplifier* amplifier ) :
  _description( description ), _amplifier( amplifier ), _frequency(0.0)
{
  assert( amplifier );
  std::cout << "Tuner::Tuner" << std::endl;
}
void Tuner::on()
{
  std::cout << "Tuner::on" << std::endl;
  std::cout << _description.c_str() << " on" << std::endl;
}
void Tuner::off()
{
  std::cout << "Tuner::off" << std::endl;
  std::cout << _description.c_str() << " off" << std::endl;
}
void Tuner::setFrequency( double frequency )
{
  std::cout << "Tuner::setFrequency" << std::endl;
  std::cout << _description.c_str() << " setting frequency to "
    << _frequency << std::endl;
  _frequency = frequency;
}
void Tuner::setAm()
{
  std::cout << "Tuner::setAm" << std::endl;
  std::cout << _description.c_str() << " setting AM mode" << std::endl;
}
void Tuner::setFm()
{
  std::cout << "Tuner::setFm" << std::endl;
  std::cout << _description.c_str() << " setting FM mode" << std::endl;
}
std::string Tuner::toString() const
{
  std::cout << "Tuner::toString" << std::endl;
  return _description;
}


