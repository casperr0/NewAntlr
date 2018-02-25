grammar Expr;

prog: (expr NEWLINE)*;

expr: '(' expr ')'                      #ParensExpr
    |'[' expr ']'                       #RoundExpr
    | expr '!'                          #FactExpr
    | <assoc=right> expr '^' expr       #PowExpr
    | op=('+'|'-') expr                 #UnaryPMExpr
    | expr op=('*'|'/'|'%') expr        #MulDivModExpr
    | expr op=('+'|'-') expr            #AddSubExpr
    | var                               #InlineVarExpr
    | num                               #NumExpr
    | NAME                              #VarExpr
    
;

var: NAME '=' expr;
num: type=(INTEGER | FLOAT | HEX_NUMBER | EXP_NUMBER);

MUL: '*';
DIV: '/';
MOD: '%';
ADD: '+';
SUB: '-';

HEX_NUMBER
: '0' 'x' HEX_DIGIT+;

INTEGER
: ('-')? DIGIT+;

FLOAT
: ('-')? DIGIT+ '.' DIGIT+ | ('-')? '.' DIGIT+;

EXP_NUMBER
: EXP_DIGIT ('E' | 'e') ('+' | '-') EXP_DIGIT;

fragment
HEX_DIGIT : ('0'..'9'|'a'..'f'|'A'..'F') ;

fragment
DIGIT   :   ('0'..'9');

fragment
EXP_DIGIT   :   ('0'..'9')+ | ('0'..'9')+ '.' ('0'..'9')+;

fragment Tab :
 '\t';

fragment Space :
 ' ';

COMMENT : '#' ~('\n'|'\r')*;
  
NAME: [a-zA-Z]+;


NEWLINE: [\r\n]+;

WS: (Space|Tab) + -> skip;
