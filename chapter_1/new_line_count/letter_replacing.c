#include <stdio.h>

int main() {

  int c;
  while((c = getchar()) != EOF) {
    /* replace spaces with \s */
    if (c == ' ') {
      putchar('\\');
      putchar('s');
    /* replace backslash with \\ */
    } else if (c == 92) {
      putchar('\\');
      putchar('\\');
    /* replace tabs with \t */
    } else if (c == 9) {
      putchar('\\');
      putchar('t');
    /* or just print the character */
    } else {
      putchar(c);
    }
  }

  return 0;
}
