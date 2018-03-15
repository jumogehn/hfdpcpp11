//===--- GarageDoor.cpp - ---------------------------------------*- C++ -*-===//
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
#include "garage_door.hpp"
//C system files.
//C++ system files.
#include <iostream>
//Other libraries' .h files.
//Your project's .h files.


GarageDoor::GarageDoor()
{
  std::cout << "GarageDoor::GarageDoor" << std::endl;
}
void GarageDoor::up() const
{
  std::cout << "GarageDoor::up" << std::endl;
  std::cout << "Garage Door is Open" << std::endl;
}
void GarageDoor::down() const
{
  std::cout << "GarageDoor::down" << std::endl;
  std::cout << "Garage Door is Closed" << std::endl;
}
void GarageDoor::stop() const
{
  std::cout << "GarageDoor::stop" << std::endl;
  std::cout << "Garage Door is Stopped" << std::endl;
}
void GarageDoor::lightOn() const
{
  std::cout << "GarageDoor::lightOn" << std::endl;
  std::cout << "Garage light is on" << std::endl;
}
void GarageDoor::lightOff() const
{
  std::cout << "GarageDoor::lightOff" << std::endl;
  std::cout << "Garage light is off" << std::endl;
}


