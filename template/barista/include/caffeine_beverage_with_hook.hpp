//===--- caffeine_beverage_with_hook.hpp - ----------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_
#define _HFDP_CPP_TEMPLATE_BARISTA_CAFFEINE_BEVERAGE_WITH_HOOK_HPP_



class CaffeineBeverageWithHook {
protected:
  virtual void BoilWater() const;
  virtual void PourInCup() const;
  virtual bool CustomerWantsCondiments();
public:
  virtual ~CaffeineBeverageWithHook();
  virtual void PrepareRecipe();
  virtual void Brew() const = 0;
  virtual void AddCondiments() const = 0;
};


#endif
