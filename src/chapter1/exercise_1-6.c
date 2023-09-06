/*
 * Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

int main() {
   int c;

   printf("(c = getchar()) != EOF: %d\n", (c = getchar()) != EOF);
   printf("c = getchar() != EOF: %d\n", c = getchar() != EOF);
   return 0;
}
