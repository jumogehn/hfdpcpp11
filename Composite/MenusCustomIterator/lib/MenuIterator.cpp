//===--- MenuIterator.cpp - -------------------------------------*- C++ -*-===//
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
#include "MenuIterator.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.


MenuIterator::MenuIterator( std::vector< std::shared_ptr<MenuComponent> > items ) :
  _items( items )
{
  std::cout << "MenuIterator::"
                     "MenuIterator" << std::endl;
  _iterator = _items.begin();
}
 std::shared_ptr<MenuComponent> MenuIterator::next() const
{
  std::cout << "MenuIterator::next" << std::endl;
  std::shared_ptr<MenuComponent> result = *_iterator++;
  return result;
}
bool MenuIterator::hasNext() const
{
  std::cout << "MenuIterator::hasNext" << std::endl;

  if( _iterator != _items.end() ) {
    return true;
  }
  return false;
}
