/*
 * Exercise 3-3: Write a function expand(s1,s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2.
 * Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally.
 */

#include <stdio.h>

void expand(char s1[], char s2[])
{
   int startLetter = 123, endLetter = 96, startNumber = 58, endNumber = 47; 
   for(int i=0; s1[i] != '\0'; i++)
   {
      if(s1[i] >= 48 && s1[i] <= 57)
      {
         if(s1[i] <= startNumber) startNumber = s1[i];
         if(s1[i] >= endNumber) endNumber = s1[i];
      }
      else if(s1[i] >= 97 && s1[i] <= 122)
      {
         if(s1[i] <= startLetter) startLetter = s1[i];
         if(s1[i] >= endLetter) endLetter = s1[i]; 
      }
   }

   int letterRange = endLetter-startLetter+1;
   int numberRange = endNumber-startNumber;
   for(int i=0; i<=letterRange; i++)
   {
      s2[i] = startLetter + i;
   }
   for(int i=letterRange, j=0; i<=letterRange+numberRange; i++, j++)
   {
      s2[i] = startNumber + j;
   }
}

int main()
{
   char s1[] = "a-z0-9";
   char s2[36];
   s2[35] = '\0';
   expand(s1,s2);
   printf("%s\n", s2);
   return 0;
}
