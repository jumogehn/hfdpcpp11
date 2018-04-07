//===--- mallard_duck.cpp - -------------------------------------*- C++ -*-===//
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
#include "mallard_duck.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "duck.hpp"
#include "fly_with_wings.hpp"
#include "just_quack.hpp"

namespace headfirst {


  MallardDuck::MallardDuck()
    : Duck(std::unique_ptr<FlyBehavior> (new FlyWithWings())
           , std::unique_ptr<QuackBehavior> (new JustQuack()))
  {
    std::cout << "MallardDuck::MallardDuck" << std::endl;
  }
  void MallardDuck::Display() const
  {
    std::cout << "MallardDuck::Display" << std::endl;
    std::cout << "I'm a real Mallard duck" << std::endl;
  }

} //namespace headfirst
