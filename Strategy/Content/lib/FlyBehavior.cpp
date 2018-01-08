//===--- FlyBehavior.cpp - --------------------------------------*- C++ -*-===//
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
#include "FlyBehavior.hpp"
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.
#include "Utilities.hpp"

using namespace HFDP::Strategy;

FlyBehavior::~FlyBehavior()
{
  PrintMessage("FlyBehavior::~FlyBehavior");
}

