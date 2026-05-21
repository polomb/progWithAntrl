grammar mygrammar;

prog: statement* EOF;

statement
    : peremDeclaration ';' # PeremCreating
    | assignment ';' # AssignSmth
    | ifStatement # IfStmt
    | whileStatement # WhileStmt
    | printStatement ';' # PrintStmt
    | expression ';' # ExprStmt
    ;

peremDeclaration
    : type ID ('=' expression)?
    ;

type
    : 'int'
    | 'double'
    ;

assignment
    : ID '=' expression
    ;

ifStatement
    : 'if' '(' expression ')' '{' statement* '}' ('else' '{' statement* '}')?
    ;

whileStatement
    : 'while' '(' expression ')' '{' statement* '}'
    ;

printStatement
    : 'print' '(' expression ')'
    ;

expression
    : logicalOr
    ;

logicalOr
    : logicalAnd ('||' logicalAnd)* # Or
    ;

logicalAnd
    : equality ('&&' equality)* # And
    ;

equality
    : comparison (('==' | '!=') comparison)* # Equal
    ;

comparison
    : addition (('<' | '>' | '<=' | '>=') addition)* # Compare
    ;

addition
    : multiplication (('+' | '-') multiplication)* # Add
    ;

multiplication
    : unary (('*' | '/') unary)* # Multiply
    ;

unary
    : ('+' | '-') unary
    | primary
    ;

primary
    : INT # IntPrimary
    | DOUBLE # DoublePrimary
    | ID # IdPrimary
    | '(' expression ')' # ExprPrimary
    ;

INT: [0-9]+;
DOUBLE: [0-9]+ '.' [0-9]+;
ID: [a-zA-Z_][a-zA-Z0-9_]*;
WS: [ \t\r\n]+ -> skip;
COMMENT: '//' ~[\r\n]* -> skip;