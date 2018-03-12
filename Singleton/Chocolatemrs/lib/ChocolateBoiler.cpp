//===--- ChocolateBoiler.cpp - ----------------------------------*- C++ -*-===//
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
#include "ChocolateBoiler.hpp"
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
}

//http://preshing.com/20130930/double-checked-locking-is-fixed-in-cpp11/
//https://stackoverflow.com/questions/11711920/how-to-implement-multithread-safe-singleton-in-c11-without-using-mutex
//https://stackoverflow.com/questions/12302057/c11-safe-double-checked-locking-for-lazy-initialization-possible/12302355#12302355
//Game Programming Patterns, Robert Nystrom
//Compiler must support and enable the §6.7.4 of the C++11 standard
ChocolateBoiler* ChocolateBoiler::getInstance()
{
  static ChocolateBoiler* _uniqueInstance = new ChocolateBoiler();
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
