//===--- command.hpp - ------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_REMOTE_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_REMOTE_COMMAND_HPP_

namespace headfirst {


  class Command {

    // Disable copy constructor and assignment operator
    Command( const Command& ) = delete;
    void operator=( const Command& ) = delete;

  protected:
    Command();
  public:
    virtual ~Command();
    virtual void Execute() const = 0;
  };

} //namespace headfirst
#endif
