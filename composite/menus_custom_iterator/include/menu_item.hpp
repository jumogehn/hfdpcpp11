//===--- menu_item.hpp - ----------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_ITEM_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_ITEM_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "menu_component.hpp"


class MenuItem : public MenuComponent {

  std::string name_;
  std::string description_;
  bool vegetarian_;
  double price_;

public:
  MenuItem( const std::string name, const std::string description,
            bool vegetarian, double price );
  std::string GetName() const;
  std::string GetDescription() const;
  double GetPrice() const;
  bool IsVegetarian() const;
  void Print() const;
};


#endif
