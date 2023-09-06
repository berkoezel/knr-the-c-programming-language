/*
 * Exercise 1-8: Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main() {
   int blanks = 0;
   int tabs = 0;
   int newlines = 0;

   int c;
   while((c = getchar()) != EOF){
      if(c == ' ') blanks++;
      else if(c == '\t') tabs++;
      else if(c == '\n') newlines++;
   }

   printf("Blanks: %d, Tabs: %d, Newlines: %d\n", blanks, tabs, newlines);

   return 0;}
