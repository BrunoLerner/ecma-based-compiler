%{
  #include<lexical.h>    
%}

%%
"array"               return ARRAY;
"boolean"             return BOOLEAN;
"break"               return BREAK;
"char"                return CHAR;
"continue"            return CONTINUE;
"do"                  return DO;
"else"                return ELSE;
"false"               return FALSE;
"function"            return FUNCTION;
"if"                  return IF;
"integer"             return INTEGER;
"string"              return STRING;
"struct"              return STRUCT;
"true"                return TRUE;
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
[1-9][0-9]*           return num;
\"[a-zA-Z]+\"         return str;
'.'                   return chr;
[a-zA-Z]+             return id;
[ \t\v\n\f]           /* ignore */ ;
.                     yyerror("opa, erro lexico!");

%%

int yywrap(void) {
  return 1;
}