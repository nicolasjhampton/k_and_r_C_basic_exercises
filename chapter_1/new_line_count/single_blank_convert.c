#include <stdio.h>

int main() {

  int c;
  /* get the first char entered (will skip to print if it's not a space) */
  while ((c = getchar()) != EOF) {
      /* if the character is a space, we want to check the next char */
      if (c == ' ') {
          /* while the next char is a space, do nothing with it */
          while ((c = getchar()) == ' ')
            ;
          /* now we're going to print that first space */
          putchar(' ');
          /* if the next char is EOF, break out */
          if (c == EOF) break;
      }
      /* now we're going to print the char, whether the first or second */
      putchar(c);
  }

}
