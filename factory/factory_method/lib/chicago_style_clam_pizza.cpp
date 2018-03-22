//===--- chicago_style_clam_pizza.cpp - -------------------------*- C++ -*-===//
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
#include "chicago_style_clam_pizza.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  ChicagoStyleClamPizza::ChicagoStyleClamPizza()
  {
    std::cout << "ChicagoStyleClamPizza::ChicagoStyleClamPizza" << std::endl;
    name_ = "Chicago Style Clam Pizza";
    dough_ = "Extra Thick Crust Dough";
    sauce_ = "Plum Tomato Sauce";
    toppings_.push_back( "Shredded Mozzarella Cheese" );
    toppings_.push_back( "Frozen Clams from Chesapeake Bay" );
  }
  void ChicagoStyleClamPizza::Cut() const
  {
    std::cout << "ChicagoStyleClamPizza::Cut" << std::endl;
    std::cout << "Cutting the pizza into square slices" << std::endl;
  }

} //namespace headfirst
