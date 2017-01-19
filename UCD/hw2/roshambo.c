#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

  char userInput = '\0';
  char computerOut = '\0';
  char computerOutString[10] = "";

  srand((int) time(0));

  printf("Rock, paper, or scissors? ");
  scanf("%c", &userInput);

  switch ((rand() % 3) + 1) {
    case 1:
      computerOut = 'r';
      strcpy(computerOutString, "Rock");
      break;

    case 2:
      computerOut = 'p';
      strcpy(computerOutString, "Paper");
      break;

    case 3:
      computerOut = 's';
      strcpy(computerOutString, "Scissors");
      break;

    default:
      printf("Something went wrong.\n");
  }

  if (userInput == computerOut) {
    printf("I rolled %s. We tie!\n", computerOutString);
  }
  else if (userInput != 'r' || userInput != 'p' || userInput != 'p'){
    printf("Error: you did not enter \'r\', \'p\', or \'s\'!\n");
  }
  else if (computerOut == 'r') {
    if (userInput == 'p') {
      printf("I rolled %s. You win!\n", computerOutString);
    }
    else {
      printf("I rolled %s. You lose!\n", computerOutString);
    }
  }
  else if (computerOut == 'p') {
    if (userInput == 'r') {
      printf("I rolled %s. You win!\n", computerOutString);
    }
    else {
      printf("I rolled %s. You lose!\n", computerOutString);
    }
  }
  else if (computerOut == 's') {
    if (userInput == 'r') {
      printf("I rolled %s. You win!\n", computerOutString);
    }
    else {
      printf("I rolled %s. You lose!\n", computerOutString);
    }
  }


  return 0;
}
