%{
    // declaracoes em C que auxiliam nas ações das regras de derivacao
    #include<stdio.h>
    #include<stdlib.h> 
    #include<string.h>
    #include "shared.h"
    #include "scope.h"
    #include "attributes.h"
    #define db(x) printf(#x);printf(": %d\n",x);
    #define MAX_NEST_LEVEL 50

    int secondaryToken;
    extern int yylex();
    extern int yyparse();
    extern FILE *yyin;
    void yyerror(const char *s);
    struct idCounter {
      char name[500];
      int count;
    } ids[1000];
    extern int idsCount;

    int searchName(char *name);
    int addName(char *name);
    int NewBlock(void);
    int EndBlock(void);
%}

%code requires{
#include "object.h"
#include "syntax.h"
#include "attributes.h"
}

%token ARRAY OF COLON SEMI_COLON STRUCT COMMA EQUALS LEFT_SQUARE RIGHT_SQUARE LEFT_BRACES RIGHT_BRACES LEFT_PARENTHESIS RIGHT_PARENTHESIS AND OR LESS_THAN GREATER_THAN LESS_OR_EQUAL GREATER_OR_EQUAL NOT_EQUAL EQUAL_EQUAL PLUS PLUS_PLUS MINUS MINUS_MINUS TIMES DIVIDE DOT NOT
%token TYPE RETURN ELSE BREAK WHILE VAR ASSIGN CONTINUE FUNCTION STRING IF BOOLEAN CHAR INTEGER DO
%token const_array const_char const_number const_string id const_true const_false
%token ERR_REDCL ERR_NO_DECL ERR_TYPE_EXPECTED ERR_BOOL_TYPE_EXPECTED ERR_TYPE_MISMATCH ERR_INVALID_TYPE ERR_KIND_NOT_STRUCT ERR_FIELD_NOT_DECL ERR_KIND_NOT_ARRAY ERR_INVALID_INDEX_TYPE ERR_KIND_NOT_VAR ERR_KIND_NOT_FUNCTION ERR_TOO_MANY_ARGS ERR_PARAM_TYPE ERR_TOO_FEW_ARGS ERR_RETURN_TYPE_MISMATCH
%union {
	int nont;
	union {
		struct {
			pobject obj;
			int name;
		} ID_;
		struct {
			pobject type;
		} T_,E_,L_,R_,TM_,F_,LV_;
		struct {
			pobject list;
		} LI_,DC_;
		struct{
			pobject list;
			int nSize;
		} LP_;
		struct{
			int val;
			pobject type;
		} BOOL_;
		struct {
			pobject type;
			int pos;
			union {
				int n;
				char c;
				char **s;
			} val;
		} CONST_;
		struct{
			pobject type;
			pobject param;
			int err;
		}MC_;
		struct{
			pobject type;
			pobject param;
			int err;
			int n;
		} LE_;
	}_;
}
%token <type> NT_TRUE NT_FALSE NT_CHR NT_STR NT_NUM MF MC
%token NO_KIND_DEF_ VAR_ PARAM_ FUNCTION_ FIELD_ ARRAY_TYPE_ STRUCT_TYPE_ ALIAS_TYPE_ SCALAR_TYPE_  UNIVERSAL_



%right "then" ELSE
%start P

%%
// P = Programa
// LDE = Lista de Declaracoes Externas
// DE = Declaracao Externa
// DF = Declaracao de Funcao
// DT = Declaracao de Tipo
//

P : LDE ;
LDE : LDE DE 
    | DE ;

DE : DF 
   | DT ;

T : INTEGER 
  | CHAR 
  | BOOLEAN 
  | STRING 
  | IDU;

NB : {
  NewBlock();
};
DT : TYPE IDD ASSIGN const_array LEFT_SQUARE NUM RIGHT_SQUARE OF T 
   | TYPE IDD ASSIGN STRUCT NB LEFT_BRACES DC RIGHT_BRACES {
     EndBlock();
   }
   | TYPE IDD ASSIGN T ;
DC : DC SEMI_COLON LI COLON T 
   | LI COLON T ;

