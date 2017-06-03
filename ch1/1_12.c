#include <stdio.h>

void main(int argc, char *argv[]) {
  int c;

  while((c = getchar()) != EOF) {
    if(c == ' ') {
      putchar('\n');
    } else {
      putchar(c);
    }
  }
}
