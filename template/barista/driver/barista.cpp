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
//For Visual Leak Detector
//#include "vld.h"
//https://github.com/KindDragon/vld
//https://kinddragon.github.io/vld/
//http://zzoyu.tistory.com/52
//No memory leaks detected. 2018.4.8
//Your project's .h files.
#include "coffee.hpp"
#include "coffee_with_hook.hpp"
#include "tea.hpp"
#include "tea_with_hook.hpp"


int main( int argc, char* argv[] ) {

  std::unique_ptr<headfirst::Tea>
    tea( new headfirst::Tea() );
  std::unique_ptr<headfirst::Coffee>
    coffee( new headfirst::Coffee() );

  std::cout << std::endl << "Making tea..." << std::endl;
  tea->PrepareRecipe();

  std::cout << std::endl << "Making coffee..." << std::endl;
  coffee->PrepareRecipe();

  std::unique_ptr<headfirst::TeaWithHook>
    tea_hook( new headfirst::TeaWithHook() );
  std::unique_ptr<headfirst::CoffeeWithHook>
    coffee_hook( new headfirst::CoffeeWithHook() );

  std::cout << std::endl << "Making tea..."<< std::endl;
  tea_hook->PrepareRecipe();

  std::cout << std::endl << "Making coffee..."<< std::endl;
  coffee_hook->PrepareRecipe();

  return 0;
}

