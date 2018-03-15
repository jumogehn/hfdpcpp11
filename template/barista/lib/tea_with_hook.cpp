//===--- TeaWithHook.cpp - --------------------------------------*- C++ -*-===//
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
#include "tea_with_hook.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.


std::string TeaWithHook::getUserInput() const
{
  std::cout << "TeaWithHook::getUserInput" << std::endl;
  std::string value;
  std::cout << "Would you like lemon with your tea (y/n)? " << std::endl;
  std::cin >> value;
  return value;
}
void TeaWithHook::brew() const
{
  std::cout << "TeaWithHook::brew" << std::endl;
  std::cout << "Steeping the tea" << std::endl;
}
void TeaWithHook::addCondiments() const
{
  std::cout << "TeaWithHook::addCondiments" << std::endl;
  std::cout << "Adding Lemon" << std::endl;
}
bool TeaWithHook::customerWantsCondiments()
{
  std::cout << "TeaWithHook::customerWantsCondiments" << std::endl;
  bool value = false;
  std::string answer = getUserInput();
  if( answer.find('y') != -1 ) {
    value = true;
  }
  return value;
}
