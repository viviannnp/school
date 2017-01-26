/*
  Line 22 adapted from:              http://stackoverflow.com/questions/9744909/while-loop-generating-printf-twice-before-asking-for-input
*/
#include <stdio.h>
#include <ctype.h>

int main(void) {

  int upperBound = 0;
  int lowerBound = 0;
  int numGuesses = 0;
  int currGuess  = 0;
  int lastGuess  = 0;
  char lowHighOrEqual = '\0';

  printf("Enter n: ");

  if (scanf("%d", &upperBound) == 1 && upperBound >= 0) {
    while (((upperBound - currGuess) / 2) != 0) {

      ++numGuesses;
      currGuess = upperBound / 2;
      lastGuess = currGuess;

      printf("Is your number %d?", currGuess);
      scanf(" %c", &lowHighOrEqual);

      if (lowHighOrEqual == 'e') {
        break;
      }
      else if (lowHighOrEqual == 'l') {
        currGuess = (upperBound - currGuess) / 2;
      }
      else if (lowHighOrEqual = 'h') {
        currGuess
      }
    }
    printf("Your number must be %d. I used %d guesses.\n", currGuess, numGuesses);
  }
  else {
    if (isdigit(upperBound)) {
      printf("Error: n must be positive.\n");
    }
    else {
      printf("Error: invalid input.\n");
    }
  }

  return 0;
}
