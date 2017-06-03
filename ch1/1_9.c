#include <stdio.h>

void main(int argc, char *argv[]) {
  int prevBlank, c;

  prevBlank = 0;
  while ((c = getchar()) != EOF) {
    if (prevBlank) {
      if (c == ' ') {
        continue;
      } else {
        prevBlank = 0;
        putchar(c);
      }
    } else {
      if (c == ' ') {
        prevBlank = 1;
      }
      putchar(c);
    }
  }
}
