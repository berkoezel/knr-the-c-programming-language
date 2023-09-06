/*
 * Exercise 1-5: Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
 */

#include <stdio.h>

int main() {
   printf("Fahreinheit - Celcius\n");
   for(int fahrenheit = 300; fahrenheit >= 0; fahrenheit = fahrenheit - 20){
      float celcius = (5.0/9.0) * (fahrenheit - 32);
      
      printf("%7d %13.2f\n", celcius, fahrenheit);
   }

   return 0;
}


