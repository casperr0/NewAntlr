
// Generated from Expr.g4 by ANTLR 4.7


#include "ExprListener.h"
#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::ExprContext *> ExprParser::ProgContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ProgContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::ProgContext::NEWLINE() {
  return getTokens(ExprParser::NEWLINE);
}

tree::TerminalNode* ExprParser::ProgContext::NEWLINE(size_t i) {
  return getToken(ExprParser::NEWLINE, i);
}


size_t ExprParser::ProgContext::getRuleIndex() const {
  return ExprParser::RuleProg;
}

void ExprParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void ExprParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


antlrcpp::Any ExprParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgContext* ExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(13);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__0)
      | (1ULL << ExprParser::T__2)
      | (1ULL << ExprParser::ADD)
      | (1ULL << ExprParser::SUB)
      | (1ULL << ExprParser::HEX_NUMBER)
      | (1ULL << ExprParser::INTEGER)
      | (1ULL << ExprParser::FLOAT)
      | (1ULL << ExprParser::EXP_NUMBER)
      | (1ULL << ExprParser::NAME))) != 0)) {
      setState(8);
      expr(0);
      setState(9);
      match(ExprParser::NEWLINE);
      setState(15);
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

//----------------- ExprContext ------------------------------------------------------------------

ExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::ExprContext::getRuleIndex() const {
  return ExprParser::RuleExpr;
}

void ExprParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InlineVarExprContext ------------------------------------------------------------------

ExprParser::VarContext* ExprParser::InlineVarExprContext::var() {
  return getRuleContext<ExprParser::VarContext>(0);
}

ExprParser::InlineVarExprContext::InlineVarExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::InlineVarExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineVarExpr(this);
}
void ExprParser::InlineVarExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineVarExpr(this);
}

antlrcpp::Any ExprParser::InlineVarExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInlineVarExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactExprContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::FactExprContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::FactExprContext::FactExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::FactExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactExpr(this);
}
void ExprParser::FactExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactExpr(this);
}

antlrcpp::Any ExprParser::FactExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitFactExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryPMExprContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::UnaryPMExprContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::UnaryPMExprContext::UnaryPMExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::UnaryPMExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryPMExpr(this);
}
void ExprParser::UnaryPMExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryPMExpr(this);
}

antlrcpp::Any ExprParser::UnaryPMExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitUnaryPMExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprContext ------------------------------------------------------------------

ExprParser::NumContext* ExprParser::NumExprContext::num() {
  return getRuleContext<ExprParser::NumContext>(0);
}

ExprParser::NumExprContext::NumExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::NumExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumExpr(this);
}
void ExprParser::NumExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumExpr(this);
}

antlrcpp::Any ExprParser::NumExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNumExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivModExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::MulDivModExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::MulDivModExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::MulDivModExprContext::MulDivModExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::MulDivModExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivModExpr(this);
}
void ExprParser::MulDivModExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivModExpr(this);
}

antlrcpp::Any ExprParser::MulDivModExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMulDivModExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::PowExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::PowExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::PowExprContext::PowExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::PowExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowExpr(this);
}
void ExprParser::PowExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowExpr(this);
}

antlrcpp::Any ExprParser::PowExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPowExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensExprContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::ParensExprContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::ParensExprContext::ParensExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::ParensExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParensExpr(this);
}
void ExprParser::ParensExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParensExpr(this);
}

antlrcpp::Any ExprParser::ParensExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitParensExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarExprContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::VarExprContext::NAME() {
  return getToken(ExprParser::NAME, 0);
}

ExprParser::VarExprContext::VarExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::VarExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarExpr(this);
}
void ExprParser::VarExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarExpr(this);
}

antlrcpp::Any ExprParser::VarExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVarExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RoundExprContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::RoundExprContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::RoundExprContext::RoundExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::RoundExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRoundExpr(this);
}
void ExprParser::RoundExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRoundExpr(this);
}

antlrcpp::Any ExprParser::RoundExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRoundExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::AddSubExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::AddSubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSubExpr(this);
}
void ExprParser::AddSubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSubExpr(this);
}

antlrcpp::Any ExprParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ExprContext* ExprParser::expr() {
   return expr(0);
}

ExprParser::ExprContext* ExprParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExprParser::ExprContext *previousContext = _localctx;
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, ExprParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(30);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParensExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(17);
      match(ExprParser::T__0);
      setState(18);
      expr(0);
      setState(19);
      match(ExprParser::T__1);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<RoundExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(21);
      match(ExprParser::T__2);
      setState(22);
      expr(0);
      setState(23);
      match(ExprParser::T__3);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<UnaryPMExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(25);
      dynamic_cast<UnaryPMExprContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ExprParser::ADD

      || _la == ExprParser::SUB)) {
        dynamic_cast<UnaryPMExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(26);
      expr(6);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<InlineVarExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(27);
      var();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<NumExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(28);
      num();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VarExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(29);
      match(ExprParser::NAME);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(45);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(43);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<PowExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(32);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(33);
          match(ExprParser::T__5);
          setState(34);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MulDivModExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(35);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(36);
          dynamic_cast<MulDivModExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ExprParser::MUL)
            | (1ULL << ExprParser::DIV)
            | (1ULL << ExprParser::MOD))) != 0))) {
            dynamic_cast<MulDivModExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(37);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(38);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(39);
          dynamic_cast<AddSubExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ExprParser::ADD

          || _la == ExprParser::SUB)) {
            dynamic_cast<AddSubExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(40);
          expr(5);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<FactExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(41);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(42);
          match(ExprParser::T__4);
          break;
        }

        } 
      }
      setState(47);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

ExprParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::VarContext::NAME() {
  return getToken(ExprParser::NAME, 0);
}

ExprParser::ExprContext* ExprParser::VarContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}


size_t ExprParser::VarContext::getRuleIndex() const {
  return ExprParser::RuleVar;
}

void ExprParser::VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar(this);
}

void ExprParser::VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar(this);
}


antlrcpp::Any ExprParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VarContext* ExprParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleVar);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(ExprParser::NAME);
    setState(49);
    match(ExprParser::T__6);
    setState(50);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumContext ------------------------------------------------------------------

ExprParser::NumContext::NumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::NumContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}

tree::TerminalNode* ExprParser::NumContext::FLOAT() {
  return getToken(ExprParser::FLOAT, 0);
}

tree::TerminalNode* ExprParser::NumContext::HEX_NUMBER() {
  return getToken(ExprParser::HEX_NUMBER, 0);
}

tree::TerminalNode* ExprParser::NumContext::EXP_NUMBER() {
  return getToken(ExprParser::EXP_NUMBER, 0);
}


size_t ExprParser::NumContext::getRuleIndex() const {
  return ExprParser::RuleNum;
}

void ExprParser::NumContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNum(this);
}

void ExprParser::NumContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNum(this);
}


antlrcpp::Any ExprParser::NumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNum(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::NumContext* ExprParser::num() {
  NumContext *_localctx = _tracker.createInstance<NumContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleNum);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    dynamic_cast<NumContext *>(_localctx)->type = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::HEX_NUMBER)
      | (1ULL << ExprParser::INTEGER)
      | (1ULL << ExprParser::FLOAT)
      | (1ULL << ExprParser::EXP_NUMBER))) != 0))) {
      dynamic_cast<NumContext *>(_localctx)->type = _errHandler->recoverInline(this);
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

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "prog", "expr", "var", "num"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'('", "')'", "'['", "']'", "'!'", "'^'", "'='", "'*'", "'/'", "'%'", 
  "'+'", "'-'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "MUL", "DIV", "MOD", "ADD", "SUB", "HEX_NUMBER", 
  "INTEGER", "FLOAT", "EXP_NUMBER", "COMMENT", "NAME", "NEWLINE", "WS"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x16, 0x39, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0xe, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x11, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x21, 0xa, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x2e, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x31, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x2, 0x3, 0x4, 0x6, 0x2, 0x4, 0x6, 0x8, 
    0x2, 0x5, 0x3, 0x2, 0xd, 0xe, 0x3, 0x2, 0xa, 0xc, 0x3, 0x2, 0xf, 0x12, 
    0x2, 0x3e, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4, 0x20, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x32, 0x3, 0x2, 0x2, 0x2, 0x8, 0x36, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 
    0x5, 0x4, 0x3, 0x2, 0xb, 0xc, 0x7, 0x15, 0x2, 0x2, 0xc, 0xe, 0x3, 0x2, 
    0x2, 0x2, 0xd, 0xa, 0x3, 0x2, 0x2, 0x2, 0xe, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0xf, 0xd, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x3, 0x2, 0x2, 0x2, 0x10, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x8, 
    0x3, 0x1, 0x2, 0x13, 0x14, 0x7, 0x3, 0x2, 0x2, 0x14, 0x15, 0x5, 0x4, 
    0x3, 0x2, 0x15, 0x16, 0x7, 0x4, 0x2, 0x2, 0x16, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x17, 0x18, 0x7, 0x5, 0x2, 0x2, 0x18, 0x19, 0x5, 0x4, 0x3, 0x2, 
    0x19, 0x1a, 0x7, 0x6, 0x2, 0x2, 0x1a, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1b, 
    0x1c, 0x9, 0x2, 0x2, 0x2, 0x1c, 0x21, 0x5, 0x4, 0x3, 0x8, 0x1d, 0x21, 
    0x5, 0x6, 0x4, 0x2, 0x1e, 0x21, 0x5, 0x8, 0x5, 0x2, 0x1f, 0x21, 0x7, 
    0x14, 0x2, 0x2, 0x20, 0x12, 0x3, 0x2, 0x2, 0x2, 0x20, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x21, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0xc, 0x9, 0x2, 0x2, 0x23, 
    0x24, 0x7, 0x8, 0x2, 0x2, 0x24, 0x2e, 0x5, 0x4, 0x3, 0x9, 0x25, 0x26, 
    0xc, 0x7, 0x2, 0x2, 0x26, 0x27, 0x9, 0x3, 0x2, 0x2, 0x27, 0x2e, 0x5, 
    0x4, 0x3, 0x8, 0x28, 0x29, 0xc, 0x6, 0x2, 0x2, 0x29, 0x2a, 0x9, 0x2, 
    0x2, 0x2, 0x2a, 0x2e, 0x5, 0x4, 0x3, 0x7, 0x2b, 0x2c, 0xc, 0xa, 0x2, 
    0x2, 0x2c, 0x2e, 0x7, 0x7, 0x2, 0x2, 0x2d, 0x22, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 0x30, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 0x14, 
    0x2, 0x2, 0x33, 0x34, 0x7, 0x9, 0x2, 0x2, 0x34, 0x35, 0x5, 0x4, 0x3, 
    0x2, 0x35, 0x7, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x9, 0x4, 0x2, 0x2, 
    0x37, 0x9, 0x3, 0x2, 0x2, 0x2, 0x6, 0xf, 0x20, 0x2d, 0x2f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
