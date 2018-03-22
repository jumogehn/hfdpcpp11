//===--- decoy_duck.cpp - ---------------------------------------*- C++ -*-===//
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
#include "decoy_duck.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "duck.hpp"
#include "fly_no_way.hpp"
#include "mute_quack.hpp"

namespace headfirst {


  DecoyDuck::DecoyDuck()
    : Duck(new FlyNoWay(), new MuteQuack())
  {
    std::cout << "DecoyDuck::DecoyDuck" << std::endl;
  }
  void DecoyDuck::Display() const
  {
    std::cout << "DecoyDuck::display" << std::endl;
    std::cout << "I'm a duck Decoy" << std::endl;
  }
} //namespace headfirst
