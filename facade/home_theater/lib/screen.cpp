
//===--- Screen.hpp - -------------------------------------------*- C++ -*-===//
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
#include "screen.hpp"
//C system files.
//C++ system files.
#include <iostream>
#include <string>
//Other libraries' .h files.
//Your project's .h files.



Screen::Screen( std::string description ) :
  _description( description )
{
  std::cout << "Screen::Screen" << std::endl;
}
void Screen::up()
{
  std::cout << "Screen::up" << std::endl;
  std::cout << _description.c_str() << " going up" << std::endl;
}
void Screen::down()
{
  std::cout << "Screen::down" << std::endl;
  std::cout << _description.c_str() << " going down" << std::endl;
}
std::string Screen::toString()
{
  std::cout << "Screen::toString" << std::endl;
  return _description;
}


