TestCPP:
	happy -gca ParCPP.y
	alex -g LexCPP.x
	ghc --make TestCPP.hs -o TestCPP

lab2-testsuite:
	tar -xzf lab2-testsuite.tar.gz

test: typeChecker
	bash ./tests.sh auto

typeChecker: TestCPP lab2-testsuite
	ghc TypeCheck.hs -o TypeChecker

clean:
	-rm -f *.log *.aux *.hi *.o *.dvi

distclean: clean
	-rm -f DocCPP.* LexCPP.* ParCPP.* LayoutCPP.* SkelCPP.* PrintCPP.* TestCPP.* AbsCPP.* TestCPP ErrM.* SharedString.* ComposOp.* CPP.dtd XMLCPP.* Makefile*
	

