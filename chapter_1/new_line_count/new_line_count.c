#include <stdio.h>

int main() {

  int c, nl;

  nl = 0;
  while((c = getchar()) != EOF) {
    if(c == '\n') { /* could be written as c == 10, same in ASCII */
      ++nl;
    }
  }
  printf("%d\n", nl);

  return 0;
}
