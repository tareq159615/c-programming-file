// Write a program to find the summation of the main or primary diagonal and secondary diagonal elements of a square matrix.

// Input:
// 1 2 3 4
// 5 6 7 8
// 9 0 1 2
// 3 4 5 6
// Output:
// 28
#include <stdio.h>

int main() {
    int a[4][4];
    int x = 0, sum = 0;

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        x += a[i][i];
        sum += a[i][3 - i];
    }
    
    printf("%d\n", x + sum);

    return 0;
}
