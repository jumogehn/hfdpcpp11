//===--- menu_iterator.cpp - ------------------------------------*- C++ -*-===//
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
#include "menu_iterator.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


MenuIterator::MenuIterator( std::vector< MenuComponent* > items ) :
  items_( items )
{
  std::cout << "MenuIterator::"
                     "MenuIterator" << std::endl;
  iterator_ = items_.begin();
}
 MenuComponent* MenuIterator::Next() const
{
  std::cout << "MenuIterator::next" << std::endl;
  MenuComponent* result = *iterator_++;
  return result;
}
bool MenuIterator::HasNext() const
{
  std::cout << "MenuIterator::HasNext" << std::endl;

  if( iterator_ != items_.end() ) {
    return true;
  }
  return false;
}
