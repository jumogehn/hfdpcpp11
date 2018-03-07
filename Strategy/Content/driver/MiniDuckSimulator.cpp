//===--- MiniDuckSimulator.cpp - --------------------------------*- C++ -*-===//
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
//Other libraries' .h files.
//Your project's .h files.
#include "DecoyDuck.hpp"
#include "FlyRocketPowered.hpp"
#include "MallardDuck.hpp"
#include "ModelDuck.hpp"
#include "RubberDuck.hpp"


int main(int argc, char* argv[]) {

  auto mallard = std::make_shared<MallardDuck>();
  auto rubberDuckie = std::make_shared<RubberDuck>();
  auto decoy = std::make_shared<DecoyDuck>();
  auto model = std::make_shared<ModelDuck>();

  mallard->performQuack();
  mallard->performFly();

  rubberDuckie->performQuack();
  rubberDuckie->performFly();

  decoy->performQuack();
  decoy->performFly();

  model->performQuack();
  model->performFly();
  model->setFlyBehavior(std::make_shared<FlyRocketPowered>());
  model->performFly();

  return 0;
}
