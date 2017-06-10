#include <stdio.h>

#define MAX 1000
#define EOS '\0'

void removeComments(char[]);
void getProgram(char[]);

int main(int argc, char* argv[]) {
  char buffer[MAX];

  getProgram(buffer);
  printf("getProgram:\n%s", buffer);
  removeComments(buffer);
  printf("removeComments:\n%s", buffer);

  return 0;
}

void getProgram(char buffer[]) {
  int i, c;

  i = 0;
  while ((c = getchar()) != EOF) {
    buffer[i] = c;
    ++i;
  }

  buffer[i] = EOS;
}

void removeComments(char buffer[]) {
  int c, i, j, previous, remove;

  i = j = remove = 0;
  previous = -1;
  while ((c = buffer[i]) != EOS) {
    if (c == '/' && previous == '/') {
      j = j - 1;
      remove = 1;
    }

    if (c == '\n' && remove) {
      remove = 0;
    }

    if (!remove) {
      buffer[j] = c;
      ++j;
    }

    previous = c;
    ++i;
  }

  buffer[j] = EOS;
}

