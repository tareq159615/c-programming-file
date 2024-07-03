// Write a program to check if a matrix is a Unit or Identity matrix.

// Test case-1:
// Input:
// 1 0 0
// 0 1 0
// 0 0 1
// Output:
// Unit or Identity matrix.

// Test case-2:
// Input:
// 0 0 0
// 0 0 1
// 0 0 0
// Output:
// Not a Unit or Identity matrix.
#include <stdio.h>

int main() {
    int a[3][3];
    int n = 1; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && a[i][j] != 1) {
                n = 0;
                break;
            } else if (i != j && a[i][j] != 0) {
                n = 0;
                break;
            }
        }
    }

    if (n) {
        printf("Unit or Identity matrix.\n");
    } else {
        printf("Not a Unit or Identity matrix.\n");
    }

    return 0;
}
