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
//Other libraries' .h files.
//Your project's .h files.
#include "chocolate_boiler.hpp"


int main( int argc, char* argv[] ) {

  headfirst::ChocolateBoiler*
    boiler = headfirst::ChocolateBoiler::GetInstance();
  boiler->Fill();
  boiler->Boil();
  boiler->Drain();

  // will return the existing instance
  headfirst::ChocolateBoiler*
    boiler2 = headfirst::ChocolateBoiler::GetInstance();

  if( boiler == boiler2 )
    std::cout << "Got same boiler" << std::endl;
  else
    std::cout << "Oh oh! got a different boiler" << std::endl;

  return 0;
}
