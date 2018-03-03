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
#include <memory>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "Iterator.hpp"
#include "MenuComponent.hpp"


class MenuIterator : public Iterator<MenuComponent > {

  mutable std::vector< std::shared_ptr<MenuComponent> > _items;
  mutable std::vector< std::shared_ptr<MenuComponent> >::iterator _iterator;

  MenuIterator( const MenuIterator& );
  void operator=( const MenuIterator& );

public:
  explicit MenuIterator( std::vector< std::shared_ptr<MenuComponent> > items );
  std::shared_ptr<MenuComponent> next() const;
  bool hasNext() const;
};


#endif
