//===--- coffee_with_hook.cpp - ---------------------------------*- C++ -*-===//
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
#include "coffee_with_hook.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


std::string CoffeeWithHook::GetUserInput() const
{
  std::cout << "CoffeeWithHook::GetUserInput" << std::endl;
  std::string value;
  std::cout << "Would you like milk and sugar with your coffee (y/n)? "
    << std::endl;
  std::cin >> value;
  return value;
}

void CoffeeWithHook::Brew() const
{
  std::cout << "CoffeeWithHook::brew" << std::endl;
  std::cout << "Dripping Coffee through filter" << std::endl;
}
void CoffeeWithHook::AddCondiments() const
{
  std::cout << "CoffeeWithHook::AddCondiments" << std::endl;
  std::cout << "Adding Sugar and Milk" << std::endl;
}

bool CoffeeWithHook::CustomerWantsCondiments()
{
  std::cout << "CoffeeWithHook::CustomerWantsCondiments" << std::endl;
  bool value = false;
  std::string answer = GetUserInput();
  if( answer.find('y') != -1 ) {
    value = true;
  }
  return value;
}
