all:
	happy -gca ParC.y
	alex -g LexC.x
	ghc --make TestC.hs -o TestC

clean:
	-rm -f *.log *.aux *.hi *.o *.dvi

distclean: clean
	-rm -f DocC.* LexC.* ParC.* LayoutC.* SkelC.* PrintC.* TestC.* AbsC.* TestC ErrM.* SharedString.* ComposOp.* C.dtd XMLC.* Makefile*
	

