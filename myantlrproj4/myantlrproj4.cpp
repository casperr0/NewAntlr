#include <iostream>
#include <string>

#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include "ExprCalcVisitor.h"


int main()
{

	antlr4::ANTLRInputStream input = "-.5 - 2 \n"; //2^2^3 + [8.0/3]%2 + 2^3 + 0^5 + 0x1A \n";
	ExprLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	ExprParser parser(&tokens);

	antlr4::tree::ParseTree *tree = parser.prog();

	ExprCalcVisitor calc = ExprCalcVisitor();
	calc.visit(tree);
	std::wstring s = antlrcpp::s2ws(tree->toStringTree(&parser)) + L"\n";
	std::wcout << "Parse Tree: " << s << std::endl;

	return 0;
}
