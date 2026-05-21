
// Generated from mygrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "mygrammarVisitor.h"


/**
 * This class provides an empty implementation of mygrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  mygrammarBaseVisitor : public mygrammarVisitor {
public:

  virtual std::any visitProg(mygrammarParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeremCreating(mygrammarParser::PeremCreatingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignSmth(mygrammarParser::AssignSmthContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(mygrammarParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStmt(mygrammarParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintStmt(mygrammarParser::PrintStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprStmt(mygrammarParser::ExprStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPeremDeclaration(mygrammarParser::PeremDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(mygrammarParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(mygrammarParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(mygrammarParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(mygrammarParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintStatement(mygrammarParser::PrintStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(mygrammarParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOr(mygrammarParser::OrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnd(mygrammarParser::AndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqual(mygrammarParser::EqualContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompare(mygrammarParser::CompareContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdd(mygrammarParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiply(mygrammarParser::MultiplyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary(mygrammarParser::UnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntPrimary(mygrammarParser::IntPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoublePrimary(mygrammarParser::DoublePrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdPrimary(mygrammarParser::IdPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprPrimary(mygrammarParser::ExprPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }


};

