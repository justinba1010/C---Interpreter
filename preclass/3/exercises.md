3-0 We showed an automaton for integers, identifiers, and strings.
Complete it into an automaton that recognizes any sequence of such tokens,
with any number of spaces in between. When are spaces obligatory, to keep
the automaton deterministic?

![](image1.svg)

Spaces are necessary for distinguishing identifiers from integers. If we didn't space delimit, we would have
identifiers that ambiguously could include integers.

3-1 Write a regular expression for comments of the form `/* ... */`.
Construct a nondeterministic and a deterministic automaton for this kind of
comments.

`/*[Σ]*/`

![](image2.svg)

I kind of cheated on the NFA.

3-2.+ Write a compiler from regular expressions to NFA’s, covering
the minimal set (symbol, sequence, union, closure, empty) and the notation
used in the presentation above. You can use BNFC and define a suitable token
type for symbols (Section 2.9). As for the precedences, closure should bind
stronger than sequence, sequence stronger than union. The automata and the
compiler can be expressed in a mathematical notation and pseudocode. For
instance, the definition of automata for one-symbol expressions suggests

Skipped for now.



