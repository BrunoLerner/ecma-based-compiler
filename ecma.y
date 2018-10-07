%{
    // declaracoes em C que auxiliam nas ações das regras de derivacao
    #include<stdio.h>
    #include<stdlib.h> 
    #include "./includes/helperFuncs.h"
    #include "./includes/pobject.h"  
    extern int yylex();
    extern int yyparse();
    extern FILE *yyin;
    
    void yyerror(const char *s);
    int main(int argc, char **argv){
      yyparse();
      return 0;
    } 
    pobject p, t, f, t1, t2;
%}

%token ARRAY BOOLEAN BREAK CHAR CONTINUE DO ELSE FALSE FUNCTION IF INTEGER OF STRING STRUCT TRUE TYPE VAR WHILE RETURN 
%token COLON SEMI_COLON COMMA EQUALS LEFT_SQUARE RIGHT_SQUARE LEFT_BRACES RIGHT_BRACES LEFT_PARENTHESIS RIGHT_PARENTHESIS AND OR LESS_THAN GREATER_THAN LESS_OR_EQUAL GREATER_OR_EQUAL NOT_EQUAL EQUAL_EQUAL PLUS PLUS_PLUS MINUS MINUS_MINUS TIMES DIVIDE DOT NOT 
%token CHARACTER NUMERAL STRINGVAL IDT ASSIGN
%token UNKNOWN END
%token chr num str id

%token <num> number
%token <id> identifier
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

%token <kind> NO_KIND_DEF_ VAR_ PARAM_ FUNCTION_ FIELD_ ARRAY_TYPE_ STRUCT_TYPE_ ALIAS_TYPE_ SCALAR_TYPE_  UNIVERSAL_
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

T : INTEGER {$<type>$ = TYPE_INTEGER}
  | CHAR    {$<type>$ = TYPE_CHAR}
  | BOOLEAN {$<type>$ = TYPE_BOOLEAN}
  | STRING  {$<type>$ = TYPE_STRING}
  | IDU     {$<type>$ = $<type>1};

NB : {
  NewBlock();
};
DT : TYPE IDD ASSIGN ARRAY LEFT_SQUARE NUM RIGHT_SQUARE OF T 
   | TYPE IDD ASSIGN STRUCT NB LEFT_BRACES DC RIGHT_BRACES {
     EndBlock();
   }
   | TYPE IDD ASSIGN T ;
DC : DC SEMI_COLON LI COLON T 
   | LI COLON T ;

DF : FUNCTION IDD NB LEFT_PARENTHESIS LP RIGHT_PARENTHESIS COLON T B {
  $<type>$ = $<type>7
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
IDD : id;
IDU : id;
/* TRUE: true {
	$<type>$ = pBool;
	$<val>$  = true;
};
FALSE: false {
	$<type>$ = pBool;
	$<val>$  = false;
}; */
CHR: chr {
	$<type>$ = pChar;
	$<pos>$  = tokenSecundario;
	$<val>$  = getCharConst(CHR.pos);
};
STR: str {
	$<type>$ = pString;
	$<pos>$ = tokenSecundario;
	$<val>$ = getStringConst(STR.pos);
};
NUM: num {
	$<type>$ = pInteger;
	$<pos>$  = tokenSecundario;
	$<val>$  = getIntConst(NUM.pos);
};
%%

void yyerror(const char *error) {
	fprintf(stderr,"error: %s\n",error);
}
 
int yywrap() {return 1;} 
  
int main(int argc, char **argv){
	yyparse();
	return 0;
} 