#include <stdio.h>
#include <ctype.h>

int main() {

  char userInput;

  printf("Please enter a character: ");
  scanf("%c", &userInput);

  if (isalnum(userInput) == 1) {
    if (isupper(userInput) == 1) {
      printf("The char is an uppercase letter.\n");
    }
    else {
      printf("The char is a lowercase letter.\n");
    }

    switch (userInput) {
      case 'A':
      case 'a':
      case 'B':
      case 'b':
      case 'C':
      case 'c':
      case 'E':
      case 'e':
      case 'I':
      case 'i':
      case 'O':
      case 'o':
      case 'U':
      case 'u':

      printf("The char is a vowel.\n");
      break;
    }
  }
  else if (isdigit(userInput) == 1) {
    printf("The char is a digit.\n");
  }
  else if (ispunct(userInput) == 1) {
    printf("The char is a punctuation.\n");
  }
  else if (userInput == '\t') {
    printf("The char is a tab.\n");
  }
  else if (userInput == '\"') {
    printf("The char is a double quote\n");
  }

  return 0;
}
