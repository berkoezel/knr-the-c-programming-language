/*
 * Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
 */


#include <stdio.h>

int any(char s1[], char s2[])
{
   int leading=99;
   for(int i=0; s2[i] != '\0'; i++)
   {
      for(int j=0; s1[j] != '\0'; j++)
      {
         if(s2[i] == s1[j] && j < leading) leading = j;
      }
   }

   if (leading == 99) return -1;
   return leading;
}

int main()
{
   char s1[] = {'a', 'b', 'a', 'b', 'c', 'e', 'd', 'a', 'f', 'b', '\0'};
   char s2[] = {'d', 'b', '\0'};
   int result = any(s1, s2);
   printf("%d\n", result);
   return 0;
}
