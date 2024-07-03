 
// Problem 2
// Max Score: 1 | Difficulty: Easy
// Write a program to print the primary diagonal of a 2D.

// Input:
// 1 2 3 4
// 5 6 7 8
// 9 0 1 2
// 3 4 5 6
// Output:
// 1 6 1 6
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
        printf("%d ",a[i][i]);
    }

     
    return 0;
}
