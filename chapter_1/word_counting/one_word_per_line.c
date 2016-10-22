#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

  int new_char, state;

  state = OUT;
  while((new_char = getchar()) != EOF) {

    if(new_char != ' ' && new_char != '\t' && new_char != '\n') {
    /* if the new char isn't a space, proceed to the print logic */
      if(state == OUT) {
        /* if the state is out, then this char is
           a new word, so insert a new line */
        putchar('\n');
        putchar(new_char);
        state = IN;
      } else {
        /* if the state is in, then this non-space
           char is part of a word in progress, so print */
        putchar(new_char);
      }

    } else {
      /* if this is a space char, then set state to out and ignore */
      state = OUT;
    }

  }
  return 0;
}
