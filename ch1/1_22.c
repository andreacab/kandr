#include <stdio.h>

#define MAXLINE 1000
#define BLANK ' '
#define TAB '\t'
#define EOS '\0'
#define SPACE2TAB 6

void fold();

int main(int argc, char* argv[]) {
  entab();

  return 0;
}

void fold() {
  int c, i, numberOfBlanks;

  numberOfBlanks = 0;
  while ((c = getchar()) != EOF) {
    if (c == BLANK) {
      ++numberOfBlanks;
    } else {
      for (i = 0; i < numberOfBlanks; i++)
        putchar(BLANK);
      putchar(c);
      numberOfBlanks = 0;
    }

    if (numberOfBlanks == SPACE2TAB) {
      putchar(TAB);
      numberOfBlanks = 0;
    }
  }
}

