# Makefile

OBJS = bison.o lex.o escopo.o attributes.o codegen.o

CC = cc
CFLAGS = -g

compiler: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o compiler

lex.o: lex.c
	$(CC) $(CFLAGS) -c lex.c -o lex.o

escopo.o: includes/escopo.c
	$(CC) $(CFLAGS) -c includes/escopo.c -o escopo.o

attributes.o: includes/attributes.c
	$(CC) $(CFLAGS) -c includes/attributes.c -o attributes.o

codegen.o: includes/codegen.c
	$(CC) $(CFLAGS) -c includes/codegen.c -o codegen.o

lex.c: lexical.l 
	flex lexical.l
	cp lex.yy.c lex.c

bison.o: bison.c
	$(CC) $(CFLAGS) -c bison.c -o bison.o

bison.c: ecma-parser.y
	bison -d -v ecma-parser.y
	cp ecma-parser.tab.c bison.c
	cmp -s ecma-parser.tab.h tok.h || cp ecma-parser.tab.h tok.h

clean:
	rm -f *.o *~ lex.c lex.yy.c bison.c tok.h ecma-parser.tab.c ecma-parser.tab.h ecma-parser.output compiler attributes.o code.o

test:
	make clean;
	make;
	./compiler < programExamples/fatorial