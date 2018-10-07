%{
    // declaracoes em C que auxiliam nas ações das regras de derivacao
    void yyerror(char *s);
    #include<stdio.h>
    #include<stdlib.h>    

%}

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

DT : type IDD ASSIGN array LEFT_SQUARE NUM RIGHT_SQUARE OF T 
   | type IDD ASSIGN STRUCT NB LEFT_BRACES DC RIGHT_BRACES {
     EndBlock();
   }
   | type IDD ASSIGN T ;
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
TRUE: true {
	$<type>$ = pBool;
	$<val>$  = true;
};
FALSE: false {
	$<type>$ = pBool;
	$<val>$  = false;
};
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