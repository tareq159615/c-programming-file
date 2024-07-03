// Write a program to check if a matrix is a null matrix or not.

// Test case-1:
// Input:
// 0 0 0
// 0 0 0
// 0 0 0
// Output:
// Zero or null matrix.

// Test case-2:
// Input:
// 0 0 0
// 0 0 1
// 0 0 0
// Output:
// Not a zero or null matrix.
#include <stdio.h>

int main() {
    int a[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    int c = 1; 
    for (int i = 0; i < 3 && c; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] != 0) {
                c = 0; 
                break;
            }
        }
    }

  
    if (c) {
        printf("Zero or null matrix.");
    } else {
        printf("Not a zero or null matrix.");
    }

    return 0;
}
