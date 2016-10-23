#include <stdio.h>

int main() {

  int new_char, nWhite, nOther;
  int nDigit[10]; /* obviously indexed from zero */

  /* initialize our variables */
  nWhite = nOther = 0;

  /* initialize all indexes of nDigit */
  /* forgetting to initialize index resulted in nDigit[0] being
     whatever garbage is stored in the memory allocated to nDigit
     at the garabge number index number held...interesting */
  /* also note that index, when declared this way, seems to be
     scoped to the for loop block */
  for(int index = 0; index < 10; ++index)
    nDigit[index] = 0;

  while((new_char = getchar()) != EOF) {

    /* note: test for char value, not int */
    if(new_char >= '0' && new_char <= '9') {
      /* important: the difference between the numberic values
         of '0' and the current char will be equal to our index
         number that corresponds to the char count */
      ++nDigit[new_char - '0'];
    } else if (new_char == ' ' || new_char == '\n' || new_char == '\t') {
      ++nWhite;
    } else {
      ++nOther;
    }

  }

  /* print results */
  printf("Digits:");
  for(int _index = 0; _index < 10; ++_index) {
    printf(" %d", nDigit[_index]);
  }
  printf(", white space: %d, other: %d\n", nWhite, nOther);

  return 0;
}
