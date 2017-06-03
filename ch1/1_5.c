#include <stdio.h>

#define LOWER -20
#define UPPER 40
#define STEP 1

void main(int argc, char *argv[]) {
  for(float celsius = UPPER; celsius >= LOWER; celsius -= STEP) {
    printf("%2.0f\t%6.1f\n", celsius, ((9.0 / 5.0) * celsius) + 32.0);
    printf("------------\n");
  }
}
