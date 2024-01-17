%{
#include <stdio.h>
#include <stdlib.h>

int yyerror(char *s);

#define YYDEBUG 1
%}

%token DECIDEDACA;
%token DACANU;
%token SI;
%token SCRIE;
%token CITESTE;
%token APEL;
%token CATTIMP;
%token PENTRU;
%token INT;
%token FLOAT;
%token LONG;
%token DOUBLE;
%token CHAR;
%token STRING;
%token BOOL;
%token ARRAY;
%token LOCAL;
%token DEFINESTETU;
%token FUNCTIE;

%token PLUS;
%token MINUS;
%token TIMES;
%token DIV;
%token MOD;
%token RDIV;
%token EQUAL;
%token NOTEQUAL;
%token LESS;
%token BIGGER;
%token LESSEQUAL;
%token BIGGEREQUAL;
%token EGALITY;
%token TEGALITY;
%token PLUSPLUS;
%token MINUSMINUS;

%token OPEN;
%token CLOSE;
%token BRACKETOPEN;
%token BRACKETCLOSE;
%token SQBRACKETOPEN;
%token SQBRACKETCLOSE;
%token DOT;
%token ARROW;
%token STAR;
%token QUOTES;
%token COMMA;
%token SEMICOLON;

%token IDENTIFIER;
%token INTCONSTANT;
%token STRINGCONSTANT;

%start program

%%

program : statementList {printf("program : statementList\n");}
	;
statementList : statement DOT statementList {printf("statementList : statement . statementList\n");}
	      | statement DOT {printf("statementList : statement .\n");}
	      ;
statement : declaration {printf("statement : declaration\n");}
	  | assignmentStatement {printf("statement : assignmentStatement\n");}
          | ifStatement {printf("statement : ifStatement\n");}
 	  | whileStatement {printf("statement : whileStatement\n");}
	  | function {printf("statement : function\n");}
	  | callStatement {printf("statement : callStatement\n");}
	  | inputStatement {printf("statement : inputStatement\n");}
	  | outputStatement {printf("statement : outputStatement\n");}
	  ;
declaration : type IDENTIFIER COMMA declaration {printf("declaration : type IDENTIFIER , declaration\n");}
	    | type IDENTIFIER {printf("declaration : type IDENTIFIER\n");}
	    | IDENTIFIER COMMA declaration {printf("declaration : IDENTIFIER ,\n");}
	    | IDENTIFIER {printf("declaration : IDENTIFIER\n");}
            ;
type : simpleTypes {printf("type : simpleTypes\n");}
     | arrayTypes {printf("type : arrayTypes\n");}
     | userDefinedTypes {printf("type : userDefinedTypes\n");}
     ;
simpleTypes : INT {printf("simpleTypes : INT\n");}
	    | FLOAT {printf("simpleTypes : FLOAT\n");}
	    | LONG {printf("simpleTypes : LONG\n");}
	    | DOUBLE {printf("simpleTypes : DOUBLE\n");}
	    | CHAR {printf("simpleTypes : CHAR\n");}
	    | STRING {printf("simpleTypes : STRING\n");}
	    | BOOL {printf("simpleTypes : BOOL\n");}
	    | LOCAL INT {printf("simpleTypes : LOCAL INT\n");}
	    | LOCAL FLOAT {printf("simpleTypes : LOCAL FLOAT\n");}
	    | LOCAL LONG {printf("simpleTypes : LOCAL LONG\n");}
	    | LOCAL DOUBLE {printf("simpleTypes : LOCAL DOUBLE\n");}
	    | LOCAL CHAR {printf("simpleTypes : LOCAL CHAR\n");}
	    | LOCAL STRING {printf("simpleTypes : LOCAL STRING\n");}
	    | LOCAL BOOL {printf("simpleTypes : LOCAL BOOL\n");}
	    ;
arrayTypes : ARRAY {printf("arrayTypes : ARRAY\n");}
	   | LOCAL ARRAY {printf("arrayTypes : LOCAL ARRAY\n");}
	   ;
userDefinedTypes : DEFINESTETU IDENTIFIER DOT {printf("userDefinedTypes : definesteTu IDENTIFIER .\n");}
	         ;
