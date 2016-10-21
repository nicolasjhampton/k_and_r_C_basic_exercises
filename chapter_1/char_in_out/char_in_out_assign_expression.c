#include <stdio.h>

/* copy input to output */

int main() {

  int c;

  /* assignment expression often used by experienced c programmers */
  /* value of expression will be assignment on left side */
  /* saves us two lines of code */
  while((c = getchar()) != EOF) {
    /* print character to output */
    putchar(c);
  }

  return 0;
}
