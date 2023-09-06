/*
 * Exercise 1-4: 
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include <stdio.h>

int main() {

   printf("+----------------------------------+\n");
   printf("|Celcius to Fahrenheit conversions:|\n");
   printf("+----------------------------------+\n");
   printf("\n");
   printf("Celcius - Fahrenheit\n");
   printf("\n");
   int lower = 0;
   int upper = 300;
   int step = 20;

   while(lower <= upper){
      float fahreinheit = lower * (9.0/5.0) + 32;
      printf("%7d %12.2f\n", lower, fahreinheit);
      lower = lower + step;
   }
   return 0;
}
