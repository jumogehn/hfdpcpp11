//===--- display_element.hpp - ----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_OBSERVER_DISPLAY_ELEMENT_HPP_
#define _HFDP_CPP_OBSERVER_DISPLAY_ELEMENT_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
//Other libraries' .h files.
//Your project's .h files.


class DisplayElement {
public:
  virtual void display() const = 0;
protected:
  virtual ~DisplayElement();
};

#endif
