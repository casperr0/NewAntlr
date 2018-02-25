
// Generated from Expr.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInlineVarExpr(ExprParser::InlineVarExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFactExpr(ExprParser::FactExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryPMExpr(ExprParser::UnaryPMExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumExpr(ExprParser::NumExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivModExpr(ExprParser::MulDivModExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPowExpr(ExprParser::PowExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParensExpr(ExprParser::ParensExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarExpr(ExprParser::VarExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRoundExpr(ExprParser::RoundExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubExpr(ExprParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar(ExprParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNum(ExprParser::NumContext *ctx) override {
    return visitChildren(ctx);
  }


};

