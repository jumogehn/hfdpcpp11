//===--- model_duck.cpp - ---------------------------------------*- C++ -*-===//
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
#include "model_duck.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.
#include "duck.hpp"
#include "fake_quack.hpp"
#include "fly_no_way.hpp"


ModelDuck::ModelDuck() : Duck(new FlyNoWay(), new FakeQuack())
{
  std::cout << "ModelDuck::ModelDuck" << std::endl;
}
void ModelDuck::Display() const
{
  std::cout << "ModelDuck::Display" << std::endl;
  std::cout << "I'm a model duck" << std::endl;
}

