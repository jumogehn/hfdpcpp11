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
#include "MenuComponent.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "Menu.hpp"
#include "UnsupportedOperationException.hpp"



MenuComponent::MenuComponent()
{
  std::cout << "MenuComponent::" << std::endl;
}
MenuComponent::~MenuComponent()
{
  std::cout << "MenuComponent::~MenuComponent" << std::endl;
}
void MenuComponent::add( std::shared_ptr<MenuComponent> menuComponent )
{
  std::cout << "MenuComponent::add" << std::endl;
  throw std::make_shared<UnsupportedOperationException>();
}
void MenuComponent::remove( std::shared_ptr<MenuComponent> menuComponent )
{
  std::cout << "MenuComponent::remove" << std::endl;
  throw std::make_shared<UnsupportedOperationException>();
}
std::shared_ptr<MenuComponent> MenuComponent::getChild( int i ) const
{
  std::cout << "MenuComponent::getChild" << std::endl;
  throw std::make_shared<UnsupportedOperationException>();
}
std::string MenuComponent::getName() const
{
  std::cout << "MenuComponent::getName" << std::endl;
  throw std::make_shared<UnsupportedOperationException>();
}
std::string MenuComponent::getDescription() const
{
  std::cout << "MenuComponent::getDescription" << std::endl;
  throw std::make_shared<UnsupportedOperationException>();
}
double MenuComponent::getPrice() const
{
  std::cout << "MenuComponent::getPrice" << std::endl;
  throw std::make_shared<UnsupportedOperationException>();
}
bool MenuComponent::isVegetarian() const
{
  std::cout << "MenuComponent::isVegetarian" << std::endl;
  throw std::make_shared<UnsupportedOperationException>();
}
void MenuComponent::print() const
{
  std::cout << "MenuComponent::print" << std::endl;
  throw std::make_shared<UnsupportedOperationException>();
}


