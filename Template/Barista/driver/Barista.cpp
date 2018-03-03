//===--- Barista.cpp - ------------------------------------------*- C++ -*-===//
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
#include "Coffee.hpp"
#include "CoffeeWithHook.hpp"
#include "Tea.hpp"
#include "TeaWithHook.hpp"


int main( int argc, char* argv[] ) {

  std::shared_ptr< Tea > tea( std::make_shared<Tea>() );
  std::shared_ptr< Coffee > coffee( std::make_shared<Coffee>() );

  std::cout << std::endl << "Making tea..." << std::endl;
  tea->prepareRecipe();

  std::cout << std::endl << "Making coffee..." << std::endl;
  coffee->prepareRecipe();

  std::shared_ptr< TeaWithHook > teaHook( std::make_shared<TeaWithHook>() );
  std::shared_ptr< CoffeeWithHook > coffeeHook( std::make_shared<CoffeeWithHook>() );

  std::cout << std::endl << "Making tea..."<< std::endl;
  teaHook->prepareRecipe();

  std::cout << std::endl << "Making coffee..."<< std::endl;
  coffeeHook->prepareRecipe();

  return 0;
}
