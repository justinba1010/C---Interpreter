int function(int w, int x, int y, int z) {
  return (x-y)*(x-y) + (y-z)*(y-z) - 0;
}

int main(int argc, **char argv) {
  int[50]* x;
  x[1] = 3;
  x[2] = function(3,4,5,6);
  &x = &(100);
  *x = 5;
  *(x+5) = 15;
  return 0 + 15 * x;
}
