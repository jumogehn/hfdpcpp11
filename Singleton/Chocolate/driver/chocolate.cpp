//===--- chocolate.cpp - ----------------------------------------*- C++ -*-===//
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
#include <cstddef>
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "ChocolateBoiler.hpp"


std::shared_ptr<ChocolateBoiler> ChocolateBoiler::_uniqueInstance = nullptr;

int main( int argc, char* argv[] ) {

  std::shared_ptr<ChocolateBoiler> boiler = ChocolateBoiler::getInstance();
  boiler->fill();
  boiler->boil();
  boiler->drain();

  // will return the existing instance
  std::shared_ptr<ChocolateBoiler> boiler2 = ChocolateBoiler::getInstance();

  if( boiler == boiler2 )
    std::cout << "Got same boiler" << std::endl;
  else
    std::cout << "Oh oh! got a different boiler" << std::endl;

  return 0;
}
