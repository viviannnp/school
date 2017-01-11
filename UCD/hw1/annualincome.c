#include <stdio.h>

int main() {

   float hourlyWage = 0;
   int dollars = 0;
   int cents = 0;

   printf("What is your hourly wage? ");
   scanf("%f", &hourlyWage);

   dollars = (hourlyWage * 40 * 52) + 0.01;
   cents = (((hourlyWage * 40.0 * 52.0) - dollars) * 100.0) + 0.5;

   printf("Your total income over a year is %d dollars and %d cents\n", dollars, cents);

   return 0;
}
