#include <stdio.h>

int main() {

  int new_char, nWhite, nOther;
  int nDigit[10]; /* obviously indexed from zero */

  nWhite = nOther = 0;

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
  printf("Digits: \n");
  for(int _index = 0; _index < 10; ++_index) {
    int count = nDigit[_index];
    printf(" %d: ", _index);
    for(int index = 0; index < count; ++index)
      printf("%c", 35);
    printf("\n");
  }

  printf("White space: ");
  for(int index = 0; index < nWhite; ++index)
    printf("%c", 35);

  printf("\nOther: ");
  for(int index = 0; index < nOther; ++index)
    printf("%c", 35);

  printf("\n");

  return 0;
}
