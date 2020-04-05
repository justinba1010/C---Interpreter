all:
	happy -gca ParCPP.y
	alex -g LexCPP.x
	ghc --make TestCPP.hs -o TestCPP

typeCheck: all
	ghc TypeCheck.hs -o TypeChecker

clean:
	-rm -f *.log *.aux *.hi *.o *.dvi

distclean: clean
	-rm -f DocCPP.* LexCPP.* ParCPP.* LayoutCPP.* SkelCPP.* PrintCPP.* TestCPP.* AbsCPP.* TestCPP ErrM.* SharedString.* ComposOp.* CPP.dtd XMLCPP.* Makefile*
	

