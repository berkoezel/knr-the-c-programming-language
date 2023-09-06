/*
 * Exercise 1-3: 
 * Modify the temperature conversion program to print a heading above the table.
 */

#include <stdio.h>

int main() {

   printf("+-----------------------------------+\n");
   printf("|Fahreinheit to Celcius conversions:|\n");
   printf("+-----------------------------------+\n");
   printf("\n");
   printf("Fahreinheit - Celcius\n");
   printf("\n");
   int lower = 0;
   int upper = 300;
   int step = 20;

   while(lower <= upper){
      float celcius = (5.0/9.0) * (lower - 32);
      printf("%7d %12.2f\n", lower, celcius);
      lower = lower + step;
   }
   return 0;
}
