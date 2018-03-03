//===--- MenuItem.hpp - -----------------------------------------*- C++ -*-===//
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
#include "MenuComponent.hpp"


class MenuItem : public MenuComponent {

  std::string _name;
  std::string _description;
  bool _vegetarian;
  double _price;

public:
  MenuItem( const std::string name, const std::string description,
            bool vegetarian, double price );
  std::string getName() const;
  std::string getDescription() const;
  double getPrice() const;
  bool isVegetarian() const;
  void print() const;
};


#endif
