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
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "unsupported_operation_exception.hpp"


MenuComponent::MenuComponent()
{
  std::cout << "MenuComponent::" << std::endl;
}
MenuComponent::~MenuComponent()
{
  std::cout << "MenuComponent::~MenuComponent" << std::endl;
}


void MenuComponent::Add( MenuComponent* menu_component )
{
  std::cout << "MenuComponent::add" << std::endl;
  throw new UnsupportedOperationException();
}
void MenuComponent::Remove( MenuComponent* menu_component )
{
  std::cout << "MenuComponent::remove" << std::endl;
  throw new UnsupportedOperationException();
}
MenuComponent* MenuComponent::GetChild( int i ) const
{
  std::cout << "MenuComponent::GetChild" << std::endl;
  throw new UnsupportedOperationException();
}
std::string MenuComponent::GetName() const
{
  std::cout << "MenuComponent::GetName" << std::endl;
  throw new UnsupportedOperationException();
}
std::string MenuComponent::GetDescription() const
{
  std::cout << "MenuComponent::GetDescription" << std::endl;
  throw new UnsupportedOperationException();
}
double MenuComponent::GetPrice() const
{
  std::cout << "MenuComponent::GetPrice" << std::endl;
  throw new UnsupportedOperationException();
}
bool MenuComponent::IsVegetarian() const
{
  std::cout << "MenuComponent::IsVegetarian" << std::endl;
  throw new UnsupportedOperationException();
}
void MenuComponent::Print() const
{
  std::cout << "MenuComponent::print" << std::endl;
  throw new UnsupportedOperationException();
}
