//===--- pizza.cpp - --------------------------------------------*- C++ -*-===//
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
#include "pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  Pizza::Pizza()
  {
    std::cout << "Pizza::Pizza" << std::endl;
  }

  Pizza::~Pizza()
  {
    std::cout << "Pizza::~Pizza" << std::endl;
  }
  void Pizza::Bake() const
  {
    std::cout << "Pizza::Bake" << std::endl;
    std::cout << "Bake for 25 minutes at 350" << std::endl;
  }
  void Pizza::Cut() const
  {
    std::cout << "Pizza::Cut" << std::endl;
    std::cout << "Cutting the pizza into diagonal slices" << std::endl;
  }
  void Pizza::Box() const
  {
    std::cout << "Pizza::Box" << std::endl;
    std::cout << "Place pizza in official PizzaStore Box" << std::endl;
  }
  void Pizza::SetName(std::string name)
  {
    std::cout << "Pizza::SetName" << std::endl;
    name_ = name;
  }
  std::string Pizza::GetName() const
  {
    std::cout << "Pizza::GetName" << std::endl;
    return name_;
  }
  std::string Pizza::ToString() const
  {
    std::cout << "Pizza::ToString" << std::endl;
    std::stringstream value;
    value << "---- " << name_.c_str() << " ----" << std::endl;

    if (dough_.get() != 0) {
      value << dough_->ToString();
      value << std::endl;
    }
    if (sauce_.get() != 0) {
      value << sauce_->ToString();
      value << std::endl;
    }
    if (cheese_.get() != 0) {
      value << cheese_->ToString();
      value << std::endl;
    }
    if (clam_.get() != 0) {
      value << clam_->ToString();
      value << std::endl;
    }
    if (pepperoni_.get() != 0) {
      value << pepperoni_->ToString();
      value << std::endl;
    }
    if (veggies_) {
      //http://en.cppreference.com/w/cpp/language/range-for
      for (const std::unique_ptr<Veggies> &veggies : *veggies_) {
        if (veggies)
          value << veggies->ToString() << ", ";
      }
      value << std::endl;
    }

    return value.str();
  }
} //namespace headfirst
