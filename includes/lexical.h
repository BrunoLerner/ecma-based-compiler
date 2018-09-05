#ifndef LEXICAL_H
#define LEXICAL_H
#define MAX_CONSTS 500
#include <string>
#include <map>
#include <iostream>

using namespace std;

typedef enum
{ // reserved words
    ARRAY,
    BOOLEAN,
    BREAK,
    CHAR,
    CONTINUE,
    DO,
    ELSE,
    FALSE,
    FUNCTION,
    IF,
    INTEGER,
    OF,
    STRING,
    STRUCT,
    TRUE,
    TYPE,
    VAR,
    WHILE,

    RETURN,

    // symbols
    COLON,
    SEMI_COLON,
    COMMA,
    EQUALS,
    LEFT_SQUARE,
    RIGHT_SQUARE,
    LEFT_BRACES,
    RIGHT_BRACES,
    LEFT_PARENTHESIS,
    RIGHT_PARENTHESIS,
    AND,
    OR,
    LESS_THAN,
    GREATER_THAN,
    LESS_OR_EQUAL,
    GREATER_OR_EQUAL,
    NOT_EQUAL,
    EQUAL_EQUAL,
    PLUS,
    PLUS_PLUS,
    MINUS,
    MINUS_MINUS,
    TIMES,
    DIVIDE,
    DOT,
    NOT,

    // regular tokens
    CHARACTER,
    NUMERAL,
    STRINGVAL,
    IDT,

    // unkown token
    UNKNOWN,
    END
} t_token;

map<string, t_token> reserved;
map<string, int> identifiers;

typedef struct
{
    //0-char, 1-int, 2-string
    int type;
    union {
        char cVal;
        int nVal;
        string *sVal;
    } _;
} t_const;

t_const vConsts[MAX_CONSTS];
int nNumConsts = 0;
char nextChar = '\x20';

t_token searchKeyword(string name);
int searchName(string name);
int addCharConst(char c);
int addIntConst(int n);
int addStringConst(string s);
char getCharConst(int n);
int getIntConst(int n);
string getStringConst(int n);
char readChar();
t_token nextToken();

void initReservedMap()
{
    reserved["array"] = ARRAY;
    reserved["boolean"] = BOOLEAN;
    reserved["break"] = BREAK;
    reserved["char"] = CHAR;
    reserved["continue"] = CONTINUE;
    reserved["do"] = DO;
    reserved["else"] = ELSE;
    reserved["false"] = FALSE;
    reserved["function"] = FUNCTION;
    reserved["if"] = IF;
    reserved["integer"] = INTEGER;
    reserved["of"] = OF;
    reserved["string"] = STRING;
    reserved["struct"] = STRUCT;
    reserved["true"] = TRUE;
    reserved["type"] = TYPE;
    reserved["var"] = VAR;
    reserved["while"] = WHILE;
    reserved["return"] = RETURN;
}
#endif