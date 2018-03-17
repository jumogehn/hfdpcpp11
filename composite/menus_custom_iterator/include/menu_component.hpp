//===--- menu_component.hpp - -----------------------------------*- C++ -*-===//
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
#include <string>
//Other libraries' .h files.
//Your project's .h files.


class MenuComponent {

  MenuComponent( const MenuComponent& ); // Disable copy constructor
  void operator=( const MenuComponent& ); // Disable assignment operator

public:
  MenuComponent();
  virtual ~MenuComponent();

  virtual void Add( MenuComponent* menu_component );
  virtual void Remove( MenuComponent* menu_component );
  virtual MenuComponent* GetChild( int i ) const;
  virtual std::string GetName() const;
  virtual std::string GetDescription() const;
  virtual double GetPrice() const;
  virtual bool IsVegetarian() const;
  virtual void Print() const;
};


#endif
