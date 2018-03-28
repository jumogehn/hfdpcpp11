//===--- menus.hpp - --------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_MENU_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_MENU_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
#include <string>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "menu_component.hpp"


namespace headfirst {

  class Menu : public MenuComponent {

    std::string name_;
    std::string description_;
    mutable std::vector< MenuComponent* > menu_components_;

  public:
    Menu( const std::string name, const std::string description );
    ~Menu();
    void Add( MenuComponent* menu_component );
    void Remove( MenuComponent* menu_component );
    MenuComponent* GetChild( int i ) const;
    std::string GetName() const;
    std::string GetDescription() const;
    void Print() const;
    //double GetPrice() const;   //API for MenuItem
    //bool IsVegetarian() const; //API for MenuItem
  };


} //namespace headfirst
#endif
