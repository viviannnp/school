#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Homework TODO: Include mystringfunctions.h here
#include "mystringfunctions.h"

// Homework TODO: Add function prototypes here
bool getAndRunTest();
void deepCopyStrTestA();
void deepCopyStrTestB();
void deepCopyStrTestC();
void isLowerOrDigitStrTestA();
void isLowerOrDigitStrTestB();
void isLowerOrDigitStrTestC();
void concatStrsTestA();
void concatStrsTestB();
void concatStrsTestC();
void flushStdin();

// Asks user to pick a unit test to run.
// In practice, we write unit tests using a unit testing framework
// and all unit tests are run when the code is compiled.
// For grading purposes, we ask the user to pick the test.
// DO NOT modify this function for your homework.
int main() {
  // User menu
  printf("Which unit test would you like to run?\n");
  printf("1) deepCopyStr\n");
  printf("\ta) n = 2, src = \"test string\"\n");
  printf("\tb) n = 0 returns \"\\0\"\n");
  printf("\tc) negative n returns NULL\n");
  printf("2) isLowerOrDigitStr\n");
  printf("\ta) n = 4, src = \"testString\"\n");
  printf("\tb) n = 5, src = \"testString\"\n");
  printf("\tc) n = 0\n");
  printf("3) concatStrs\n");
  printf("\ta) n = 5, str1 = \"test\", str2 = \"string\"\n");
  printf("\tb) n = 5, str1 = \"\", str2 = \"test string\" returns \"test \"\n");
  printf("\tc) n = 5, str1 = \"test\", str2 = \"\" returns NULL\n");
  while (!getAndRunTest()) {}
}

// Prompt user once for the test to run. 1a is deepCopyStrTestA,
// 1b is deepCopyStrTestB, 2c is isLowerOrDigitStrTestC, and so on.
// If the user input is valid, run the test and return true.
// If the user input is invalid, print the error according to the homework
// prompt and return false.
bool getAndRunTest() {
  // Homework TODO: complete the code for this function.
  char userInput[3] = {'\0', '\0', '\0'};

  fgets(userInput, 3, stdin);
  flushStdin();
  printf("%c\n", userInput[0]);

  if (userInput[0] == 1 || userInput[0] == 2 || userInput[0] == 3) {
    switch (userInput[1]) {
      case 'a':
        return true;

      case 'b':
        return true;

      case 'c':
        return true;

      default:
        printf("Enter a, b, or c for the test case.\n");
        return false;
     }
  }
  else {
    printf("Enter 1, 2, or 3 for the function to test.\n");
    return false;
  }
}

// Test n = 2 and src = "test string" returns "te"
void deepCopyStrTestA() {
      char* result = deepCopyStr("test string", 2);
      // if (result) checks to see something is returned (even if the string is empty).
      //   We will see later in the course this is checking if the result is a NULL pointer
      assert(result && result[0] == 't' && result[1] == 'e' && result[2] == '\0');
      printf("Test successful.\n");
}

// Test n = 0 the returns "\0"
void deepCopyStrTestB() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
}

// Test negative n returns NULL"
void deepCopyStrTestC() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
}

// Test n = 4, src = "testString" returns true
void isLowerOrDigitStrTestA() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
}

// Test n = 5, src = "testString" returns false
void isLowerOrDigitStrTestB() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
}

// Test n = 0, src = "" returns true
void isLowerOrDigitStrTestC() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
}

// Test n = 10, str1 = "test", str2 = "string" returns "teststring"
void concatStrsTestA() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
}

// n = 5, str1 = "", str2 = "test string" returns "test "
void concatStrsTestB() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
}

// n = 5, str1 = "test", str2 = "" returns NULL
void concatStrsTestC() {
    // Homework TODO: write code for this test case according to the
    // specifications in the comment above the function.
}

// Flush stdin buffer
void flushStdin() {
  char c;
  // Skip all characters until end-of-file marker
  // or new line / carriage return
  while ( (c = getchar()) != EOF &&
          c != '\n' &&
          c != '\r' ) {};
}
