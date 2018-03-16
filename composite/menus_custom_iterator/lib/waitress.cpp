//===--- waitress.cpp - -----------------------------------------*- C++ -*-===//
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
#include "waitress.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


Waitress::Waitress( const MenuComponent* allMenus ) :
  _allMenus( allMenus )
{
  assert( allMenus );
  std::cout << "Waitress::Waitress" << std::endl;
}

void Waitress::printMenu() const
{
  std::cout << "Waitress::printMenu" << std::endl;
  _allMenus->print();
}
