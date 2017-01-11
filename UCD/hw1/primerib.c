#include <stdio.h>
#include <math.h>

int main() {

   float pounds =   0.0;
   int hours =      2.0;
   float minutes =  0.0;
   float seconds =  0.0;

   printf("How many pounds is your prime rib? ");
   scanf("%f", &pounds);

   // gets amount of hours from total minutes.
   hours += (5 * pounds) / 60;
   // get total minutes and subtract current amount of hours in minutes.
   // 0.01 in case occurence of 0.999... weird rounding.
   minutes = ((pounds * 5.0) - (60.0 * ((float)hours - 2.0))) + 0.01;

   // since minutes is a float value, subtract integer value to get seconds.
   // 0.01 in case occurence of 0.999... weird rounding.
   seconds = ((minutes - (int)minutes) * 60.0) + 0.01;

   printf("Your rib will be in the oven for %d hours, %d minutes, and %d seconds.\n", (int)hours, (int)minutes, (int)seconds);

   return 0;
}
