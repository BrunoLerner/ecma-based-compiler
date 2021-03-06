#include <map>
#include <iostream>
// #include "./../includes/lexical.h"

using namespace std;

int currentLine = 1;
FILE *programToCompile;

t_token nextToken()
{
    t_token token;
    int tokenSecundario;

    while (isspace(nextChar))
    {
        nextChar = readChar();
    }
    if (isalpha(nextChar))
    {
        string text = "";

        do
        {
            text += nextChar;
            nextChar = readChar();
        } while (isalnum(nextChar) || nextChar == '_');

        token = searchKeyword(text);

        if (token == IDT)
            tokenSecundario = searchName(text);
    }
    else if (isdigit(nextChar))
    {
        string numeral = "";
        do
        {
            numeral += nextChar;
            nextChar = readChar();
        } while (isdigit(nextChar));

        token = NUMERAL;
        tokenSecundario = addIntConst(stoi(numeral));
    }
    else if (nextChar == '"')
    {
        string str;
        nextChar = readChar();
        do
        {
            str += nextChar;
            nextChar = readChar();
        } while (nextChar != '"');
        nextChar = readChar();
        token = STRINGVAL;
        tokenSecundario = addStringConst(str);
    }
    else if (nextChar == '\0')
    {
        return END;
    }
    else
    {
        switch (nextChar)
        {
        case '\'':
            nextChar = readChar();
            token = CHARACTER;
            tokenSecundario = addCharConst(nextChar);
            readChar();
            nextChar = readChar();
            break;

        case ':':
            nextChar = readChar();
            token = COLON;
            break;

        case ';':
            nextChar = readChar();
            token = SEMI_COLON;
            break;

        case ',':
            nextChar = readChar();
            token = COMMA;
            break;

        case '[':
            nextChar = readChar();
            token = LEFT_SQUARE;
            break;

        case ']':
            nextChar = readChar();
            token = RIGHT_SQUARE;
            break;

        case '{':
            nextChar = readChar();
            token = LEFT_BRACES;
            break;

        case '}':
            nextChar = readChar();
            token = RIGHT_BRACES;
            break;

        case '(':
            nextChar = readChar();
            token = LEFT_PARENTHESIS;
            break;

        case ')':
            nextChar = readChar();
            token = RIGHT_PARENTHESIS;
            break;

        case '&':
            nextChar = readChar();
            if (nextChar == '&')
            {
                token = AND;
            }
            else
            {
                token = UNKNOWN;
            }
            nextChar = readChar();
            break;

        case '|':
            nextChar = readChar();
            if (nextChar == '|')
            {
                token = OR;
            }
            else
            {
                token = UNKNOWN;
            }
            nextChar = readChar();
            break;

        case '*':
            nextChar = readChar();
            token = TIMES;
            break;

        case '/':
            nextChar = readChar();
            token = DIVIDE;
            break;

        case '.':
            nextChar = readChar();
            token = DOT;
            break;

        case '+':
            nextChar = readChar();
            if (nextChar == '+')
            {
                token = PLUS_PLUS;
                nextChar = readChar();
            }
            else
            {
                token = PLUS;
            }
            break;

        case '!':
            nextChar = readChar();
            if (nextChar == '=')
            {
                token = NOT_EQUAL;
                nextChar = readChar();
            }
            else
            {
                token = NOT;
            }
            break;

        case '=':
            nextChar = readChar();
            if (nextChar == '=')
            {
                token = EQUAL_EQUAL;
                nextChar = readChar();
            }
            else
            {
                token = EQUALS;
            }
            break;

        case '-':
            nextChar = readChar();
            if (nextChar == '-')
            {
                token = MINUS_MINUS;
                nextChar = readChar();
            }
            else
            {
                token = MINUS;
            }
            break;

        case '<':
            nextChar = readChar();
            if (nextChar == '=')
            {
                token = LESS_OR_EQUAL;
                nextChar = readChar();
            }
            else
            {
                token = LESS_THAN;
            }
            break;

        case '>':
            nextChar = readChar();
            if (nextChar == '=')
            {
                token = GREATER_OR_EQUAL;
                nextChar = readChar();
            }
            else
            {
                token = GREATER_THAN;
            }
            break;
        default:
            token = UNKNOWN;
        }
    }
    return token;
}

char readChar()
{
    char read = fgetc(programToCompile);
    if (read == '\n')
        currentLine++;
    if (read != EOF)
        return read;
    return '\0';
};

int addCharConst(char c)
{
    t_const *constToAdd = (t_const *)malloc(sizeof(t_const));
    constToAdd->_.cVal = c;
    vConsts[nNumConsts] = *constToAdd;
    nNumConsts++;
    return nNumConsts - 1;
};

int addIntConst(int n)
{
    t_const *constToAdd = (t_const *)malloc(sizeof(t_const));
    constToAdd->_.nVal = n;
    vConsts[nNumConsts] = *constToAdd;
    nNumConsts++;
    return nNumConsts - 1;
};

int addStringConst(string s)
{
    t_const *constToAdd = (t_const *)malloc(sizeof(t_const));
    constToAdd->_.sVal = new string();
    constToAdd->_.sVal = &s;
    vConsts[nNumConsts] = *constToAdd;
    nNumConsts++;
    return nNumConsts - 1;
};

char getCharConst(int n)
{
    return vConsts[n]._.cVal;
};

int getIntConst(int n)
{
    return vConsts[n]._.nVal;
};

string getStringConst(int n)
{
    return *(vConsts[n]._.sVal);
};

int searchName(string name)
{
    if (identifiers.count(name) == 0)
    {
        identifiers[name] = identifiers.size();
    }
    return identifiers[name];
};

t_token searchKeyword(string name)
{
    if (reserved.empty())
    {
        initReservedMap();
    }

    if (reserved.count(name))
    {
        return reserved[name];
    }

    // if it is not a reserved word, it is an identifier
    return IDT;
};
