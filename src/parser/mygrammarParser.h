
// Generated from mygrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  mygrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, INT = 25, DOUBLE = 26, 
    ID = 27, WS = 28, COMMENT = 29
  };

  enum {
    RuleProg = 0, RuleStatement = 1, RulePeremDeclaration = 2, RuleType = 3, 
    RuleAssignment = 4, RuleIfStatement = 5, RuleWhileStatement = 6, RulePrintStatement = 7, 
    RuleExpression = 8, RuleLogicalOr = 9, RuleLogicalAnd = 10, RuleEquality = 11, 
    RuleComparison = 12, RuleAddition = 13, RuleMultiplication = 14, RuleUnary = 15, 
    RulePrimary = 16
  };

  explicit mygrammarParser(antlr4::TokenStream *input);

  mygrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~mygrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class StatementContext;
  class PeremDeclarationContext;
  class TypeContext;
  class AssignmentContext;
  class IfStatementContext;
  class WhileStatementContext;
  class PrintStatementContext;
  class ExpressionContext;
  class LogicalOrContext;
  class LogicalAndContext;
  class EqualityContext;
  class ComparisonContext;
  class AdditionContext;
  class MultiplicationContext;
  class UnaryContext;
  class PrimaryContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IfStmtContext : public StatementContext {
  public:
    IfStmtContext(StatementContext *ctx);

    IfStatementContext *ifStatement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintStmtContext : public StatementContext {
  public:
    PrintStmtContext(StatementContext *ctx);

    PrintStatementContext *printStatement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprStmtContext : public StatementContext {
  public:
    ExprStmtContext(StatementContext *ctx);

    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WhileStmtContext : public StatementContext {
  public:
    WhileStmtContext(StatementContext *ctx);

    WhileStatementContext *whileStatement();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PeremCreatingContext : public StatementContext {
  public:
    PeremCreatingContext(StatementContext *ctx);

    PeremDeclarationContext *peremDeclaration();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignSmthContext : public StatementContext {
  public:
    AssignSmthContext(StatementContext *ctx);

    AssignmentContext *assignment();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  PeremDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PeremDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    antlr4::tree::TerminalNode *ID();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PeremDeclarationContext* peremDeclaration();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  PrintStatementContext : public antlr4::ParserRuleContext {
  public:
    PrintStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintStatementContext* printStatement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicalOrContext *logicalOr();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  LogicalOrContext : public antlr4::ParserRuleContext {
  public:
    LogicalOrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LogicalOrContext() = default;
    void copyFrom(LogicalOrContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OrContext : public LogicalOrContext {
  public:
    OrContext(LogicalOrContext *ctx);

    std::vector<LogicalAndContext *> logicalAnd();
    LogicalAndContext* logicalAnd(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LogicalOrContext* logicalOr();

  class  LogicalAndContext : public antlr4::ParserRuleContext {
  public:
    LogicalAndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LogicalAndContext() = default;
    void copyFrom(LogicalAndContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AndContext : public LogicalAndContext {
  public:
    AndContext(LogicalAndContext *ctx);

    std::vector<EqualityContext *> equality();
    EqualityContext* equality(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LogicalAndContext* logicalAnd();

  class  EqualityContext : public antlr4::ParserRuleContext {
  public:
    EqualityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    EqualityContext() = default;
    void copyFrom(EqualityContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EqualContext : public EqualityContext {
  public:
    EqualContext(EqualityContext *ctx);

    std::vector<ComparisonContext *> comparison();
    ComparisonContext* comparison(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  EqualityContext* equality();

  class  ComparisonContext : public antlr4::ParserRuleContext {
  public:
    ComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ComparisonContext() = default;
    void copyFrom(ComparisonContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CompareContext : public ComparisonContext {
  public:
    CompareContext(ComparisonContext *ctx);

    std::vector<AdditionContext *> addition();
    AdditionContext* addition(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ComparisonContext* comparison();

  class  AdditionContext : public antlr4::ParserRuleContext {
  public:
    AdditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AdditionContext() = default;
    void copyFrom(AdditionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AddContext : public AdditionContext {
  public:
    AddContext(AdditionContext *ctx);

    std::vector<MultiplicationContext *> multiplication();
    MultiplicationContext* multiplication(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AdditionContext* addition();

  class  MultiplicationContext : public antlr4::ParserRuleContext {
  public:
    MultiplicationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MultiplicationContext() = default;
    void copyFrom(MultiplicationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MultiplyContext : public MultiplicationContext {
  public:
    MultiplyContext(MultiplicationContext *ctx);

    std::vector<UnaryContext *> unary();
    UnaryContext* unary(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MultiplicationContext* multiplication();

  class  UnaryContext : public antlr4::ParserRuleContext {
  public:
    UnaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryContext *unary();
    PrimaryContext *primary();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryContext* unary();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrimaryContext() = default;
    void copyFrom(PrimaryContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprPrimaryContext : public PrimaryContext {
  public:
    ExprPrimaryContext(PrimaryContext *ctx);

    ExpressionContext *expression();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DoublePrimaryContext : public PrimaryContext {
  public:
    DoublePrimaryContext(PrimaryContext *ctx);

    antlr4::tree::TerminalNode *DOUBLE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntPrimaryContext : public PrimaryContext {
  public:
    IntPrimaryContext(PrimaryContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdPrimaryContext : public PrimaryContext {
  public:
    IdPrimaryContext(PrimaryContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrimaryContext* primary();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