assignmentStatement : type IDENTIFIER EQUAL expression {printf("assignmentStatement : type IDENTIFIER = expression\n");}
		    | type IDENTIFIER EQUAL inputStatement {printf("assignmentStatement : type IDENTIFIER = inputStatement\n");}
		    | type IDENTIFIER EQUAL IDENTIFIER {printf("assignmentStatement : type IDENTIFIER = IDENTIFIER\n");}
		    | type IDENTIFIER EQUAL STRINGCONSTANT {printf("assignmentStatement : type IDENTIFIER = STRINGCONSTANT\n");}
		    | type IDENTIFIER EQUAL INTCONSTANT {printf("assignmentStatement : type IDENTIFIER = INTCONSTANT\n");}
		    | IDENTIFIER EQUAL expression {printf("assignmnentStatement : IDENTIFIER = expression\n");}
		    | IDENTIFIER EQUAL arrayStatement {printf("assignmnentStatement : IDENTIFIER = arrayStatement\n");}
		    ;
expression : expression PLUS term {printf("expression : expression + term\n");}
	   | expression MINUS term {printf("expression : expression - term\n");}
	   | term {printf("expression : term\n");}
	   ;
term : term TIMES factor {printf("term : term * factor\n");}
     | term DIV factor {printf("term : term / factor\n");}
     | term MOD factor {printf("term : term % factor\n");}
     | term RDIV factor {printf("term : term // factor\n");}
     | factor {printf("term : factor\n");}
     ;
factor : OPEN expression CLOSE {printf("factor : (expression)\n");}
       | IDENTIFIER {printf("factor : IDENTIFIER\n");}
       | INTCONSTANT {printf("factor : INTCONSTANT\n");}
       | STRINGCONSTANT {printf("factor : STRINGCONSTANT\n");}
       ;
arrayStatement :  SQBRACKETOPEN SQBRACKETCLOSE {printf("arrayStatement : []\n");}
	       |  SQBRACKETOPEN expressionList SQBRACKETCLOSE {printf("arrayStatement : [ExpressionList]\n");}
	       ;
expressionList : expression COMMA expressionList {printf("expressionList : expression,expressionList\n");}
	       | expression {printf("expressionList : expression\n");}
	       ;
ifStatement : DECIDEDACA SQBRACKETOPEN condition SQBRACKETCLOSE ARROW BRACKETOPEN statementList BRACKETCLOSE {printf("ifStatement : decideDaca [condition] -> {statementList} \n");}
	    | DECIDEDACA SQBRACKETOPEN condition SQBRACKETCLOSE ARROW BRACKETOPEN statementList BRACKETCLOSE DACANU ARROW BRACKETOPEN statementList BRACKETCLOSE {printf("ifStatement : decideDaca [condition] -> {statementList} dacaNU {statementlist}\n");}
	    ;
whileStatement : CATTIMP OPEN condition CLOSE BRACKETOPEN statementList BRACKETCLOSE {printf("whileStatement : catTimp (condition) {statementList}\n");}
	       ;
function : FUNCTIE IDENTIFIER OPEN declaration CLOSE BRACKETOPEN statementList BRACKETCLOSE {printf("function : functie IDENTIFIER (declaration) {statementList}\n");}
	 ;
callStatement : APEL IDENTIFIER OPEN declaration CLOSE{printf("callStatement : apel IDENTIFIER (declaration)\n");}
	      ;
inputStatement : CITESTE OPEN STRINGCONSTANT CLOSE {printf("inputStatement : citeste (STRINGCONSTANT)\n");}
	       ;
outputStatement : SCRIE OPEN STRINGCONSTANT SEMICOLON expressionList CLOSE {printf("scrie (STRINGCONSTANT ; expressionList)\n");}
	        ;
condition : expression relation expression  {printf("condition : expression relation expression\n");}
	  | condition SI condition {printf("condition: condition si condition\n");}
	  ;
relation : NOTEQUAL {printf("relation : !=\n");}
	 | LESS {printf("relation : <\n");}
	 | BIGGER {printf("relation : >\n");}
	 | LESSEQUAL {printf("relation : <=\n");}
	 | BIGGEREQUAL {printf("relation : >=\n");}
	 | EGALITY {printf("relation : ==\n");}
	 | TEGALITY {printf("relation : ===\n");}
	 | PLUSPLUS {printf("relation : ++\n");}
	 | MINUSMINUS {printf("relation : --\n");}
	 ;
%%
int yyerror(char *s) {
    printf("Error: %s", s);
}

extern FILE *yyin;

int main(int argc, char** argv) {
    if (argc > 1) 
        yyin = fopen(argv[1], "r");
    if (!yyparse()) 
        fprintf(stderr, "\tOK\n");
}













