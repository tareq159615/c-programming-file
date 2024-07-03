// Write a program to multiply two matrices.

// Input:
// Array-1:
// 1 2 3
// 4 5 6
// 7 8 9
// Array-2:
// 1 2 3
// 4 5 6
// 7 8 9
// Output:
// 1 4 9
// 16 25 36
// 49 64 81
#include <stdio.h>
int main() {
     int a[3][3] = { {1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9} };

   int b[3][3] = { {1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9} };
    int resultAdd[3][3] = {0}; 
 

   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         resultAdd[i][j] = a[i][j] + b[i][j];
      }
   }


   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         printf("%d ", resultAdd[i][j]);
      }
      printf("\n");
   }

   return 0;
}
