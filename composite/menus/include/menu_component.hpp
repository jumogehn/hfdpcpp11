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
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "menu_component.hpp"

namespace headfirst {


  class MenuComponent {
    // Disable copy constructor and assignment operator
    MenuComponent( const MenuComponent& ) = delete;
    void operator=( const MenuComponent& ) = delete;

  public:
    MenuComponent();
    virtual ~MenuComponent();
    //Menu only
    virtual void Add( std::unique_ptr<MenuComponent> menu_component );
    //These two APIs are ignored : trivial and worthless
    //virtual void Remove( MenuComponent* menu_component );//Menu only
    //virtual MenuComponent* GetChild( int i ) const;      //Menu only
    virtual std::string GetName() const = 0;
    virtual std::string GetDescription() const = 0;
    virtual double GetPrice() const;                     //MenuItem only
    virtual bool IsVegetarian() const;                   //MenuItem only
    virtual void Print() const = 0;
  };


} //namespace headfirst
#endif
