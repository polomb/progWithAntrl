
// Generated from mygrammar.g4 by ANTLR 4.13.2


#include "mygrammarVisitor.h"

#include "mygrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MygrammarParserStaticData final {
  MygrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MygrammarParserStaticData(const MygrammarParserStaticData&) = delete;
  MygrammarParserStaticData(MygrammarParserStaticData&&) = delete;
  MygrammarParserStaticData& operator=(const MygrammarParserStaticData&) = delete;
  MygrammarParserStaticData& operator=(MygrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MygrammarParserStaticData> mygrammarParserStaticData = nullptr;

void mygrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mygrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(mygrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MygrammarParserStaticData>(
    std::vector<std::string>{
      "prog", "statement", "peremDeclaration", "type", "assignment", "ifStatement", 
      "whileStatement", "printStatement", "expression", "logicalOr", "logicalAnd", 
      "equality", "comparison", "addition", "multiplication", "unary", "primary"
    },
    std::vector<std::string>{
      "", "';'", "'='", "'int'", "'double'", "'if'", "'('", "')'", "'{'", 
      "'}'", "'else'", "'while'", "'print'", "'||'", "'&&'", "'=='", "'!='", 
      "'<'", "'>'", "'<='", "'>='", "'+'", "'-'", "'*'", "'/'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "INT", "DOUBLE", "ID", "WS", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,29,176,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,5,0,36,8,0,10,0,12,0,39,9,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,57,8,1,1,2,1,2,
  	1,2,1,2,3,2,63,8,2,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,5,
  	5,77,8,5,10,5,12,5,80,9,5,1,5,1,5,1,5,1,5,5,5,86,8,5,10,5,12,5,89,9,5,
  	1,5,3,5,92,8,5,1,6,1,6,1,6,1,6,1,6,1,6,5,6,100,8,6,10,6,12,6,103,9,6,
  	1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,9,1,9,1,9,5,9,117,8,9,10,9,12,9,
  	120,9,9,1,10,1,10,1,10,5,10,125,8,10,10,10,12,10,128,9,10,1,11,1,11,1,
  	11,5,11,133,8,11,10,11,12,11,136,9,11,1,12,1,12,1,12,5,12,141,8,12,10,
  	12,12,12,144,9,12,1,13,1,13,1,13,5,13,149,8,13,10,13,12,13,152,9,13,1,
  	14,1,14,1,14,5,14,157,8,14,10,14,12,14,160,9,14,1,15,1,15,1,15,3,15,165,
  	8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,174,8,16,1,16,0,0,17,0,2,
  	4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,0,5,1,0,3,4,1,0,15,16,1,0,17,
  	20,1,0,21,22,1,0,23,24,179,0,37,1,0,0,0,2,56,1,0,0,0,4,58,1,0,0,0,6,64,
  	1,0,0,0,8,66,1,0,0,0,10,70,1,0,0,0,12,93,1,0,0,0,14,106,1,0,0,0,16,111,
  	1,0,0,0,18,113,1,0,0,0,20,121,1,0,0,0,22,129,1,0,0,0,24,137,1,0,0,0,26,
  	145,1,0,0,0,28,153,1,0,0,0,30,164,1,0,0,0,32,173,1,0,0,0,34,36,3,2,1,
  	0,35,34,1,0,0,0,36,39,1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,40,1,0,0,
  	0,39,37,1,0,0,0,40,41,5,0,0,1,41,1,1,0,0,0,42,43,3,4,2,0,43,44,5,1,0,
  	0,44,57,1,0,0,0,45,46,3,8,4,0,46,47,5,1,0,0,47,57,1,0,0,0,48,57,3,10,
  	5,0,49,57,3,12,6,0,50,51,3,14,7,0,51,52,5,1,0,0,52,57,1,0,0,0,53,54,3,
  	16,8,0,54,55,5,1,0,0,55,57,1,0,0,0,56,42,1,0,0,0,56,45,1,0,0,0,56,48,
  	1,0,0,0,56,49,1,0,0,0,56,50,1,0,0,0,56,53,1,0,0,0,57,3,1,0,0,0,58,59,
  	3,6,3,0,59,62,5,27,0,0,60,61,5,2,0,0,61,63,3,16,8,0,62,60,1,0,0,0,62,
  	63,1,0,0,0,63,5,1,0,0,0,64,65,7,0,0,0,65,7,1,0,0,0,66,67,5,27,0,0,67,
  	68,5,2,0,0,68,69,3,16,8,0,69,9,1,0,0,0,70,71,5,5,0,0,71,72,5,6,0,0,72,
  	73,3,16,8,0,73,74,5,7,0,0,74,78,5,8,0,0,75,77,3,2,1,0,76,75,1,0,0,0,77,
  	80,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,0,79,81,1,0,0,0,80,78,1,0,0,0,81,
  	91,5,9,0,0,82,83,5,10,0,0,83,87,5,8,0,0,84,86,3,2,1,0,85,84,1,0,0,0,86,
  	89,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,90,1,0,0,0,89,87,1,0,0,0,90,
  	92,5,9,0,0,91,82,1,0,0,0,91,92,1,0,0,0,92,11,1,0,0,0,93,94,5,11,0,0,94,
  	95,5,6,0,0,95,96,3,16,8,0,96,97,5,7,0,0,97,101,5,8,0,0,98,100,3,2,1,0,
  	99,98,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,104,
  	1,0,0,0,103,101,1,0,0,0,104,105,5,9,0,0,105,13,1,0,0,0,106,107,5,12,0,
  	0,107,108,5,6,0,0,108,109,3,16,8,0,109,110,5,7,0,0,110,15,1,0,0,0,111,
  	112,3,18,9,0,112,17,1,0,0,0,113,118,3,20,10,0,114,115,5,13,0,0,115,117,
  	3,20,10,0,116,114,1,0,0,0,117,120,1,0,0,0,118,116,1,0,0,0,118,119,1,0,
  	0,0,119,19,1,0,0,0,120,118,1,0,0,0,121,126,3,22,11,0,122,123,5,14,0,0,
  	123,125,3,22,11,0,124,122,1,0,0,0,125,128,1,0,0,0,126,124,1,0,0,0,126,
  	127,1,0,0,0,127,21,1,0,0,0,128,126,1,0,0,0,129,134,3,24,12,0,130,131,
  	7,1,0,0,131,133,3,24,12,0,132,130,1,0,0,0,133,136,1,0,0,0,134,132,1,0,
  	0,0,134,135,1,0,0,0,135,23,1,0,0,0,136,134,1,0,0,0,137,142,3,26,13,0,
  	138,139,7,2,0,0,139,141,3,26,13,0,140,138,1,0,0,0,141,144,1,0,0,0,142,
  	140,1,0,0,0,142,143,1,0,0,0,143,25,1,0,0,0,144,142,1,0,0,0,145,150,3,
  	28,14,0,146,147,7,3,0,0,147,149,3,28,14,0,148,146,1,0,0,0,149,152,1,0,
  	0,0,150,148,1,0,0,0,150,151,1,0,0,0,151,27,1,0,0,0,152,150,1,0,0,0,153,
  	158,3,30,15,0,154,155,7,4,0,0,155,157,3,30,15,0,156,154,1,0,0,0,157,160,
  	1,0,0,0,158,156,1,0,0,0,158,159,1,0,0,0,159,29,1,0,0,0,160,158,1,0,0,
  	0,161,162,7,3,0,0,162,165,3,30,15,0,163,165,3,32,16,0,164,161,1,0,0,0,
  	164,163,1,0,0,0,165,31,1,0,0,0,166,174,5,25,0,0,167,174,5,26,0,0,168,
  	174,5,27,0,0,169,170,5,6,0,0,170,171,3,16,8,0,171,172,5,7,0,0,172,174,
  	1,0,0,0,173,166,1,0,0,0,173,167,1,0,0,0,173,168,1,0,0,0,173,169,1,0,0,
  	0,174,33,1,0,0,0,15,37,56,62,78,87,91,101,118,126,134,142,150,158,164,
  	173
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammarParserStaticData = std::move(staticData);
}

}

mygrammarParser::mygrammarParser(TokenStream *input) : mygrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

mygrammarParser::mygrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  mygrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mygrammarParserStaticData->atn, mygrammarParserStaticData->decisionToDFA, mygrammarParserStaticData->sharedContextCache, options);
}

