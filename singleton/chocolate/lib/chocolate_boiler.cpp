//===--- chocolate_boiler.cpp - ---------------------------------*- C++ -*-===//
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
#include "chocolate_boiler.hpp"
//C system files.
//C++ system files.
#include <cstddef>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


ChocolateBoiler::ChocolateBoiler()
{
  _empty = true;
  _boiled = false;
}
ChocolateBoiler::~ChocolateBoiler()
{
  _uniqueInstance = nullptr;
}

ChocolateBoiler* ChocolateBoiler::getInstance()
{
  if( _uniqueInstance == nullptr ) {
    std::cout
      << "Creating unique instance of Chocolate Boiler" << std::endl;
    _uniqueInstance = new ChocolateBoiler();
  }
  std::cout << "Returning instance of Chocolate Boiler"<< std::endl;
  return _uniqueInstance;
}
void ChocolateBoiler::fill()
{	// fill the boiler with a milk/chocolate mixture
  if( isEmpty() ) {
    _empty = false;
    _boiled = false;
  }
}
void ChocolateBoiler::drain()
{	// drain the boiled milk and chocolate
  if( !isEmpty() && isBoiled() ) {
    _empty = true;
  }
}
void ChocolateBoiler::boil()
{	// bring the contents to a boil
  if( !isEmpty() && !isBoiled() ) {
    _boiled = true;
  }
}
bool ChocolateBoiler::isEmpty() const
{
  return _empty;
}
bool ChocolateBoiler::isBoiled() const
{
  return _boiled;
}
