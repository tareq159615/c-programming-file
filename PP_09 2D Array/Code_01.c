
// Problem 1
// Max Score: 1 | Difficulty: Easy
// Write a program to print a 2D Array or a matrix like the given below.
// Test case-1:
// Input:
// 1 2 3
// 1 2 3
// 1 2 3
// Output:
// 1 2 3
// 1 2 3
// 1 2 3

// Test case-2:
// Input:
// 4 8 9
// 2 3 6
// 7 4 1

// Output:
// 4 8 9
// 2 3 6
// 7 4 1
#include<stdio.h>
int main () {
    int a[3][3];
    int row=3,col=3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

     
    return 0;
}
