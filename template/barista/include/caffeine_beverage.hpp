//===--- caffeine_beverage.hpp - --------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_HPP_



class CaffeineBeverage {
  void BoilWater() const;
  void PourInCup() const;
protected:
  virtual void Brew() const = 0;
  virtual void AddCondiments() const = 0;

public:
  virtual ~CaffeineBeverage();
  virtual void PrepareRecipe();
};


#endif
