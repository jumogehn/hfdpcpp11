//===--- duck_adapter.hpp - -------------------------------------*- C++ -*-===//
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

#ifndef	_HFDP_CPP_ADAPTERMyDuck_ADAPTER_HPP_
#define _HFDP_CPP_ADAPTERMyDuck_ADAPTER_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "duck.hpp"
#include "duck_adapter.hpp"
#include "turkey.hpp"


namespace headfirst {

  class DuckAdapter : public Turkey {

    const Duck* my_duck_;
    int random_num_;

    DuckAdapter( const DuckAdapter& ); // Disable copy constructor
    void operator=( const DuckAdapter& ); // Disable assignment operator

  public:
    explicit DuckAdapter( const Duck* duck );
    void Fly() const;
    void Gobble() const;
  };

} //namespace headfirst
#endif
