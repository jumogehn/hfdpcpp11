//===--- menu.cpp - ---------------------------------------------*- C++ -*-===//
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
#include "menu.hpp"
//C system files.
//C++ system files.
#include <algorithm>
#include <cassert>
#include <cstdio>
#include <iostream>
#include <memory>
#include <string>
#include <utility>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.
#include "menu_component.hpp"

namespace headfirst {


  Menu::Menu( const std::string name, const std::string description ) :
    name_( name ), description_( description )
  {
    std::cout << "Menu::Menu" << std::endl;
  }

  Menu::~Menu()
  {
  }

  void Menu::Add( std::unique_ptr<MenuComponent> menu_component )
  {
    assert( menu_component );
    std::cout << "Menu::add" << std::endl;
    menu_components_.push_back( std::move(menu_component) );
  }
  //These two APIs are ignored : trivial and worthless
#if 0
  void Menu::Remove( MenuComponent* menu_component )
  {
    assert( menu_component );
    std::cout << "Menu::remove" << std::endl;
    std::vector< MenuComponent* >::iterator pos;
    pos = find(menu_components_.begin(), menu_components_.end(),
               menu_component);
    if (pos != menu_components_.end()) {
      menu_components_.erase(pos);
    }
  }
  MenuComponent* Menu::GetChild( int i ) const
  {
    std::cout << "Menu::GetChild" << std::endl;
    return 0;//menu_components_[i];
  }
#endif
  std::string Menu::GetName() const
  {
    std::cout << "Menu::GetName" << std::endl;
    return name_;
  }
  std::string Menu::GetDescription() const
  {
    std::cout << "Menu::GetDescription" << std::endl;
    return description_;
  }
  void Menu::Print() const
  {
    std::cout << "Menu::print" << std::endl;
    std::cout << std::endl << GetName().c_str();
    std::cout << ", " << GetDescription().c_str() << std::endl;
    std::cout << "---------------------" << std::endl;

    for ( const std::unique_ptr<MenuComponent>& menu_component
          : menu_components_ ) {
      menu_component->Print();
    }
  }

} //namespace headfirst
