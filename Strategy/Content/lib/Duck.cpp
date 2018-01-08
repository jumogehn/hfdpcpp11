//===--- Duck.cpp - ---------------------------------------------*- C++ -*-===//
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
#include "Duck.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
#include <cassert>
//Other libraries' .h files.
//Your project's .h files.
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"
#include "Utilities.hpp"


Duck::Duck(std::shared_ptr<FlyBehavior> flyBehavior, std::shared_ptr<QuackBehavior> quackBehavior ) :
  _flyBehavior( flyBehavior ), _quackBehavior( quackBehavior )
{
  assert( flyBehavior ); assert( quackBehavior );
  PrintMessage("Duck::Duck");
}

Duck::~Duck()
{
  PrintMessage("Duck::~Duck");
}
void Duck::setFlyBehavior( std::shared_ptr<FlyBehavior> fb )
{
  assert( fb );
  PrintMessage("Duck::setFlyBehavior");
  _flyBehavior = std::shared_ptr< FlyBehavior >( fb );
}
void Duck::setQuackBehavior(std::shared_ptr<QuackBehavior> qb )
{
  assert( qb );
  PrintMessage("Duck::setQuackBehavior");
  _quackBehavior = std::shared_ptr< QuackBehavior >( qb );
}
void Duck::performFly() const
{
  PrintMessage("Duck::performFly");
  _flyBehavior->fly();
}
void Duck::performQuack() const
{
  PrintMessage("Duck::performQuack");
  _quackBehavior->quack();
}
void Duck::swim() const
{
  PrintMessage("Duck::swim");
  std::cout << "All ducks float, even decoys!" << std::endl;
}

