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
//For Visual Leak Detector
//#include "vld.h"
//https://github.com/KindDragon/vld
//https://kinddragon.github.io/vld/
//http://zzoyu.tistory.com/52
//No memory leaks detected. 2018.4.8
//Your project's .h files.
#include "chocolate_boiler.hpp"


int main( int argc, char* argv[] ) {

  std::cout << "Program started!" << std::endl;

  headfirst::ChocolateBoiler &
    boiler = headfirst::ChocolateBoiler::GetInstance();
  boiler.Fill();
  boiler.Boil();
  boiler.Drain();

  // will return the existing instance
  headfirst::ChocolateBoiler &
    boiler2 = headfirst::ChocolateBoiler::GetInstance();

  if( &boiler == &boiler2 )
    std::cout << "Got same boiler" << std::endl;
  else
    std::cout << "Oh oh! got a different boiler" << std::endl;

  return 0;
}
