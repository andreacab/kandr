#include <stdio.h>

#define MAXLINE 1000
#define NUM_OF_SPACES 2

int getLine(char[], int);
void detab(char[], char[]);

int main(int argc, char* argv[]) {
  int len;
  char line[MAXLINE];
  char detabbed[MAXLINE];

  len = 0;
  while ((len = getLine(line, MAXLINE)) > 0) {
    detab(line, detabbed);
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

void detab(char from[], char to[]) {
  int c, i, j, m;
  printf("----initial from:%s", from);
  printf("----initial to:%s", to);
  
  i = m = 0;
  while ((c = from[i]) != '\0') {
    if (c == '\t') {
      for (j = 0; j < NUM_OF_SPACES; j++) {
        to[m + j] = ' ';
      }
      m += j;
      printf("----tab\n");
      printf("----next m:%d\n", m);
    } else {
      to[m] = from[i];
      ++m;
      printf("----not a tab\n");
      printf("----next m: %d\n", m);
    }
    ++i;
  }

  to[m] = '\0';
}
