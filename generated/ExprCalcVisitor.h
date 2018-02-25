#pragma once

#include <iostream>
#include <string>
#include <map>
#include <ctype.h> 

#include "antlr4-runtime.h"
#include "ExprBaseVisitor.h"



struct Value {
	enum { INTEGER, FLOAT } type;

	union {
		int i;
		float f;
	};

	std::string typeStr() const;

	operator float() const;
	operator int() const;

	friend Value MakeDoubleFunction(const Value &x, const Value &y, int num);
	friend Value Neg(const Value &x);
	friend Value ToInt(const Value &x);
	friend Value Fact(const Value& x);
	friend Value operator-(const Value &x);

	friend Value operator+(const Value &x, const Value &y);
	friend Value operator-(const Value &x, const Value &y);
	friend Value operator*(const Value &x, const Value &y);
	friend Value operator/(const Value &x, const Value &y);
	friend Value operator%(const Value &x, const Value &y);
	friend Value operator^(const Value &x, const Value &y);

	friend std::ostream &operator<<(std::ostream &out, const Value &x);

		
};

class ExprCalcVisitor : public ExprBaseVisitor {
private:

    std::map<std::string, Value> vars;

public:

    virtual antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override
    {
        auto strs = ctx->expr();

        for (auto &it : strs) {
            Value v = visit(it);
			std::cout << "----------------" << std::endl;
			std::cout << "OUTPUT:" << std::endl;			
		    std::cout << "----------------" << std::endl;
            std::cout << "Type: " << v.typeStr() << std::endl;
            std::cout << "Num: " << v << std::endl << std::endl;
			std::cout << "----------------" << std::endl;
        }

        return 0;
    }

    virtual antlrcpp::Any visitUnaryPMExpr(ExprParser::UnaryPMExprContext *ctx) override
    {
        Value r = visit(ctx->expr());
		
        switch (ctx->op->getType()) {
            case ExprParser::SUB:
                return -r;

            default:
                return r;
        }
    }


    virtual antlrcpp::Any visitFactExpr(ExprParser::FactExprContext *ctx) override
    {
        Value l = visit(ctx->expr());
        return Fact(l);
    }

    virtual antlrcpp::Any visitPowExpr(ExprParser::PowExprContext *ctx) override
    {
		
        Value base = visit(ctx->expr(0));
        Value inpow  = visit(ctx->expr(1));

        return base^inpow;
    }

    virtual antlrcpp::Any visitMulDivModExpr(ExprParser::MulDivModExprContext *ctx) override
    {
        Value l = visit(ctx->expr(0));
        Value r = visit(ctx->expr(1));

        switch (ctx->op->getType()) {
            case ExprParser::DIV:
                return l / r;

            case ExprParser::MOD:
                return l % r;

            default:
                return l * r;
        }
    }

    virtual antlrcpp::Any visitAddSubExpr(ExprParser::AddSubExprContext *ctx) override
    {
        Value l = visit(ctx->expr(0));
        Value r = visit(ctx->expr(1));

		if (l.type == Value::FLOAT && r.type == Value::INTEGER) {
			r.type = Value::FLOAT;
			r.f = r.i;
		}
        switch (ctx->op->getType()) {
            case ExprParser::SUB:
                return l - r;

            default:
                return l + r;
        }
    }

    virtual antlrcpp::Any visitParensExpr(ExprParser::ParensExprContext *ctx) override
    {
        return visit(ctx->expr());
    }
	

	virtual antlrcpp::Any visitRoundExpr(ExprParser::RoundExprContext *ctx) override
	{
		
		return ToInt((visit(ctx->expr())));
	}
	
    virtual antlrcpp::Any visitNumExpr(ExprParser::NumExprContext *ctx) override
    {
        return visit(ctx->num());
    }

    virtual antlrcpp::Any visitNum(ExprParser::NumContext *ctx) override
    {
        std::string valstr = ctx->getText();
        Value val;
		std::istringstream stream(valstr);
		int m, n, i;
		std::size_t num;
		float first_digit;
		int second_digit;
		int len = valstr.length();	
		bool before_e = true;
		int sign;
		std::string  before_string, after_string;
        switch (ctx->type->getType()) {
            case ExprParser::INTEGER:
                val.type = Value::INTEGER;
                val.i = std::stoi(valstr);
                break;

            case ExprParser::FLOAT:
                val.type = Value::FLOAT;
                val.f = std::stod(valstr);
                break;

			case ExprParser::HEX_NUMBER:
				val.i = 0;
				
				for (int i = 2; i < len; i++) {
					char s = tolower(valstr[i]);
					int n = len - i - 1;
					int d = 16;
					for (int l = 0; l <= n; l++) {
						if (l == 0) {
							d = 1;
						}
						else {
							d = d * 16;
						}
					}

					int number;
					if (s == 'a') { number = 10; }
					else if (s == 'b') { number = 11; }
					else if (s == 'c') { number = 12; }
					else if (s == 'd') { number = 13; }
					else if (s == 'e') { number = 14; }
					else if (s == 'f') { number = 15; }
					else { number = s - '0'; }

					number = number * d;
					val.i = val.i + number;
				}
		     
				val.type = Value::INTEGER;
				
				break;
				
			case ExprParser::EXP_NUMBER:
				std::string::size_type sz;
				for (int i = 0; i < len; i++) {
					char s = tolower(valstr[i]);
					if (s == 'e') {
						before_e = false;
					}
					else if (s == '-') {
						sign = -1;
					}
					else if (s == '+') {
						sign = 1;
					}
					else
					{
						if (before_e == true) {
							before_string += s;
						}
						else {
							after_string += s;
						}
					}
				}				
				val.type = Value::FLOAT;
				first_digit = std::stof(before_string, &sz);
				second_digit = std::stod(after_string);
				val.f = first_digit*pow(10,second_digit*sign);			
				break;			
            default:
                val.type = Value::INTEGER;
                val.i = 0;
        }

        return val;
    }

    virtual antlrcpp::Any visitVar(ExprParser::VarContext *ctx) override
    {
        Value val = visit(ctx->expr());
        std::string name = ctx->NAME()->getText();

        vars[name] = val;

        std::cout << "Value is " << name << " -- >>" << val << std::endl;
        return val;
    }

    virtual antlrcpp::Any visitVarExpr(ExprParser::VarExprContext *ctx) override
    {
        std::string name = ctx->NAME()->getText();
        auto query = vars.find(name);

        Value result;

        if (query != vars.end())
            result = query->second;
        else {
            result.type = Value::INTEGER;
            result.i = 0;
        }

        return result;
    }
};
