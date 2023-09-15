/*
 * Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside.) Write a version with only one test inside the loop and measure the difference in run-time.
 */

#include <stdio.h>

int binsearch(int x, int v[], int n)
{
   int low = 0;
   int high = n - 1;
   int mid;

   while(low < high)
   {
      mid = (low + high) / 2;
      if(x <= v[mid])
         high = mid;
      else
         low = mid + 1;
   }
   return low;
}

int main()
{
   int x[] = {1,2,3,4,5,6,7};
   int pos = binsearch(4, x, 7);
   printf("%d\n", pos);
}
