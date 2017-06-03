#include <stdio.h>

#define MAX_WORD_COUNT 100

void main(int argc, char *argv[]) {
  int c, i, j, num;
  int count[MAX_WORD_COUNT];

  c = i = j = num = 0;
  // initialize count array with zero'ed values
  for(; i < MAX_WORD_COUNT; i++) {
    count[i] = 0;
  }

  // analyse inputs
  while((c = getchar()) != EOF) {
    if(c == ' ' || c == '\n' || c == '\t') {
      count[num] += 1;
      num = 0;
    } else {
      num += 1;
    }
  }

  printf("\nHistogram is:\n");

  // print out results
  for(i = 0; i < MAX_WORD_COUNT; i++) {
    printf("%d", i);
    for(j = 0; j < count[i]; j++) {
      printf("----");
    }
    printf("\n");
  }
}
