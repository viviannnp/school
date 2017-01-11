#include <stdio.h>
#include <math.h>

int main() {

   float wage = 0;

   printf("What is your hourly wage? ");
   scanf("%f", &wage);

   printf("Your total income over a year is %d dollars and %d cents\n", (int)((wage * 40 * 52)+.5), (int)(((wage * 40 * 52) - floor(wage * 40 * 52))*100));
   //printf("%f\n", 19.99*40*52);
   //printf("%d\n", (int)((((19.99*40*52) - floor(19.99*40*52))*100)+.5));
   return 0;
}
