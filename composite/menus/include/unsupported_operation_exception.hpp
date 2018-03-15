//===--- UnsupportedOperationException.hpp - --------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMPOSITE_MENUS_EXCEPTION_HPP_
#define _HFDP_CPP_COMPOSITE_MENUS_EXCEPTION_HPP_

//https://google.github.io/styleguide/cppguide.html#Names_and_Order_of_Includes
//dir2 / foo2.h.
//C system files.
//C++ system files.
#include <string>
#include <exception>
//Other libraries' .h files.
//Your project's .h files.


class UnsupportedOperationException : public std::exception {

  std::string _message;

public:
  UnsupportedOperationException() throw();
  UnsupportedOperationException( const std::string message );
  virtual ~UnsupportedOperationException() throw();
  std::string getMessage() const;
};


#endif
