%{
  // #include"includes/lexical.h"  
  #include <stdio.h>
  #include"ecma.tab.h"
  extern int yylex();
  extern int line;
  extern int secondaryToken;  
%}

%%
"array"               return ARRAY;
"boolean"             return BOOLEAN;
"break"               return BREAK;
"char"                return CHAR;
"continue"            return CONTINUE;
"do"                  return DO;
"else"                return ELSE;
"false"               return const_false;
"function"            return FUNCTION;
"if"                  return IF;
"integer"             return INTEGER;
"string"              return STRING;
"struct"              return STRUCT;
"true"                return const_true;
"type"                return TYPE; 
"var"                 return VAR;
"while"               return WHILE;
"return"              return RETURN;
":"                   return COLON;
";"                   return SEMI_COLON;
","                   return COMMA;
"=="                  return EQUALS;  
"="                   return ASSIGN;
">="                  return GREATER_OR_EQUAL;
"<="                  return LESS_OR_EQUAL;
">"                   return GREATER_THAN;
"<"                   return LESS_THAN;
"("                   return LEFT_PARENTHESIS;
")"                   return RIGHT_PARENTHESIS;
"["                   return LEFT_SQUARE;
"]"                   return RIGHT_SQUARE;
"{"                   return LEFT_BRACES;
"}"                   return RIGHT_BRACES;
"."                   return DOT;
"!"                   return NOT;
[1-9][0-9]*           return const_number;
\"[a-zA-Z]+\"         return const_string;
'.'                   return const_char;
[a-zA-Z]+             return id;
[ \t\v\n\f]           /* ignore */ ;
.                     puts("opa, erro lexico!");

%%

int yywrap(void) {
  return 1;
}