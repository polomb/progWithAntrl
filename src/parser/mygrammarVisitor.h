
// Generated from mygrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "mygrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by mygrammarParser.
 */
class  mygrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by mygrammarParser.
   */
    virtual std::any visitProg(mygrammarParser::ProgContext *context) = 0;

    virtual std::any visitPeremCreating(mygrammarParser::PeremCreatingContext *context) = 0;

    virtual std::any visitAssignSmth(mygrammarParser::AssignSmthContext *context) = 0;

    virtual std::any visitIfStmt(mygrammarParser::IfStmtContext *context) = 0;

    virtual std::any visitWhileStmt(mygrammarParser::WhileStmtContext *context) = 0;

    virtual std::any visitPrintStmt(mygrammarParser::PrintStmtContext *context) = 0;

    virtual std::any visitExprStmt(mygrammarParser::ExprStmtContext *context) = 0;

    virtual std::any visitPeremDeclaration(mygrammarParser::PeremDeclarationContext *context) = 0;

    virtual std::any visitType(mygrammarParser::TypeContext *context) = 0;

    virtual std::any visitAssignment(mygrammarParser::AssignmentContext *context) = 0;

    virtual std::any visitIfStatement(mygrammarParser::IfStatementContext *context) = 0;

    virtual std::any visitWhileStatement(mygrammarParser::WhileStatementContext *context) = 0;

    virtual std::any visitPrintStatement(mygrammarParser::PrintStatementContext *context) = 0;

    virtual std::any visitExpression(mygrammarParser::ExpressionContext *context) = 0;

    virtual std::any visitOr(mygrammarParser::OrContext *context) = 0;

    virtual std::any visitAnd(mygrammarParser::AndContext *context) = 0;

    virtual std::any visitEqual(mygrammarParser::EqualContext *context) = 0;

    virtual std::any visitCompare(mygrammarParser::CompareContext *context) = 0;

    virtual std::any visitAdd(mygrammarParser::AddContext *context) = 0;

    virtual std::any visitMultiply(mygrammarParser::MultiplyContext *context) = 0;

    virtual std::any visitUnary(mygrammarParser::UnaryContext *context) = 0;

    virtual std::any visitIntPrimary(mygrammarParser::IntPrimaryContext *context) = 0;

    virtual std::any visitDoublePrimary(mygrammarParser::DoublePrimaryContext *context) = 0;

    virtual std::any visitIdPrimary(mygrammarParser::IdPrimaryContext *context) = 0;

    virtual std::any visitExprPrimary(mygrammarParser::ExprPrimaryContext *context) = 0;


};

