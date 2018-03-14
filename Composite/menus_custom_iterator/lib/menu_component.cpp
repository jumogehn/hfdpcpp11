//===--- MenuComponent.cpp - ------------------------------------*- C++ -*-===//
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


void MenuComponent::add( MenuComponent* menuComponent )
{
  std::cout << "MenuComponent::add" << std::endl;
  throw new UnsupportedOperationException();
}
void MenuComponent::remove( MenuComponent* menuComponent )
{
  std::cout << "MenuComponent::remove" << std::endl;
  throw new UnsupportedOperationException();
}
MenuComponent* MenuComponent::getChild( int i ) const
{
  std::cout << "MenuComponent::getChild" << std::endl;
  throw new UnsupportedOperationException();
}
std::string MenuComponent::getName() const
{
  std::cout << "MenuComponent::getName" << std::endl;
  throw new UnsupportedOperationException();
}
std::string MenuComponent::getDescription() const
{
  std::cout << "MenuComponent::getDescription" << std::endl;
  throw new UnsupportedOperationException();
}
double MenuComponent::getPrice() const
{
  std::cout << "MenuComponent::getPrice" << std::endl;
  throw new UnsupportedOperationException();
}
bool MenuComponent::isVegetarian() const
{
  std::cout << "MenuComponent::isVegetarian" << std::endl;
  throw new UnsupportedOperationException();
}
void MenuComponent::print() const
{
  std::cout << "MenuComponent::print" << std::endl;
  throw new UnsupportedOperationException();
}
