#include <stdio.h>

#define MAXLINE 1000
#define BLANK ' '
#define TAB '\t'
#define EOS '\0'
#define SPACE2TAB 6

int getLine(char[], int);
void entab(char[], int);

int main(int argc, char* argv[]) {
  int len;
  char buffer[MAXLINE];

  len = 0;
  while ((len = getLine(buffer, MAXLINE)) > 0) {
    printf("original:%s", buffer);
    entab(buffer, len);
    printf("entabbed:%s\n", buffer);
  }

  return 0;
}

int getLine(char in[], int max) {
  int i, c;

  i = 0;
  while ((c = getchar()) != EOF && c != '\n' && i < max - 1) {
    in[i] = c;
    ++i;
  }

  if (c == '\n') {
    in[i] = '\n';
    ++i;
  }

  in[i] = '\0';

  printf("buffer:%s", in);
  return i;
}

void entab(char from[], int len) {
  int i, t, c, numberOfBlanks;

  if (from[0] == EOS)
    return;

  numberOfBlanks = 0;
  i = numberOfBlanks = 0;
  while((c = from[i]) != EOS) {
    if (c == BLANK) {
      ++numberOfBlanks;
    } else {
      numberOfBlanks = 0;
    }

    if (numberOfBlanks == SPACE2TAB) {
      i = i - SPACE2TAB + 1;

      len = len - SPACE2TAB + 1;
      from[i] = TAB;
      for (t = i + 1; t < len; t++) {
        from[t] = from[t + SPACE2TAB - 1];
      }
      numberOfBlanks = 0;
    }
    ++i;
  }
  from[len] = EOS;
}