DF : FUNCTION IDD NB LEFT_PARENTHESIS LP RIGHT_PARENTHESIS COLON T B {
  EndBlock();
};
LP : LP COMMA IDD COLON T 
   | IDD COLON T
   |  ;


B : LEFT_BRACES LDV LS RIGHT_BRACES
  | LEFT_BRACES LS RIGHT_BRACES ; 
LDV : LDV DV 
    | DV ;
LS : LS S 
   | S ;


DV : VAR LI COLON T SEMI_COLON ;
LI : LI COMMA IDD
   | IDD ;

S : IF LEFT_PARENTHESIS E RIGHT_PARENTHESIS S %prec "then"
  | IF LEFT_PARENTHESIS E RIGHT_PARENTHESIS S ELSE S
  | WHILE LEFT_PARENTHESIS E RIGHT_PARENTHESIS S 
  | DO S WHILE LEFT_PARENTHESIS E RIGHT_PARENTHESIS SEMI_COLON 
  | B 
  | LV ASSIGN E SEMI_COLON 
  | BREAK SEMI_COLON 
  | CONTINUE SEMI_COLON
  | RETURN E SEMI_COLON ;
  
E : E AND L 
  | E OR L 
  | L ;
L : L LESS_THAN R 
  | L GREATER_THAN R 
  | L LESS_OR_EQUAL R 
  | L GREATER_OR_EQUAL R 
  | L EQUALS R 
  | L NOT_EQUAL R 
  | R ;
R : R PLUS Y 
  | R MINUS Y 
  | Y ;
Y : Y TIMES F 
  | Y DIVIDE F 
  | F ;
F : LV 
  | PLUS_PLUS LV 
  | MINUS_MINUS LV 
  | LV PLUS_PLUS 
  | LV MINUS_MINUS 
  | LEFT_PARENTHESIS E RIGHT_PARENTHESIS 
  | IDU LEFT_PARENTHESIS LE RIGHT_PARENTHESIS 
  | MINUS F 
  | NOT 
  | TRUE 
  | FALSE
  | CHR
  | STR
  | NUM ;
LE : LE COMMA E
   | E ;
LV : LV DOT IDU
   | LV LEFT_SQUARE E RIGHT_SQUARE
   | IDU ;
IDD : id {
  db(secondaryToken);
};
IDU : id {
  char *name =ids[secondaryToken].name;
  // $<_.ID_.name>$ = name;
  printf("\n\n%s\n\n", ids[0].name);
  printf("\n\n%d\n\n", secondaryToken);
  if( searchName( name ) == -1 ) {
        addName(name);
  }
};
TRUE : const_true;
FALSE : const_false;
CHR : const_char;
STR : const_string;
NUM : const_number;
%%


int idsCount=0;

int searchName(char *name){
    int pos;
    for(pos=0;pos<idsCount;pos++){
        puts("---------------------------");
        printf("name: %s\n",name);
        printf("name: %s\n",ids[pos].name);
        puts("---------------------------");
        //if(strcmp(name,ids[pos].name) != 0){
        //    return pos;
        //}
    }
    puts("pasdasdasd \n");
    return -1;
}

int addName(char *name){
    int pos;
    for(pos=0;pos<idsCount;pos++){
        printf("addName: comparing %s with %s\n",name,ids[pos].name);
        if(strcmp(name,ids[pos].name) == 0){ 
            ids[pos].count++;
            printf("Found name! addName returning %d\n", pos);
            return pos;
        }
    }
    idsCount++;
    strcpy(ids[pos].name,name);
    ids[pos].count=1;
    printf("Did not find name! addName returning %d\n",pos);
    return pos;
}

pobject SymbolTable[MAX_NEST_LEVEL];
pobject SymbolTableLast[MAX_NEST_LEVEL];
int nCurrentLevel = -1;

int NewBlock(void) {
    SymbolTable[++nCurrentLevel] = NULL;
    SymbolTableLast[nCurrentLevel] = NULL;
    return nCurrentLevel;
}

int EndBlock(void) {
    return --nCurrentLevel;
}

void yyerror(const char *error) {
	fprintf(stderr,"error: %s\n",error);
}
 
int yywrap() {return 1;} 
  
int main(int argc, char **argv){
	yyparse();
	return 0;
} 