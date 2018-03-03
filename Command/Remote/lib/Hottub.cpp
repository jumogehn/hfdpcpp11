//===--- Hottub.cpp - -------------------------------------------*- C++ -*-===//
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
#include "Hottub.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


Hottub::Hottub() :
  _on( false ), _temperature( 0 )
{
  std::cout << "Hottub::Hottub" << std::endl;
}
void Hottub::on() const
{
  std::cout << "Hottub::on" << std::endl;
  _on = true;
}
void Hottub::off() const
{
  std::cout << "Hottub::off" << std::endl;
  _on = false;
}
void Hottub::bubblesOn() const
{
  std::cout << "Hottub::bubblesOn" << std::endl;
  if( _on ) {
    std::cout << "Hottub is bubbling!" << std::endl;
  }
}
void Hottub::bubblesOff() const
{
  std::cout << "Hottub::bubblesOff" << std::endl;
  if( _on ) {
    std::cout << "Hottub is not bubbling" << std::endl;
  }
}
void Hottub::jetsOn() const
{
  std::cout << "Hottub::jetsOn" << std::endl;
  if( _on ) {
    std::cout << "Hottub jets are on" << std::endl;
  }
}
void Hottub::jetsOff() const
{
  std::cout << "Hottub::jetsOff" << std::endl;
  if( _on ) {
    std::cout << "Hottub jets are off" << std::endl;
  }
}
void Hottub::setTemperature( int temperature )
{
  std::cout << "Hottub::setTemperature" << std::endl;
  assert( temperature >= 0 );
  _temperature = temperature;
}
void Hottub::heat() const
{
  std::cout << "Hottub::heat" << std::endl;
  _temperature = 105;
  std::cout << "Hottub is heating to a steaming 105 degrees"
    << std::endl;
}
void Hottub::cool() const
{
  std::cout << "Hottub::cool" << std::endl;
  _temperature = 98;
  std::cout << "Hottub is cooling to 98 degrees" << std::endl;
}


