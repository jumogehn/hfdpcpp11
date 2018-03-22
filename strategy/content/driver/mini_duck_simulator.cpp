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

  std::unique_ptr<headfirst::MallardDuck>
    mallard ( new headfirst::MallardDuck() );
  std::unique_ptr<headfirst::RubberDuck>
    rubber_duckie ( new headfirst::RubberDuck() );
  std::unique_ptr<headfirst::DecoyDuck>
    decoy ( new headfirst::DecoyDuck() );
  std::unique_ptr<headfirst::ModelDuck>
    model ( new headfirst::ModelDuck() );

  mallard->PerformQuack();
  mallard->PerformFly();

  rubber_duckie->PerformQuack();
  rubber_duckie->PerformFly();

  decoy->PerformQuack();
  decoy->PerformFly();

  model->PerformQuack();
  model->PerformFly();
  model->SetFlyBehavior(new headfirst::FlyRocketPowered());
  model->PerformFly();

  return 0;
}
