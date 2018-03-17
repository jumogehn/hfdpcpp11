//===--- plum_tomato_sauce.hpp - --------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_FACTORY_ABSTRACT_PLUMTOMATO_SAUCE_HPP_
#define _HFDP_CPP_FACTORY_ABSTRACT_PLUMTOMATO_SAUCE_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
//Other libraries' .h files.
//Your project's .h files.
#include "sauce.hpp"

class PlumTomatoSauce : public Sauce {

public:
  std::string ToString() const;
};


#endif
