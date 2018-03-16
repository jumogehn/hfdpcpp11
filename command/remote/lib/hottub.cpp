//===--- hottub.cpp - -------------------------------------------*- C++ -*-===//
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
#include "hottub.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


Hottub::Hottub() :
  on_( false ), temperature_( 0 )
{
  std::cout << "Hottub::Hottub" << std::endl;
}
void Hottub::TurnOn() const
{
  std::cout << "Hottub::on" << std::endl;
  on_ = true;
}
void Hottub::TurnOff() const
{
  std::cout << "Hottub::off" << std::endl;
  on_ = false;
}
void Hottub::BubblesOn() const
{
  std::cout << "Hottub::bubblesOn" << std::endl;
  if( on_ ) {
    std::cout << "Hottub is bubbling!" << std::endl;
  }
}
void Hottub::BubblesOff() const
{
  std::cout << "Hottub::bubblesOff" << std::endl;
  if( on_ ) {
    std::cout << "Hottub is not bubbling" << std::endl;
  }
}
void Hottub::JetsOn() const
{
  std::cout << "Hottub::jetsOn" << std::endl;
  if( on_ ) {
    std::cout << "Hottub jets are on" << std::endl;
  }
}
void Hottub::JetsOff() const
{
  std::cout << "Hottub::jetsOff" << std::endl;
  if( on_ ) {
    std::cout << "Hottub jets are off" << std::endl;
  }
}
void Hottub::SetTemperature( int temperature )
{
  std::cout << "Hottub::setTemperature" << std::endl;
  assert( temperature >= 0 );
  temperature_ = temperature;
}
void Hottub::Heat() const
{
  std::cout << "Hottub::heat" << std::endl;
  temperature_ = 105;
  std::cout << "Hottub is heating to a steaming 105 degrees"
    << std::endl;
}
void Hottub::Cool() const
{
  std::cout << "Hottub::cool" << std::endl;
  temperature_ = 98;
  std::cout << "Hottub is cooling to 98 degrees" << std::endl;
}


