//===--- chocolate_boiler.cpp - ---------------------------------*- C++ -*-===//
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
#include "chocolate_boiler.hpp"
//C system files.
//C++ system files.
#include <cstddef>
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.

namespace headfirst {


  ChocolateBoiler::ChocolateBoiler()
  {
    empty_ = true;
    boiled_ = false;
  }
  ChocolateBoiler::~ChocolateBoiler()
  {
    unique_instance_ = nullptr;
  }

  ChocolateBoiler* ChocolateBoiler::GetInstance()
  {
    if( unique_instance_ == nullptr ) {
      std::cout
        << "Creating unique instance of Chocolate Boiler" << std::endl;
      unique_instance_ = new ChocolateBoiler();
    }
    std::cout << "Returning instance of Chocolate Boiler"<< std::endl;
    return unique_instance_;
  }
  void ChocolateBoiler::Fill()
  {	// fill the boiler with a milk/chocolate mixture
    if( IsEmpty() ) {
      empty_ = false;
      boiled_ = false;
    }
  }
  void ChocolateBoiler::Drain()
  {	// drain the boiled milk and chocolate
    if( !IsEmpty() && IsBoiled() ) {
      empty_ = true;
    }
  }
  void ChocolateBoiler::Boil()
  {	// bring the contents to a boil
    if( !IsEmpty() && !IsBoiled() ) {
      boiled_ = true;
    }
  }
  bool ChocolateBoiler::IsEmpty() const
  {
    return empty_;
  }
  bool ChocolateBoiler::IsBoiled() const
  {
    return boiled_;
  }
} //namespace headfirst
