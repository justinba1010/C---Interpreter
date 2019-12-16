all:
	happy -gca ParJ.y
	alex -g LexJ.x
	ghc --make TestJ.hs -o TestJ

clean:
	-rm -f *.log *.aux *.hi *.o *.dvi

distclean: clean
	-rm -f DocJ.* LexJ.* ParJ.* LayoutJ.* SkelJ.* PrintJ.* TestJ.* AbsJ.* TestJ ErrM.* SharedString.* ComposOp.* J.dtd XMLJ.* Makefile*
	

