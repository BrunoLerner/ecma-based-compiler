#ifndef CODEGEN_H
#define CODEGEN_H

void generateCode(char *code, int num, ...);

extern int functionNumber;
int getFunctionNumber();

extern int constantNumber;
int getConstantNumber();

extern int checkpoint;
int getCheckpoint();

#endif