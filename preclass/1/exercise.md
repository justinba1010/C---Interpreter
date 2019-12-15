* 1-0 Show the assembly code and the binary and hexadecimal
JVM encoding of the expression
11 + 7 ∗ (9 + 5)
```
bipush 11   ; 11
bipush 7    ; 11 7
bipush 9    ; 11 7 9
bipush 5    ; 11 7 9 5
iadd        ; 11 7 14
imul        ; 11 98
iadd        ; 109
```

* 1-1 Decode the following representation of a JVM program to show
(a) the corresponding assembly code and (b) a Java expression from which it
can be obtained.

```
0001 0000 1111 1111 0001 0000 0010 0000
0110 0000 0001 0000 0000 1001 0110 1000
```

```
bipush 255
bipush 32
iadd
bipush 9
imul
```
```
(255 + 32) * 9
```

* 1-2 The following C code has around six errors (some of them
depend on what you count as an error). Locate the errors and explain at which
compiler phase they are (or should be) revealed.
/* this is a buggy hello world program
```
int main () {
  int i;
  int j = k + 1;
  int a[] = {1,2,3}
  j = a + 6;
  a[4] = 7;
  printf(hello world\n);
}
```

1. line 3, `k` is never defined
2. line 5, `a` is an array, thus addition is undefined(unless we add the pointer address)
3. line 4, no terminator `;`
4. line 6, out of bounds, `a[4]` on size 3.
5. line 7, hello world needs to be a string
6. no return statement
