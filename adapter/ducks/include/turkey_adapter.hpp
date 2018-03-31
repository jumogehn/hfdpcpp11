//===--- turkey_adapter.hpp - -----------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_ADAPTERMyTurkey_ADAPTER_HPP_
#define _HFDP_CPP_ADAPTERMyTurkey_ADAPTER_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "duck.hpp"
#include "turkey.hpp"

namespace headfirst {

  class TurkeyAdapter : public Duck {

    const std::shared_ptr<Turkey> my_turkey_;

    // Disable copy constructor and assignment operator
    TurkeyAdapter( const TurkeyAdapter& ) = delete;
    void operator=( const TurkeyAdapter& ) = delete;

  public:
    explicit TurkeyAdapter( const std::shared_ptr<Turkey> turkey );
    void Fly() const;
    void Quack() const;
  };


} //namespace headfirst
#endif
