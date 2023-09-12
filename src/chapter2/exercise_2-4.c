/*
 * Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.
*/

#include <stdio.h>

void squeeze(char s1[], char s2[])
{
   for(int i=0; s2[i] != '\0'; i++)
   {
      for(int j=0; s1[j] != '\0'; j++)
      {
         // Replace matched charaters with "-". 
         if(s2[i] == s1[j]) s1[j] = 45;
      }
   }
}

void printstr(char s[])
{
   int i=0;
   while(s[i] != '\0')
   {
      printf("%c", s[i++]);
   }
   printf("\n");
}

int main()
{
   char sa[] = {'a', 'b', 'a', 'b', 'c', 'e', 'd', 'a', 'f', 'b', '\0'};
   char sb[] = {'a', 'b', '\0'};
   squeeze(sa, sb);
   printstr(sa);
   return 0;
}
