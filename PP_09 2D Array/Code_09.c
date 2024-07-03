// Write a program to Find sum of even and product of odd in a matrix.

// Input:
// 1 2 3 4
// 5 6 7 8
// 9 2 1 2
// Output:
// Sum of even numbers: 24
// Product of even numbers: 945

#include<stdio.h>

int main() {
    int a[3][4]; 
    int sum = 0, product = 1; 

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] % 2 == 0) {
                sum += a[i][j]; 
            } else {
                product *= a[i][j]; 
            }
        }
    }

    
    printf("Sum of even numbers: %d\n", sum);
    printf("Product of even numbers: %d\n", product);

    return 0;
}
