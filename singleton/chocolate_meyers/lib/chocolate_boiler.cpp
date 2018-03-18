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
  empty_ = true;
  boiled_ = false;
}
ChocolateBoiler::~ChocolateBoiler()
{
}

//http://preshing.com/20130930/double-checked-locking-is-fixed-in-cpp11/
//https://stackoverflow.com/questions/11711920/how-to-implement-multithread
//-safe-singleton-in-c11-without-using-mutex
//https://stackoverflow.com/questions/12302057/c11-safe-double-checked-locking
//-for-lazy-initialization-possible/12302355#12302355
//Game Programming Patterns, Robert Nystrom
//Compiler must support and enable the §6.7.4 of the C++11 standard
ChocolateBoiler* ChocolateBoiler::GetInstance()
{
  static ChocolateBoiler* unique_instance = new ChocolateBoiler();
  std::cout << "Returning instance of Chocolate Boiler"<< std::endl;
  return unique_instance;
}
void ChocolateBoiler::Fill()
{	// Fill the boiler with a milk/chocolate mixture
  if( IsEmpty() ) {
    empty_ = false;
    boiled_ = false;
  }
}
void ChocolateBoiler::Drain()
{	// Drain the boiled milk and chocolate
  if( !IsEmpty() && IsBoiled() ) {
    empty_ = true;
  }
}
void ChocolateBoiler::Boil()
{	// bring the contents to a boil
  if( !IsEmpty() && !IsBoiled() ) {
    boiled_ = true;
  }
}
bool ChocolateBoiler::IsEmpty() const
{
  return empty_;
}
bool ChocolateBoiler::IsBoiled() const
{
  return boiled_;
}
