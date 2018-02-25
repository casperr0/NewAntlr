
// Generated from Expr.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(ExprParser::ProgContext *ctx) = 0;
  virtual void exitProg(ExprParser::ProgContext *ctx) = 0;

  virtual void enterInlineVarExpr(ExprParser::InlineVarExprContext *ctx) = 0;
  virtual void exitInlineVarExpr(ExprParser::InlineVarExprContext *ctx) = 0;

  virtual void enterFactExpr(ExprParser::FactExprContext *ctx) = 0;
  virtual void exitFactExpr(ExprParser::FactExprContext *ctx) = 0;

  virtual void enterUnaryPMExpr(ExprParser::UnaryPMExprContext *ctx) = 0;
  virtual void exitUnaryPMExpr(ExprParser::UnaryPMExprContext *ctx) = 0;

  virtual void enterNumExpr(ExprParser::NumExprContext *ctx) = 0;
  virtual void exitNumExpr(ExprParser::NumExprContext *ctx) = 0;

  virtual void enterMulDivModExpr(ExprParser::MulDivModExprContext *ctx) = 0;
  virtual void exitMulDivModExpr(ExprParser::MulDivModExprContext *ctx) = 0;

  virtual void enterPowExpr(ExprParser::PowExprContext *ctx) = 0;
  virtual void exitPowExpr(ExprParser::PowExprContext *ctx) = 0;

  virtual void enterParensExpr(ExprParser::ParensExprContext *ctx) = 0;
  virtual void exitParensExpr(ExprParser::ParensExprContext *ctx) = 0;

  virtual void enterVarExpr(ExprParser::VarExprContext *ctx) = 0;
  virtual void exitVarExpr(ExprParser::VarExprContext *ctx) = 0;

  virtual void enterRoundExpr(ExprParser::RoundExprContext *ctx) = 0;
  virtual void exitRoundExpr(ExprParser::RoundExprContext *ctx) = 0;

  virtual void enterAddSubExpr(ExprParser::AddSubExprContext *ctx) = 0;
  virtual void exitAddSubExpr(ExprParser::AddSubExprContext *ctx) = 0;

  virtual void enterVar(ExprParser::VarContext *ctx) = 0;
  virtual void exitVar(ExprParser::VarContext *ctx) = 0;

  virtual void enterNum(ExprParser::NumContext *ctx) = 0;
  virtual void exitNum(ExprParser::NumContext *ctx) = 0;


};

