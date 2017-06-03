#include <stdio.h>

#define MAX 128

void main(int argc, char *argv[]) {
  int c, i, j, num;
  int freq[MAX];

  c = i = j = num = 0;
  // initialize the freq array to 0
  for(; i < MAX; i++) {
    freq[i] = 0;
  }

  // analyse inputs
  while((c = getchar()) != EOF) {
    freq[c] = freq[c] + 1;
  }

  printf("\nHistogram is:\n");

  // print out results
  for(i = 0; i < MAX; i++) {
    printf("%d: ", i);
    for(j = 0; j < freq[i]; j++) {
      printf("-");
    }
    printf("\n");
  }
}
