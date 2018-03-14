//===--- NoCommand.cpp - ----------------------------------------*- C++ -*-===//
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
#include "no_command.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


void NoCommand::execute() const
{
  std::cout << "NoCommand::execute" << std::endl;
}
void NoCommand::undo() const
{
  std::cout << "NoCommand::undo" << std::endl;
}

