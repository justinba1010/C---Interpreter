/* Andreas Abel, dont-bind-too-eagerly.cc, from
http://www.cse.chalmers.se/edu/year/2018/course/DAT151/laborations/lab
2/testsuite/
*/
int snd (int x, int y) {
 return y;
}
int main () {
 int x = 0;
 int r = snd(1,x);
 printInt(r); // Should print 0
 return r;
}
