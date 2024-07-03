
 
// Problem 5
// Max Score: 1 | Difficulty: Not Specified
// Write a program to print the last column of a 2D matrix.

// Input:
// 1 2 3 4
// 5 6 7 8
// 9 0 1 2
// 3 4 5 6
// Output:
// 4 8 2 6
#include<stdio.h>
int main () {
    int a[4][4];
    int row=4,col=4;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <col; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        printf("%d ",a[i][3-i]);
    }

     
    return 0;
}
