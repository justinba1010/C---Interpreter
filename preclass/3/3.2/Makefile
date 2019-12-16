all:
	happy -gca ParNFA.y
	alex -g LexNFA.x
	ghc --make TestNFA.hs -o TestNFA

clean:
	-rm -f *.log *.aux *.hi *.o *.dvi

distclean: clean
	-rm -f DocNFA.* LexNFA.* ParNFA.* LayoutNFA.* SkelNFA.* PrintNFA.* TestNFA.* AbsNFA.* TestNFA ErrM.* SharedString.* ComposOp.* NFA.dtd XMLNFA.* Makefile*
	

