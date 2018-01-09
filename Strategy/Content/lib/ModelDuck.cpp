//===--- ModelDuck.cpp - ----------------------------------------*- C++ -*-===//
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
#include "ModelDuck.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "Duck.hpp"
#include "FakeQuack.hpp"
#include "FlyNoWay.hpp"


ModelDuck::ModelDuck() : Duck(std::make_shared<FlyNoWay>(), std::make_shared<FakeQuack>())
{
  std::cout << "ModelDuck::ModelDuck" << std::endl;
}
void ModelDuck::display() const
{
  std::cout << "ModelDuck::display" << std::endl;
  std::cout << "I'm a model duck" << std::endl;
}

