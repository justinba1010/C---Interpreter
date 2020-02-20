all:
	happy -gca ParCalc.y
	alex -g LexCalc.x
	ghc --make TestCalc.hs -o TestCalc
	ghc --make Calculator.hs -o Calculator

clean:
	-rm -f *.log *.aux *.hi *.o *.dvi
	-rm -f TestCalc Calculator

distclean: clean
	-rm -f DocCalc.* LexCalc.* ParCalc.* LayoutCalc.* SkelCalc.* PrintCalc.* TestCalc.* AbsCalc.* TestCalc ErrM.* SharedString.* ComposOp.* Calc.dtd XMLCalc.* Makefile*

