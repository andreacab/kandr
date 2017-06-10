#include <stdio.h>

#define MAXLINE 10
#define MAX 1000
#define BLANK ' '
#define EOS '\0'

void fold(char[]);
void getLine(char[], int);

int main(int argc, char* argv[]) {
  char buffer[MAX];

  getLine(buffer, MAX);
  printf("getLine:%s\n", buffer);
  fold(buffer);
  printf("fold:\n%s\n", buffer);
  return 0;
}

void getLine(char buffer[], int max) {
  int c, i;

  i = 0;
  while ((c = getchar()) != EOF && c != '\n' && i < max) {
    buffer[i] = c;
    ++i;
  }

  buffer[i] = EOS;
}

void fold(char buffer[]) {
  int c, i, j, previous;

  i = 1;
  j = -1;
  previous = buffer[0];
  while ((c = buffer[i]) != EOS) {
    if ((i % (MAXLINE - 1)) == 0) {
      if (j >= 0)
        buffer[j] = '\n';
    } else {
      if (c == BLANK && previous != BLANK) {
        j = i;
      }
    }
    previous = c;
    i++;
  }
}

