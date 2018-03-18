//===--- mini_duck_simulator.cpp - ------------------------------*- C++ -*-===//
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
#include "decoy_duck.hpp"
#include "fly_rocket_powered.hpp"
#include "mallard_duck.hpp"
#include "model_duck.hpp"
#include "rubber_duck.hpp"


int main(int argc, char* argv[]) {

  std::unique_ptr<MallardDuck> mallard ( new MallardDuck() );
  std::unique_ptr<RubberDuck> rubber_duckie ( new RubberDuck() );
  std::unique_ptr<DecoyDuck> decoy ( new DecoyDuck() );
  std::unique_ptr<ModelDuck> model ( new ModelDuck() );

  mallard->PerformQuack();
  mallard->PerformFly();

  rubber_duckie->PerformQuack();
  rubber_duckie->PerformFly();

  decoy->PerformQuack();
  decoy->PerformFly();

  model->PerformQuack();
  model->PerformFly();
  model->SetFlyBehavior(new FlyRocketPowered());
  model->PerformFly();

  return 0;
}
