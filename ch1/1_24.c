#include <stdio.h>

#define EOS '\0'
#define MAX 1000
#define BALANCED 0

#define OPEN_PAREN '('
#define CLOSE_PAREN ')'

#define OPEN_BRACKET '['
#define CLOSE_BRACKET ']'

#define OPEN_BRACE '{'
#define CLOSE_BRACE '}'

#define SINGLE_QUOTE '\''
#define DOUBLE_QUOTE '\"'
#define ESCAPE_SEQ '\\'

#define OPEN_COMMENT "/*"
#define CLOSE_COMMENT "*/"

void getProgram(char[]);
int checkBalance(char[]);

int main(int argc, char* argv[]) {
  char buffer[MAX];

  getProgram(buffer);
  printf("For the following, consider 1 to represent 'true' and 0 'false':\n");
//  printf("are parenthesis balanced? %d\n", checkBalance(buffer, '(', ')') == BALANCED);
 // printf("are brackets balanced? %d\n", checkBalance(buffer, '[', ']') == BALANCED);
  printf("is program syntax balanced? %d\n", checkBalance(buffer) == BALANCED);
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

int checkBalance(char buffer[]) {
  int c, i, j;
  int stack[MAX];

  i = j = 0;
  while ((c = buffer[i]) != EOS) {
    if(c == OPEN_PAREN) {
      stack[j] = c;
      j++;
    } else if (c == CLOSE_PAREN) {
      if (j > 0 && stack[j - 1] == OPEN_PAREN)
        j--;
      else
        return 1;
    } else if (c == OPEN_BRACKET) {
      stack[j] = c;
      j++;
    } else if (c == CLOSE_BRACKET) {
      if (j > 0 && stack[j - 1] == OPEN_BRACKET)
        j--;
      else
        return 1;
    } else if (c == OPEN_BRACE) {
      stack[j] = c;
      j++;
    } else if (c == CLOSE_BRACE) {
      if (j > 0 && stack[j - 1] == OPEN_BRACE)
        j--;
      else
        return 1;
    }

    ++i;
  }

  return j;
}