mygrammarParser::~mygrammarParser() {
  delete _interpreter;
}

const atn::ATN& mygrammarParser::getATN() const {
  return *mygrammarParserStaticData->atn;
}

std::string mygrammarParser::getGrammarFileName() const {
  return "mygrammar.g4";
}

const std::vector<std::string>& mygrammarParser::getRuleNames() const {
  return mygrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& mygrammarParser::getVocabulary() const {
  return mygrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView mygrammarParser::getSerializedATN() const {
  return mygrammarParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

mygrammarParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mygrammarParser::ProgContext::EOF() {
  return getToken(mygrammarParser::EOF, 0);
}

std::vector<mygrammarParser::StatementContext *> mygrammarParser::ProgContext::statement() {
  return getRuleContexts<mygrammarParser::StatementContext>();
}

mygrammarParser::StatementContext* mygrammarParser::ProgContext::statement(size_t i) {
  return getRuleContext<mygrammarParser::StatementContext>(i);
}


size_t mygrammarParser::ProgContext::getRuleIndex() const {
  return mygrammarParser::RuleProg;
}


std::any mygrammarParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::ProgContext* mygrammarParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, mygrammarParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 241178744) != 0)) {
      setState(34);
      statement();
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(40);
    match(mygrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

mygrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::StatementContext::getRuleIndex() const {
  return mygrammarParser::RuleStatement;
}

void mygrammarParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IfStmtContext ------------------------------------------------------------------

mygrammarParser::IfStatementContext* mygrammarParser::IfStmtContext::ifStatement() {
  return getRuleContext<mygrammarParser::IfStatementContext>(0);
}

mygrammarParser::IfStmtContext::IfStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintStmtContext ------------------------------------------------------------------

mygrammarParser::PrintStatementContext* mygrammarParser::PrintStmtContext::printStatement() {
  return getRuleContext<mygrammarParser::PrintStatementContext>(0);
}

mygrammarParser::PrintStmtContext::PrintStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PrintStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPrintStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprStmtContext ------------------------------------------------------------------

mygrammarParser::ExpressionContext* mygrammarParser::ExprStmtContext::expression() {
  return getRuleContext<mygrammarParser::ExpressionContext>(0);
}

mygrammarParser::ExprStmtContext::ExprStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStmtContext ------------------------------------------------------------------

mygrammarParser::WhileStatementContext* mygrammarParser::WhileStmtContext::whileStatement() {
  return getRuleContext<mygrammarParser::WhileStatementContext>(0);
}

mygrammarParser::WhileStmtContext::WhileStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PeremCreatingContext ------------------------------------------------------------------

mygrammarParser::PeremDeclarationContext* mygrammarParser::PeremCreatingContext::peremDeclaration() {
  return getRuleContext<mygrammarParser::PeremDeclarationContext>(0);
}

mygrammarParser::PeremCreatingContext::PeremCreatingContext(StatementContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::PeremCreatingContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPeremCreating(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignSmthContext ------------------------------------------------------------------

mygrammarParser::AssignmentContext* mygrammarParser::AssignSmthContext::assignment() {
  return getRuleContext<mygrammarParser::AssignmentContext>(0);
}

mygrammarParser::AssignSmthContext::AssignSmthContext(StatementContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::AssignSmthContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitAssignSmth(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::StatementContext* mygrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, mygrammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(56);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<mygrammarParser::PeremCreatingContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(42);
      peremDeclaration();
      setState(43);
      match(mygrammarParser::T__0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<mygrammarParser::AssignSmthContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(45);
      assignment();
      setState(46);
      match(mygrammarParser::T__0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<mygrammarParser::IfStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(48);
      ifStatement();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<mygrammarParser::WhileStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(49);
      whileStatement();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<mygrammarParser::PrintStmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(50);
      printStatement();
      setState(51);
      match(mygrammarParser::T__0);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<mygrammarParser::ExprStmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(53);
      expression();
      setState(54);
      match(mygrammarParser::T__0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PeremDeclarationContext ------------------------------------------------------------------

mygrammarParser::PeremDeclarationContext::PeremDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mygrammarParser::TypeContext* mygrammarParser::PeremDeclarationContext::type() {
  return getRuleContext<mygrammarParser::TypeContext>(0);
}

tree::TerminalNode* mygrammarParser::PeremDeclarationContext::ID() {
  return getToken(mygrammarParser::ID, 0);
}

mygrammarParser::ExpressionContext* mygrammarParser::PeremDeclarationContext::expression() {
  return getRuleContext<mygrammarParser::ExpressionContext>(0);
}


size_t mygrammarParser::PeremDeclarationContext::getRuleIndex() const {
  return mygrammarParser::RulePeremDeclaration;
}


std::any mygrammarParser::PeremDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPeremDeclaration(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::PeremDeclarationContext* mygrammarParser::peremDeclaration() {
  PeremDeclarationContext *_localctx = _tracker.createInstance<PeremDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, mygrammarParser::RulePeremDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    type();
    setState(59);
    match(mygrammarParser::ID);
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mygrammarParser::T__1) {
      setState(60);
      match(mygrammarParser::T__1);
      setState(61);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

mygrammarParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::TypeContext::getRuleIndex() const {
  return mygrammarParser::RuleType;
}


std::any mygrammarParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::TypeContext* mygrammarParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 6, mygrammarParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    _la = _input->LA(1);
    if (!(_la == mygrammarParser::T__2

    || _la == mygrammarParser::T__3)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

mygrammarParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mygrammarParser::AssignmentContext::ID() {
  return getToken(mygrammarParser::ID, 0);
}

mygrammarParser::ExpressionContext* mygrammarParser::AssignmentContext::expression() {
  return getRuleContext<mygrammarParser::ExpressionContext>(0);
}


size_t mygrammarParser::AssignmentContext::getRuleIndex() const {
  return mygrammarParser::RuleAssignment;
}


std::any mygrammarParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::AssignmentContext* mygrammarParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 8, mygrammarParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(mygrammarParser::ID);
    setState(67);
    match(mygrammarParser::T__1);
    setState(68);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

mygrammarParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mygrammarParser::ExpressionContext* mygrammarParser::IfStatementContext::expression() {
  return getRuleContext<mygrammarParser::ExpressionContext>(0);
}

std::vector<mygrammarParser::StatementContext *> mygrammarParser::IfStatementContext::statement() {
  return getRuleContexts<mygrammarParser::StatementContext>();
}

mygrammarParser::StatementContext* mygrammarParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<mygrammarParser::StatementContext>(i);
}


size_t mygrammarParser::IfStatementContext::getRuleIndex() const {
  return mygrammarParser::RuleIfStatement;
}


std::any mygrammarParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::IfStatementContext* mygrammarParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, mygrammarParser::RuleIfStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(mygrammarParser::T__4);
    setState(71);
    match(mygrammarParser::T__5);
    setState(72);
    expression();
    setState(73);
    match(mygrammarParser::T__6);
    setState(74);
    match(mygrammarParser::T__7);
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 241178744) != 0)) {
      setState(75);
      statement();
      setState(80);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(81);
    match(mygrammarParser::T__8);
    setState(91);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mygrammarParser::T__9) {
      setState(82);
      match(mygrammarParser::T__9);
      setState(83);
      match(mygrammarParser::T__7);
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 241178744) != 0)) {
        setState(84);
        statement();
        setState(89);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(90);
      match(mygrammarParser::T__8);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

mygrammarParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mygrammarParser::ExpressionContext* mygrammarParser::WhileStatementContext::expression() {
  return getRuleContext<mygrammarParser::ExpressionContext>(0);
}

std::vector<mygrammarParser::StatementContext *> mygrammarParser::WhileStatementContext::statement() {
  return getRuleContexts<mygrammarParser::StatementContext>();
}

mygrammarParser::StatementContext* mygrammarParser::WhileStatementContext::statement(size_t i) {
  return getRuleContext<mygrammarParser::StatementContext>(i);
}


size_t mygrammarParser::WhileStatementContext::getRuleIndex() const {
  return mygrammarParser::RuleWhileStatement;
}


std::any mygrammarParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::WhileStatementContext* mygrammarParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, mygrammarParser::RuleWhileStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    match(mygrammarParser::T__10);
    setState(94);
    match(mygrammarParser::T__5);
    setState(95);
    expression();
    setState(96);
    match(mygrammarParser::T__6);
    setState(97);
    match(mygrammarParser::T__7);
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 241178744) != 0)) {
      setState(98);
      statement();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(104);
    match(mygrammarParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintStatementContext ------------------------------------------------------------------

mygrammarParser::PrintStatementContext::PrintStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mygrammarParser::ExpressionContext* mygrammarParser::PrintStatementContext::expression() {
  return getRuleContext<mygrammarParser::ExpressionContext>(0);
}


size_t mygrammarParser::PrintStatementContext::getRuleIndex() const {
  return mygrammarParser::RulePrintStatement;
}


std::any mygrammarParser::PrintStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitPrintStatement(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::PrintStatementContext* mygrammarParser::printStatement() {
  PrintStatementContext *_localctx = _tracker.createInstance<PrintStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, mygrammarParser::RulePrintStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(mygrammarParser::T__11);
    setState(107);
    match(mygrammarParser::T__5);
    setState(108);
    expression();
    setState(109);
    match(mygrammarParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

mygrammarParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mygrammarParser::LogicalOrContext* mygrammarParser::ExpressionContext::logicalOr() {
  return getRuleContext<mygrammarParser::LogicalOrContext>(0);
}


size_t mygrammarParser::ExpressionContext::getRuleIndex() const {
  return mygrammarParser::RuleExpression;
}


std::any mygrammarParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::ExpressionContext* mygrammarParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 16, mygrammarParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    logicalOr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOrContext ------------------------------------------------------------------

mygrammarParser::LogicalOrContext::LogicalOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::LogicalOrContext::getRuleIndex() const {
  return mygrammarParser::RuleLogicalOr;
}

void mygrammarParser::LogicalOrContext::copyFrom(LogicalOrContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OrContext ------------------------------------------------------------------

std::vector<mygrammarParser::LogicalAndContext *> mygrammarParser::OrContext::logicalAnd() {
  return getRuleContexts<mygrammarParser::LogicalAndContext>();
}

mygrammarParser::LogicalAndContext* mygrammarParser::OrContext::logicalAnd(size_t i) {
  return getRuleContext<mygrammarParser::LogicalAndContext>(i);
}

mygrammarParser::OrContext::OrContext(LogicalOrContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::LogicalOrContext* mygrammarParser::logicalOr() {
  LogicalOrContext *_localctx = _tracker.createInstance<LogicalOrContext>(_ctx, getState());
  enterRule(_localctx, 18, mygrammarParser::RuleLogicalOr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::OrContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(113);
    logicalAnd();
    setState(118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mygrammarParser::T__12) {
      setState(114);
      match(mygrammarParser::T__12);
      setState(115);
      logicalAnd();
      setState(120);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalAndContext ------------------------------------------------------------------

mygrammarParser::LogicalAndContext::LogicalAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::LogicalAndContext::getRuleIndex() const {
  return mygrammarParser::RuleLogicalAnd;
}

void mygrammarParser::LogicalAndContext::copyFrom(LogicalAndContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AndContext ------------------------------------------------------------------

std::vector<mygrammarParser::EqualityContext *> mygrammarParser::AndContext::equality() {
  return getRuleContexts<mygrammarParser::EqualityContext>();
}

mygrammarParser::EqualityContext* mygrammarParser::AndContext::equality(size_t i) {
  return getRuleContext<mygrammarParser::EqualityContext>(i);
}

mygrammarParser::AndContext::AndContext(LogicalAndContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::LogicalAndContext* mygrammarParser::logicalAnd() {
  LogicalAndContext *_localctx = _tracker.createInstance<LogicalAndContext>(_ctx, getState());
  enterRule(_localctx, 20, mygrammarParser::RuleLogicalAnd);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::AndContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(121);
    equality();
    setState(126);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mygrammarParser::T__13) {
      setState(122);
      match(mygrammarParser::T__13);
      setState(123);
      equality();
      setState(128);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityContext ------------------------------------------------------------------

mygrammarParser::EqualityContext::EqualityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::EqualityContext::getRuleIndex() const {
  return mygrammarParser::RuleEquality;
}

void mygrammarParser::EqualityContext::copyFrom(EqualityContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EqualContext ------------------------------------------------------------------

std::vector<mygrammarParser::ComparisonContext *> mygrammarParser::EqualContext::comparison() {
  return getRuleContexts<mygrammarParser::ComparisonContext>();
}

mygrammarParser::ComparisonContext* mygrammarParser::EqualContext::comparison(size_t i) {
  return getRuleContext<mygrammarParser::ComparisonContext>(i);
}

mygrammarParser::EqualContext::EqualContext(EqualityContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::EqualContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitEqual(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::EqualityContext* mygrammarParser::equality() {
  EqualityContext *_localctx = _tracker.createInstance<EqualityContext>(_ctx, getState());
  enterRule(_localctx, 22, mygrammarParser::RuleEquality);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::EqualContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(129);
    comparison();
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mygrammarParser::T__14

    || _la == mygrammarParser::T__15) {
      setState(130);
      _la = _input->LA(1);
      if (!(_la == mygrammarParser::T__14

      || _la == mygrammarParser::T__15)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(131);
      comparison();
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonContext ------------------------------------------------------------------

mygrammarParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::ComparisonContext::getRuleIndex() const {
  return mygrammarParser::RuleComparison;
}

void mygrammarParser::ComparisonContext::copyFrom(ComparisonContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CompareContext ------------------------------------------------------------------

std::vector<mygrammarParser::AdditionContext *> mygrammarParser::CompareContext::addition() {
  return getRuleContexts<mygrammarParser::AdditionContext>();
}

mygrammarParser::AdditionContext* mygrammarParser::CompareContext::addition(size_t i) {
  return getRuleContext<mygrammarParser::AdditionContext>(i);
}

mygrammarParser::CompareContext::CompareContext(ComparisonContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::CompareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitCompare(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::ComparisonContext* mygrammarParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 24, mygrammarParser::RuleComparison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::CompareContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(137);
    addition();
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1966080) != 0)) {
      setState(138);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1966080) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(139);
      addition();
      setState(144);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditionContext ------------------------------------------------------------------

mygrammarParser::AdditionContext::AdditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::AdditionContext::getRuleIndex() const {
  return mygrammarParser::RuleAddition;
}

void mygrammarParser::AdditionContext::copyFrom(AdditionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddContext ------------------------------------------------------------------

std::vector<mygrammarParser::MultiplicationContext *> mygrammarParser::AddContext::multiplication() {
  return getRuleContexts<mygrammarParser::MultiplicationContext>();
}

mygrammarParser::MultiplicationContext* mygrammarParser::AddContext::multiplication(size_t i) {
  return getRuleContext<mygrammarParser::MultiplicationContext>(i);
}

mygrammarParser::AddContext::AddContext(AdditionContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::AdditionContext* mygrammarParser::addition() {
  AdditionContext *_localctx = _tracker.createInstance<AdditionContext>(_ctx, getState());
  enterRule(_localctx, 26, mygrammarParser::RuleAddition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::AddContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(145);
    multiplication();
    setState(150);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mygrammarParser::T__20

    || _la == mygrammarParser::T__21) {
      setState(146);
      _la = _input->LA(1);
      if (!(_la == mygrammarParser::T__20

      || _la == mygrammarParser::T__21)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(147);
      multiplication();
      setState(152);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicationContext ------------------------------------------------------------------

mygrammarParser::MultiplicationContext::MultiplicationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::MultiplicationContext::getRuleIndex() const {
  return mygrammarParser::RuleMultiplication;
}

void mygrammarParser::MultiplicationContext::copyFrom(MultiplicationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MultiplyContext ------------------------------------------------------------------

std::vector<mygrammarParser::UnaryContext *> mygrammarParser::MultiplyContext::unary() {
  return getRuleContexts<mygrammarParser::UnaryContext>();
}

mygrammarParser::UnaryContext* mygrammarParser::MultiplyContext::unary(size_t i) {
  return getRuleContext<mygrammarParser::UnaryContext>(i);
}

mygrammarParser::MultiplyContext::MultiplyContext(MultiplicationContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::MultiplyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitMultiply(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::MultiplicationContext* mygrammarParser::multiplication() {
  MultiplicationContext *_localctx = _tracker.createInstance<MultiplicationContext>(_ctx, getState());
  enterRule(_localctx, 28, mygrammarParser::RuleMultiplication);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::MultiplyContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(153);
    unary();
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mygrammarParser::T__22

    || _la == mygrammarParser::T__23) {
      setState(154);
      _la = _input->LA(1);
      if (!(_la == mygrammarParser::T__22

      || _la == mygrammarParser::T__23)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(155);
      unary();
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryContext ------------------------------------------------------------------

mygrammarParser::UnaryContext::UnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mygrammarParser::UnaryContext* mygrammarParser::UnaryContext::unary() {
  return getRuleContext<mygrammarParser::UnaryContext>(0);
}

mygrammarParser::PrimaryContext* mygrammarParser::UnaryContext::primary() {
  return getRuleContext<mygrammarParser::PrimaryContext>(0);
}


size_t mygrammarParser::UnaryContext::getRuleIndex() const {
  return mygrammarParser::RuleUnary;
}


std::any mygrammarParser::UnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitUnary(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::UnaryContext* mygrammarParser::unary() {
  UnaryContext *_localctx = _tracker.createInstance<UnaryContext>(_ctx, getState());
  enterRule(_localctx, 30, mygrammarParser::RuleUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mygrammarParser::T__20:
      case mygrammarParser::T__21: {
        enterOuterAlt(_localctx, 1);
        setState(161);
        _la = _input->LA(1);
        if (!(_la == mygrammarParser::T__20

        || _la == mygrammarParser::T__21)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(162);
        unary();
        break;
      }

      case mygrammarParser::T__5:
      case mygrammarParser::INT:
      case mygrammarParser::DOUBLE:
      case mygrammarParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(163);
        primary();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

mygrammarParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::PrimaryContext::getRuleIndex() const {
  return mygrammarParser::RulePrimary;
}

void mygrammarParser::PrimaryContext::copyFrom(PrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprPrimaryContext ------------------------------------------------------------------

mygrammarParser::ExpressionContext* mygrammarParser::ExprPrimaryContext::expression() {
  return getRuleContext<mygrammarParser::ExpressionContext>(0);
}

mygrammarParser::ExprPrimaryContext::ExprPrimaryContext(PrimaryContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::ExprPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitExprPrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoublePrimaryContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::DoublePrimaryContext::DOUBLE() {
  return getToken(mygrammarParser::DOUBLE, 0);
}

mygrammarParser::DoublePrimaryContext::DoublePrimaryContext(PrimaryContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::DoublePrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitDoublePrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntPrimaryContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::IntPrimaryContext::INT() {
  return getToken(mygrammarParser::INT, 0);
}

mygrammarParser::IntPrimaryContext::IntPrimaryContext(PrimaryContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::IntPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitIntPrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdPrimaryContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::IdPrimaryContext::ID() {
  return getToken(mygrammarParser::ID, 0);
}

mygrammarParser::IdPrimaryContext::IdPrimaryContext(PrimaryContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::IdPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitIdPrimary(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::PrimaryContext* mygrammarParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 32, mygrammarParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(173);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mygrammarParser::INT: {
        _localctx = _tracker.createInstance<mygrammarParser::IntPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(166);
        match(mygrammarParser::INT);
        break;
      }

      case mygrammarParser::DOUBLE: {
        _localctx = _tracker.createInstance<mygrammarParser::DoublePrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(167);
        match(mygrammarParser::DOUBLE);
        break;
      }

      case mygrammarParser::ID: {
        _localctx = _tracker.createInstance<mygrammarParser::IdPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(168);
        match(mygrammarParser::ID);
        break;
      }

      case mygrammarParser::T__5: {
        _localctx = _tracker.createInstance<mygrammarParser::ExprPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(169);
        match(mygrammarParser::T__5);
        setState(170);
        expression();
        setState(171);
        match(mygrammarParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void mygrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mygrammarParserInitialize();
#else
  ::antlr4::internal::call_once(mygrammarParserOnceFlag, mygrammarParserInitialize);
#endif
}
