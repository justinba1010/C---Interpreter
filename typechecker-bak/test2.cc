/* Andreas Abel, dont-bind-too-eagerly.cc, from
http://www.cse.chalmers.se/edu/year/2018/course/DAT151/laborations/lab
2/testsuite/
*/
int main () {
  while ("This isn't correct") {}
  return 0;
}
