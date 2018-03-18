//===--- barista.cpp - ------------------------------------------*- C++ -*-===//
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
//C system files.
//C++ system files.
#include <memory>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "coffee.hpp"
#include "coffee_with_hook.hpp"
#include "tea.hpp"
#include "tea_with_hook.hpp"


int main( int argc, char* argv[] ) {

  std::unique_ptr<Tea> tea( new Tea() );
  std::unique_ptr<Coffee> coffee( new Coffee() );

  std::cout << std::endl << "Making tea..." << std::endl;
  tea->PrepareRecipe();

  std::cout << std::endl << "Making coffee..." << std::endl;
  coffee->PrepareRecipe();

  std::unique_ptr<TeaWithHook> tea_hook( new TeaWithHook() );
  std::unique_ptr<CoffeeWithHook> coffee_hook( new CoffeeWithHook() );

  std::cout << std::endl << "Making tea..."<< std::endl;
  tea_hook->PrepareRecipe();

  std::cout << std::endl << "Making coffee..."<< std::endl;
  coffee_hook->PrepareRecipe();

  return 0;
}
