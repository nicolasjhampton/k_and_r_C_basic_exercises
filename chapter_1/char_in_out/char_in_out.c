#include <stdio.h>

/* copy input to output */

int main() {

  /* char type isn't big enough for "EOF" value */
  /* thus we use the int type to store each char */
  /* EOF is constant defined in standard library */
  /* EOF simply a number that doesn't have char equivelant */
  int c;

  /* gets next character fed to input */
  c = getchar();

  /* checks if character is an "End of File" character */
  while(c != EOF) {
    /* print character to output */
    putchar(c);
    /* get next char */
    c = getchar();
  }

  return 0;
}
