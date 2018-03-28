//===--- menu_component.cpp - -----------------------------------*- C++ -*-===//
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
#include "menu_component.hpp"
//C system files.
//C++ system files.
#include <cassert>
#include <iostream>
#include <memory>
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "menu.hpp"

namespace headfirst {

  MenuComponent::MenuComponent()
  {
    std::cout << "MenuComponent::" << std::endl;
  }
  MenuComponent::~MenuComponent()
  {
    std::cout << "MenuComponent::~MenuComponent" << std::endl;
  }

  //Menu only
  void MenuComponent::Add( std::unique_ptr<MenuComponent> menu_component )
  {
    assert(false);
  }
  //Menu only
  void MenuComponent::Remove( MenuComponent* menu_component )
  {
    assert(false);
  }
  //Menu only
  MenuComponent* MenuComponent::GetChild( int i ) const
  {
    assert(false);
    return nullptr;
  }
  //std::string MenuComponent::GetName() const
  //std::string MenuComponent::GetDescription() const
  //MenuItem only
  double MenuComponent::GetPrice() const
  {
    assert(false);
    return 0;
  }
  //MenuItem only
  bool MenuComponent::IsVegetarian() const
  {
    assert(false);
    return false;
  }
  //void MenuComponent::Print() const

} //namespace headfirst
