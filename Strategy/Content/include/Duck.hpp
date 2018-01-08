//===--- Duck.hpp - ---------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_STRATEGY_DUCK_HPP_
#define _HFDP_CPP_STRATEGY_DUCK_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <memory>
//Other libraries' .h files.
//Your project's .h files.
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

namespace HFDP {
  namespace Strategy {

    class Duck {

      std::unique_ptr< FlyBehavior > _flyBehavior;
      std::unique_ptr< QuackBehavior > _quackBehavior;

      Duck( const Duck& ); // Disable copy constructor
      void operator=( const Duck& ); // Disable assignment operator

    protected:
      Duck( FlyBehavior* flyBehavior, QuackBehavior* quackBehavior );

    public:
      virtual ~Duck();
      void setFlyBehavior( FlyBehavior* fb );
      void setQuackBehavior( QuackBehavior* qb );
      void performFly() const;
      void performQuack() const;
      void swim() const;
      virtual void display() const = 0;
    };

  } // namespace Strategy
} // namespace HFDP

#endif
