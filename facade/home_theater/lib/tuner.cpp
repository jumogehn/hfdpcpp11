//===--- tuner.hpp - --------------------------------------------*- C++ -*-===//
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
#include "tuner.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.



Tuner::Tuner( std::string description, Amplifier* amplifier ) :
  description_( description ), amplifier_( amplifier ), frequency_(0.0)
{
  assert( amplifier );
  std::cout << "Tuner::Tuner" << std::endl;
}
void Tuner::TurnOn()
{
  std::cout << "Tuner::on" << std::endl;
  std::cout << description_.c_str() << " on" << std::endl;
}
void Tuner::TurnOff()
{
  std::cout << "Tuner::off" << std::endl;
  std::cout << description_.c_str() << " off" << std::endl;
}
void Tuner::SetFrequency( double frequency )
{
  std::cout << "Tuner::SetFrequency" << std::endl;
  std::cout << description_.c_str() << " setting frequency to "
    << frequency_ << std::endl;
  frequency_ = frequency;
}
void Tuner::SetAm()
{
  std::cout << "Tuner::setAm" << std::endl;
  std::cout << description_.c_str() << " setting AM mode" << std::endl;
}
void Tuner::SetFm()
{
  std::cout << "Tuner::setFm" << std::endl;
  std::cout << description_.c_str() << " setting FM mode" << std::endl;
}
std::string Tuner::ToString() const
{
  std::cout << "Tuner::ToString" << std::endl;
  return description_;
}


