#include <stdio.h>

void main(int argc, char *argv[]) {
  int n, c;

  n = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      ++n;
    } else if (c == '\n') {
      ++n;
    } else if (c == ' ') {
      ++n;
    }
  }

  printf("total number of blanks, tabs and nerlines characters is: %d\n", n);
}
