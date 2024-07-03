// Write a program to transpose of a matrix.

// Input:
// 1 2 3
// 5 6 7
// 9 2 1
// Output:
// 1 5 9
// 2 6 2
// 3 7 1

#include<stdio.h>
int main () {
    int a[4][4],b[4][4]; 
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 3; j++){
            scanf("%d",&a[i][j]);
       }
    }
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 3; j++){
            b[j][i] = a[i][j];
       }
    }
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 3; j++){
           printf("%d ",b[i][j]);
       }
       printf("\n");
    }

    return 0;
}