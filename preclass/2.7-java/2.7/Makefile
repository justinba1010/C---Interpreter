JAVAC=javac
JAVAC_FLAGS=-sourcepath .
JAVA=java
JAVA_FLAGS=
CUP=java_cup.Main
CUPFLAGS=-nopositions -expect 100
JLEX=JLex.Main
all: test
test: absyn Calc/Yylex.class Calc/PrettyPrinter.class Calc/Test.class Calc/ComposVisitor.class Calc/AbstractVisitor.class Calc/FoldVisitor.class Calc/AllVisitor.class Calc/parser.class Calc/sym.class Calc/Test.class Calculator.class

.PHONY: absyn


%.class: %.java
	${JAVAC} ${JAVAC_FLAGS} $^

absyn: Calc/Absyn/Exp.java Calc/Absyn/ESqrt.java Calc/Absyn/EAdd.java Calc/Absyn/ESub.java Calc/Absyn/EMul.java Calc/Absyn/EDiv.java Calc/Absyn/EInt.java
	${JAVAC} ${JAVAC_FLAGS} $^

Calc/Yylex.java: Calc/Yylex
	${JAVA} ${JAVA_FLAGS} ${JLEX} Calc/Yylex

Calc/sym.java Calc/parser.java: Calc/Calc.cup
	${JAVA} ${JAVA_FLAGS} ${CUP} ${CUPFLAGS} Calc/Calc.cup
	mv sym.java parser.java Calc/

Calc/Yylex.class: Calc/Yylex.java Calc/sym.java

Calc/sym.class: Calc/sym.java

Calc/parser.class: Calc/parser.java Calc/sym.java

Calc/PrettyPrinter.class: Calc/PrettyPrinter.java

clean:
	rm -f Calc/Absyn/*.class Calc/*.class Calculator.class

distclean: vclean

vclean:
	 rm -f Calc/Absyn/Exp.java Calc/Absyn/ESqrt.java Calc/Absyn/EAdd.java Calc/Absyn/ESub.java Calc/Absyn/EMul.java Calc/Absyn/EDiv.java Calc/Absyn/EInt.java Calc/Absyn/Exp.class Calc/Absyn/ESqrt.class Calc/Absyn/EAdd.class Calc/Absyn/ESub.class Calc/Absyn/EMul.class Calc/Absyn/EDiv.class Calc/Absyn/EInt.class
	 rm -f Calc/Absyn/*.class
	 rmdir Calc/Absyn/
	 rm -f Calc/Yylex Calc/Calc.cup Calc/Yylex.java Calc/VisitSkel.java Calc/ComposVisitor.java Calc/AbstractVisitor.java Calc/FoldVisitor.java Calc/AllVisitor.java Calc/PrettyPrinter.java Calc/Skeleton.java Calc/Test.java Calc/sym.java Calc/parser.java Calc/*.class
	rm -f Makefile
	rmdir -p Calc/

