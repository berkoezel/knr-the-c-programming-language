#include <stdio.h>

int power(int a, int b){
   if(b == 0) return 1;

   int res = 1;
   for(int i=0; i<b; i++)
      res *= a;
   return res;

}
int htoi(char s[]){
   int sum=0;
   int len=0;
   // determine char length first.
   for(; s[len] != '\0'; len++);
   len--;
  
   // loop through the char array from end to beginning.
   for(int i=1; i <= len; i++){
      char c = s[i-1];
      // if c is a digit between [0-9]
      if(c >= 48 && c <= 57){
         sum += power(16, len-i) * (c - 48);
      }

      // or if it's between [A-F].
      else if(c >= 65 && c <= 70){
         sum += power(16, len-i) * (c - 55);
      }

      // return 0 if it's in invalid form of hexadecimals.
      else return 0;
      
   }
   return sum;
}

int main() {
   char a[] = {'2', '8', '6', 'E', 'F'};
   // 165615
   printf("%d\n", htoi(a));
   return 0;
}
