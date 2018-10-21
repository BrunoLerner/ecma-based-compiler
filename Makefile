# Makefile

OBJS = bison.o lex.o scope.o attributes.o codegen.o

CC = cc
CFLAGS = -g

simple_script_language: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o simple_script_language

lex.o: lex.c
	$(CC) $(CFLAGS) -c lex.c -o lex.o

scope.o: includes/scope.c
	$(CC) $(CFLAGS) -c includes/scope.c -o scope.o

attributes.o: includes/attributes.c
	$(CC) $(CFLAGS) -c includes/attributes.c -o attributes.o

code.o: includes/codegen.c
	$(CC) $(CFLAGS) -c includes/codegen.c -o codegen.o

lex.c: lexical.l 
	flex lexical.l
	cp lex.yy.c lex.c

bison.o: bison.c
	$(CC) $(CFLAGS) -c bison.c -o bison.o

bison.c: parser.y
	bison -d -v parser.y
	cp parser.tab.c bison.c
	cmp -s parser.tab.h tok.h || cp parser.tab.h tok.h

clean:
	rm -f *.o *~ lex.c lex.yy.c bison.c tok.h parser.tab.c parser.tab.h parser.output simple_script_language attributes.o code.o
