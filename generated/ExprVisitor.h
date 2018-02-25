
// Generated from Expr.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual antlrcpp::Any visitProg(ExprParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitInlineVarExpr(ExprParser::InlineVarExprContext *context) = 0;

    virtual antlrcpp::Any visitFactExpr(ExprParser::FactExprContext *context) = 0;

    virtual antlrcpp::Any visitUnaryPMExpr(ExprParser::UnaryPMExprContext *context) = 0;

    virtual antlrcpp::Any visitNumExpr(ExprParser::NumExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivModExpr(ExprParser::MulDivModExprContext *context) = 0;

    virtual antlrcpp::Any visitPowExpr(ExprParser::PowExprContext *context) = 0;

    virtual antlrcpp::Any visitParensExpr(ExprParser::ParensExprContext *context) = 0;

    virtual antlrcpp::Any visitVarExpr(ExprParser::VarExprContext *context) = 0;

    virtual antlrcpp::Any visitRoundExpr(ExprParser::RoundExprContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(ExprParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitVar(ExprParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitNum(ExprParser::NumContext *context) = 0;


};

