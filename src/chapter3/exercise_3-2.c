/*
 * Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write a function for the other direction as well, converting escape sequences into the real characters.
 */

#include <stdio.h>

void escape(char s[], char t[])
{
   for(int i=0; s[i] != '\0'; i++)
   {
      switch (s[i])
      {
         case 9:
            t[i] = 'T';
            break;
         case 10:
            t[i] = 'N';
            break;
         default:
            t[i] = s[i];
            break;
      }
   }
}

int main()
{
   char s[] = {'a', 'b', 'c', '\t', 'd', 'e', '\n', 'f', '\0'};
   char t[9];
   t[8] = '\0';
   escape(s,t);
   printf("%s\n", t);
   return 0;
}
