#include <stdio.h>

#define MAXLINE 1000

/* function prototype declarations */
int getfullline(char line[], int maxline);
void copy(char to[], char from[]);

/* prints longest input line */
int main() {

  int len;
  int max;
  char line[MAXLINE]; /* creating fixed array length large enough for any line */
  char longest[MAXLINE];

  max = 0;
  while((len = getfullline(line, MAXLINE)) > 0) {
    if(len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if(max > 0) {
    printf("%s", longest);
  }

  return 0;
}

/* arrays are collections of pointers, so the information put in one passed
   as an argument will store at that memory location, and will persist */
int getfullline(char str[], int limit) {

  int new_char, index;

  /* get each character until a new line character
     or an EOF symbol or until the Max Line limit */
  for(index = 0; index < limit - 1 && (new_char = getchar()) != EOF && new_char != '\n'; ++index) {
      /* store each new character in the character array */
      str[index] = new_char;
  }

  /* if the last character was a new line, add it to the end of the character array */
  if(new_char == '\n') {
    str[index] = new_char;
    ++index;
  }

  /* attach the ending character and return the length of the character array */
  str[index] = '\0';
  return index;
}

void copy(char to[], char from[]) {
  int index = 0;

  while((to[index] = from[index]) != '\0')
   ++index;
}
