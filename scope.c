#include <stdlib.h>
#include <stdio.h>
#include "scope.h"

//TODO what is the max nest level
#define MAX_NEST_LEVEL 10

pobject SymbolTable[MAX_NEST_LEVEL];
pobject SymbolTableLast[MAX_NEST_LEVEL];
int nCurrentLevel = -1;

int NewBlock(void)
{
    SymbolTable[++nCurrentLevel] = NULL;
    SymbolTableLast[nCurrentLevel] = NULL;
    return nCurrentLevel;
}

int EndBlock(void)
{
    return --nCurrentLevel;
}