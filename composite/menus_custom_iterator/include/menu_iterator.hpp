//===--- MenuIterator.hpp - -------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_CUSTOM_ITERATOR_MENU_ITERATOR_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_CUSTOM_ITERATOR_MENU_ITERATOR_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "iterator.hpp"
#include "menu_component.hpp"


class MenuIterator : public Iterator<MenuComponent > {

  mutable std::vector< MenuComponent* > _items;
  mutable std::vector< MenuComponent* >::iterator _iterator;

  MenuIterator( const MenuIterator& );
  void operator=( const MenuIterator& );

public:
  explicit MenuIterator( std::vector< MenuComponent* > items );
  MenuComponent* next() const;
  bool hasNext() const;
};


#endif