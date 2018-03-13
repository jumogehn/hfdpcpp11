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

  std::unique_ptr<MallardDuck> mallard ( new MallardDuck() );
  std::unique_ptr<RubberDuck> rubberDuckie ( new RubberDuck() );
  std::unique_ptr<DecoyDuck> decoy ( new DecoyDuck() );
  std::unique_ptr<ModelDuck> model ( new ModelDuck() );

  mallard->performQuack();
  mallard->performFly();

  rubberDuckie->performQuack();
  rubberDuckie->performFly();

  decoy->performQuack();
  decoy->performFly();

  model->performQuack();
  model->performFly();
  model->setFlyBehavior(new FlyRocketPowered());
  model->performFly();

  return 0;
}
