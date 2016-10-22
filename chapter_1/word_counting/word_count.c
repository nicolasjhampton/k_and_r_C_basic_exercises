#include <stdio.h>

/* we want to define constants for the
   state of being in and out of a word */
#define IN 1
#define OUT 0

int main() {

  /* renamed for clarity */
  int new_char, line_count, word_count, char_count, state;

  /* we start our current state as outside of a word */
  state = OUT;
  /* initializing all these variables to zero */
  line_count = word_count = char_count = 0;

  /* common pattern for input until end of file */
  while((new_char = getchar()) != EOF) {
    ++char_count;
    if(new_char == '\n') {
      ++line_count;
    }
    /* if the current char is a space, then we're not in a word */
    if(new_char == ' ' || new_char == '\n' || new_char == '\t') {
      state = OUT;
    } else if (state == OUT) {
      /* if this runs, then new_char isn't a space character,
         so we must be in a word, thus the current state would
         needs to be changed to in */
      state = IN;
      /* we count a word here, and because this only runs on OUT,
         we won't count a new word for the rest of the word */
      ++word_count;
    }
  }

  printf("%d %d %d\n", line_count, word_count, char_count);

  return 0;
}
