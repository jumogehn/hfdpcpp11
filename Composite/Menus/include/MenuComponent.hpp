//===--- MenuComponent.hpp - ------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_COMPONENT_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_COMPONENT_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "MenuComponent.hpp"


class MenuComponent {

  MenuComponent( const MenuComponent& ); // Disable copy constructor
  void operator=( const MenuComponent& ); // Disable assignment operator

public:
  MenuComponent();
  virtual ~MenuComponent();
  virtual void add( MenuComponent* menuComponent );
  virtual void remove( MenuComponent* menuComponent );
  virtual MenuComponent* getChild( int i ) const;
  virtual std::string getName() const;
  virtual std::string getDescription() const;
  virtual double getPrice() const;
  virtual bool isVegetarian() const;
  virtual void print() const;
};


#endif
