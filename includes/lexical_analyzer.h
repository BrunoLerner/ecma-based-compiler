#include <bits/stdc++.h>
#define MAX_CONSTS 500

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
    UNKNOWN
} t_token;

typedef struct
{
    //0-char, 1-int, 2-string
    int type;
    union {
        char cVal;
        int nVal;
        char *sVal;
    } _;
} t_const;

t_const vConsts[MAX_CONSTS];
int nNumConsts = 0;
char nextChar = ‘\x20‘;

t_token searchKeyword(string name) {}
int searchName(string name) {}
int addCharConst(char c);
int addIntConst(int n);
int addStringConst(string s);
char getCharConst(int n);
int getIntConst(int n);
char *getStringConst(int n);
char readChar();
t_token nextToken();