#include "ExprCalcVisitor.h"

#include <iostream>
#include <string>
#include <functional>

#include <cmath>

#define ERR_FACTORIAL 2
#define ERR_FACTORIAL_MESSAGE "Factorial cannot be lower then ZERO or FLOAT/n"
#define ERR_POW 3
#define ERR_POW_MESSAGE "Different first and second args /n"
#define ERR_MOD 4
#define ERR_MOD_MESSAGE "unable to use FLOAT in %/n"

std::string Value::typeStr() const
{
	
	if (type == INTEGER)
		return "INTEGER";

	else if (type == FLOAT)
		return "FLOAT";

	else
		return "Unable to identify";
}

std::ostream &operator<<(std::ostream &out, const Value &x)
{
	if (x.type == Value::INTEGER)
	{
		out << x.i;
	}
	else if (x.type == Value::FLOAT)
	{  
	    out << std::fixed << std::setprecision(2) << x.f;		
	}
	else
	{
		out << "Unable to identify";
	}

	return out;
}

Value::operator float() const
{
	return type == FLOAT ? f : (float)i;
}

Value::operator int() const
{
	return type == INTEGER ? i : (float)f;
}


Value ToInt(const Value& x)
{
	Value result;
	result.type = Value::INTEGER;
	if ((int)x.f + 0.5 < x.f) {
		result.i = (int)x.f + 1;
	}
	else
	{
		result.i = (int)x.f;
	}
	return result;
}

Value Fact(const Value &x)
{
	bool err =
		(x.type == Value::INTEGER && x.i < 0)
		|| (x.type == Value::FLOAT);

	if (err)
	{
		std::cout << ERR_FACTORIAL_MESSAGE;
		exit(ERR_FACTORIAL);
	}
	Value result;
	result.type = x.type;
	if (x.i < 0) {
		result.i = 0;
		return result;
	}
	if (x.i == 0) {
		result.i = 1;
		return result;
	}
	else {
		result.i = x.i - 1;
		return  x * Fact(result); // делаем рекурсию.
	}
}



// шаблон для минуса
Value Neg(const Value& a) {
	Value result;
	result.type = a.type;
	switch (a.type) {
	case Value::INTEGER:
		result.i = a.i*(-1);
		break;

	case Value::FLOAT:
		result.f = a.f*(-1);
		break;
	}
	return result;
}
// шаблоны для сложения умножения деления и вычитания 
template <class Type>
Type plus(const Type a, const Type b) {
	return (a + b);
}

template <class Type>
Type minus(const Type a, const Type b) {
	return (a - b);
}

template <class Type>
Type multiply(const Type a, const Type b) {
	return (a * b);
}

template <class Type>
Type divide(const Type a, const Type b) {
	return (a / b);
}

Value  MakeDoubleFunction(const Value &x, const Value &y, int num)
{
	Value result;
	//std::cout << num << std::endl;
	if (x.type == Value::FLOAT || y.type == Value::FLOAT) {
		result.type = Value::FLOAT;
		float new_x = (float)x;
		float new_y = (float)y;
		if (num == 1) {
			result.f = plus(new_x, new_y);
		}
		else if (num == 2){
			result.f = minus(new_x, new_y);
		}
		else if (num == 3) {
			result.f = multiply(new_x, new_y);
		}
		else if (num == 4) {
			result.f = divide(new_x, new_y);
		}
	}
	else {
		result.type = Value::INTEGER;
		int new_x = x.i;
		int new_y = y.i;
		if (num == 1) {
			result.i = plus(new_x, new_y);
		}
		else if (num == 2) {
			result.i = minus(new_x, new_y);
		}
		else if (num == 3) {
			result.i = multiply(new_x, new_y);
		}
		else if (num == 4) {
			result.i = divide(new_x, new_y);
		}
	}
	return result;
}


Value operator-(const Value &x)
{
	return  Neg(x);
}

Value operator+(const Value &x, const Value &y)
{
	return MakeDoubleFunction(x,y,1);
}

Value operator-(const Value &x, const Value &y)
{
	return  MakeDoubleFunction(x, y, 2); 
}

Value operator*(const Value &x, const Value &y)
{
	return  MakeDoubleFunction(x, y, 3);
}

Value operator/(const Value &x, const Value &y)
{
	return  MakeDoubleFunction(x, y, 4);
}

Value operator^(const Value &x, const Value &y)
{
	bool err =	((x.type == Value::INTEGER && y.type == Value::FLOAT) ||
		(x.type == Value::FLOAT && y.type == Value::INTEGER));
	if (err)
	{
		std::cout << ERR_POW_MESSAGE;
		exit(ERR_POW);
	}
	Value result;
	if (x.type == Value::FLOAT && y.type == Value::FLOAT || y.i < 0) {
		result.type = Value::FLOAT;
		result.f = pow(x.f, y.f);
	}
	else {
		result.type = Value::INTEGER;
		result.i = pow(x.i, y.i);
	}
	return result;
}

Value operator%(const Value &x, const Value &y)
{
	if (x.type == Value::FLOAT || y.type == Value::FLOAT)
	{
		std::cout << ERR_MOD_MESSAGE;
		exit(ERR_MOD);
	}
	Value result;
	result.type = Value::INTEGER;
	int different = x.i / y.i;
	result.i = x.i - y.i*different;
	return result;
}
