//===--- Command.hpp - ------------------------------------------*- C++ -*-===//
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


#ifndef	_HFDP_CPP_COMMAND_UNDO_COMMAND_HPP_
#define _HFDP_CPP_COMMAND_UNDO_COMMAND_HPP_



class Command {

public:
  virtual ~Command();
  virtual void execute() const = 0;
  virtual void undo() const = 0;
};


#endif
