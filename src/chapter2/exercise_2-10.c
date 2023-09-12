/*
 * Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else.
 */

#include <stdio.h>

void lower(char s[])
{
   for(int i=0; s[i] != '\0'; i++)
   {
      if(s[i] >= 65 && s[i] <= 90)
      {
         s[i] += 32;
      }
   }
}


int main()
{
   char s[] = "UPPERS";
   lower(s);
   printf("%s\n", s);
   return 0;
}
