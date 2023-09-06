/*
 * Exercise 1-13: Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
 * Only whitespace delimiter is supported.
 */

#include <stdio.h>

int main() {
   
   printf("Please give 5 words seperated by a whitespace:\n");
   int lengths[] = {0, 0, 0, 0, 0};
   int pos = 0;
   int c;

   while((c = getchar()) != EOF && pos < 5){
      if(c != ' ') lengths[pos]++;
      else pos++;
   }

   
   printf("\n");
   for(int i=0; i<5; i++){
      printf("%d):\t", i);
      for(int j=0; j<lengths[i]; j++)
         printf("+");
      printf("\n");
   }
   return 0;
}

