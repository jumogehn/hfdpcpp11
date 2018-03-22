//===--- tea_with_hook.cpp - ------------------------------------*- C++ -*-===//
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

namespace headfirst {


  std::string TeaWithHook::GetUserInput() const
  {
    std::cout << "TeaWithHook::GetUserInput" << std::endl;
    std::string value;
    std::cout << "Would you like lemon with your tea (y/n)? " << std::endl;
    std::cin >> value;
    return value;
  }
  void TeaWithHook::Brew() const
  {
    std::cout << "TeaWithHook::brew" << std::endl;
    std::cout << "Steeping the tea" << std::endl;
  }
  void TeaWithHook::AddCondiments() const
  {
    std::cout << "TeaWithHook::AddCondiments" << std::endl;
    std::cout << "Adding Lemon" << std::endl;
  }
  bool TeaWithHook::CustomerWantsCondiments()
  {
    std::cout << "TeaWithHook::CustomerWantsCondiments" << std::endl;
    bool value = false;
    std::string answer = GetUserInput();
    if( answer.find('y') != -1 ) {
      value = true;
    }
    return value;
  }
} //namespace headfirst
