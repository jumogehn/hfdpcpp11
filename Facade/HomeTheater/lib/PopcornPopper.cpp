
//===--- PopcornPopper.hpp - ------------------------------------*- C++ -*-===//
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
#include "PopcornPopper.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.



PopcornPopper::PopcornPopper( std::string description) :
  _description( description )
{
  std::cout << "PopcornPopper::PopcornPopper" << std::endl;
}
void PopcornPopper::on() const
{
  std::cout << "PopcornPopper::on" << std::endl;
  std::cout << _description.c_str() << " on" << std::endl;
}
void PopcornPopper::off() const
{
  std::cout << "PopcornPopper::off" << std::endl;
  std::cout << _description.c_str() << " off" << std::endl;
}
void PopcornPopper::pop() const
{
  std::cout << "PopcornPopper::pop" << std::endl;
  std::cout << _description.c_str() << " popping popcorn!"
    << std::endl;
}
std::string PopcornPopper::toString() const
{
  std::cout << "PopcornPopper::toString" << std::endl;
  return _description;
}


