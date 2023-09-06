/*
 * Exercise 1-12: Write a program that prints its input one word per line.
 */

#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
   int c;
   int state = OUT;
   while((c = getchar()) != EOF){
      while (c == ' ' || c == '\t') {
         state = OUT;
         c = getchar();
      }
      if(state == OUT && (c != ' ' && c != '\t')){
         state = IN;
         printf("\n");
         while(c != ' ' && c != '\t'){
            printf("%c", c);
            c = getchar();
         }
      }
   }

   return 0;
}
