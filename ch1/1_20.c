#include <stdio.h>

#define MAXLINE 1000
#define TAB '\t'
#define EOS '\0'

int getLine(char[], int);
void detab(char[], char[], int);
int calculateNumberOfSpaces(int, int);

int main(int argc, char* argv[]) {
  int len;
  char line[MAXLINE];
  char detabbed[MAXLINE];
  int tabSize = 5;

  len = 0;
  while ((len = getLine(line, MAXLINE)) > 0) {
    detab(line, detabbed, tabSize);
    printf("original:%sdetabbed:%s\n", line, detabbed);
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

  printf("----line:%s", in);
  return i;
}

void detab(char from[], char to[], int tabSize) {
  int c, i, j, m, numOfSpaces;

  i = m = 0;
  while ((c = from[i]) != EOS) {
    if (c == TAB) {
      numOfSpaces = calculateNumberOfSpaces(m, tabSize);
      for (j = 0; j < numOfSpaces; j++) {
        to[m + j] = ' ';
      }
      m += j;
    } else {
      to[m] = from[i];
      ++m;
    }
    ++i;
  }

  to[m] = '\0';
}

int calculateNumberOfSpaces(int offset, int tabSize) {
  return tabSize - (offset % tabSize);
}
