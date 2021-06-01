CC = gcc
CCFLAGS = -g -W -Wall

FLEX = flex
FLEX_OPTS = -PCPP

BISON = bison
BISON_OPTS = -t -pCPP

OBJS = Absyn.o Lexer.o Parser.o Printer.o

.PHONY : clean distclean

all : TestCPP

clean :
	rm -f *.o TestCPP CPP.aux CPP.log CPP.pdf CPP.dvi CPP.ps CPP

distclean : clean
	rm -f Absyn.h Absyn.c Test.c Parser.c Parser.h Lexer.c Skeleton.c Skeleton.h Printer.c Printer.h Makefile CPP.l CPP.y CPP.tex

TestCPP : ${OBJS} Test.o
	@echo "Linking TestCPP..."
	${CC} ${CCFLAGS} ${OBJS} Test.o -o TestCPP

Absyn.o : Absyn.c Absyn.h
	${CC} ${CCFLAGS} -c Absyn.c

Lexer.c : CPP.l
	${FLEX} ${FLEX_OPTS} -oLexer.c CPP.l

Parser.c : CPP.y
	${BISON} ${BISON_OPTS} CPP.y -o Parser.c

Lexer.o : Lexer.c Parser.h
	${CC} ${CCFLAGS} -c Lexer.c

Parser.o : Parser.c Absyn.h
	${CC} ${CCFLAGS} -c Parser.c

Printer.o : Printer.c Printer.h Absyn.h
	${CC} ${CCFLAGS} -c Printer.c

Test.o : Test.c Parser.h Printer.h Absyn.h
	${CC} ${CCFLAGS} -c Test.c
