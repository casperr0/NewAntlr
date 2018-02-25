
// Generated from Expr.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "ExprListener.h"


/**
 * This class provides an empty implementation of ExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprBaseListener : public ExprListener {
public:

  virtual void enterProg(ExprParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(ExprParser::ProgContext * /*ctx*/) override { }

  virtual void enterInlineVarExpr(ExprParser::InlineVarExprContext * /*ctx*/) override { }
  virtual void exitInlineVarExpr(ExprParser::InlineVarExprContext * /*ctx*/) override { }

  virtual void enterFactExpr(ExprParser::FactExprContext * /*ctx*/) override { }
  virtual void exitFactExpr(ExprParser::FactExprContext * /*ctx*/) override { }

  virtual void enterUnaryPMExpr(ExprParser::UnaryPMExprContext * /*ctx*/) override { }
  virtual void exitUnaryPMExpr(ExprParser::UnaryPMExprContext * /*ctx*/) override { }

  virtual void enterNumExpr(ExprParser::NumExprContext * /*ctx*/) override { }
  virtual void exitNumExpr(ExprParser::NumExprContext * /*ctx*/) override { }

  virtual void enterMulDivModExpr(ExprParser::MulDivModExprContext * /*ctx*/) override { }
  virtual void exitMulDivModExpr(ExprParser::MulDivModExprContext * /*ctx*/) override { }

  virtual void enterPowExpr(ExprParser::PowExprContext * /*ctx*/) override { }
  virtual void exitPowExpr(ExprParser::PowExprContext * /*ctx*/) override { }

  virtual void enterParensExpr(ExprParser::ParensExprContext * /*ctx*/) override { }
  virtual void exitParensExpr(ExprParser::ParensExprContext * /*ctx*/) override { }

  virtual void enterVarExpr(ExprParser::VarExprContext * /*ctx*/) override { }
  virtual void exitVarExpr(ExprParser::VarExprContext * /*ctx*/) override { }

  virtual void enterRoundExpr(ExprParser::RoundExprContext * /*ctx*/) override { }
  virtual void exitRoundExpr(ExprParser::RoundExprContext * /*ctx*/) override { }

  virtual void enterAddSubExpr(ExprParser::AddSubExprContext * /*ctx*/) override { }
  virtual void exitAddSubExpr(ExprParser::AddSubExprContext * /*ctx*/) override { }

  virtual void enterVar(ExprParser::VarContext * /*ctx*/) override { }
  virtual void exitVar(ExprParser::VarContext * /*ctx*/) override { }

  virtual void enterNum(ExprParser::NumContext * /*ctx*/) override { }
  virtual void exitNum(ExprParser::NumContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

