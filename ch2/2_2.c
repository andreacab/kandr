#include <stdio.h>

enum boolean { NO, YES }

int main(int argc, char* argv[]) {
  int i, c;

  i = 0;
  while (i < lim - 1) {
    c = getchar();

    if (c == '\n')
      break;

    if (c == EOF)
      break;

    ++i;
  }

  return 0;
}
