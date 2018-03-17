//===--- popcorn_popper.hpp - -----------------------------------*- C++ -*-===//
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
#include "popcorn_popper.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.



PopcornPopper::PopcornPopper( std::string description) :
  description_( description )
{
  std::cout << "PopcornPopper::PopcornPopper" << std::endl;
}
void PopcornPopper::TurnOn() const
{
  std::cout << "PopcornPopper::on" << std::endl;
  std::cout << description_.c_str() << " on" << std::endl;
}
void PopcornPopper::TurnOff() const
{
  std::cout << "PopcornPopper::off" << std::endl;
  std::cout << description_.c_str() << " off" << std::endl;
}
void PopcornPopper::Pop() const
{
  std::cout << "PopcornPopper::pop" << std::endl;
  std::cout << description_.c_str() << " popping popcorn!"
    << std::endl;
}
std::string PopcornPopper::ToString() const
{
  std::cout << "PopcornPopper::ToString" << std::endl;
  return description_;
}


