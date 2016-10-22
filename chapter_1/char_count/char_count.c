#include <stdio.h>

int main() {

  long nc;

  nc = 0;

  /* EOF can be inputed with ctrl-d */
  while(getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);



  return 0;
}
