
// Problem 13
// Max Score: 1 | Difficulty: Medium
// Take two arrays A,B of same size, multiply corresponding elements, store them in a third array and print it.

// Constraints:
// 0 <= A[i] <= 1000;
// 0 <= B[j] <= 1000;

// Input:
// Two integer arrays of same size, each in a new line
// Output:
// An array of the same size as the input, each element corresponds to the product of the two elements at the same index in each of the input arrays.

// Input:
// 5
// 2 3 4 5 6
// 1 2 3 4 5

// Output:
// 2 6 12 20 30
// Explanation:
// A = [2,3,4,5,6]
// B = [1,2,3,4,5]

// C[0] = A[0] * B[0] = 2 * 1 = 2
// C[1] = A[1] * B[1] = 3 * 2 = 6
// C[2] = A[2] * B[2] = 4 * 3 = 12
// C[3] = A[3] * B[3] = 5 * 4 = 20
// C[4] = A[4] * B[4] = 6 * 5 = 30
#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int A[n],B[n],C[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < n; i++){
        scanf("%d",&B[i]);
    }
    for (int i = 0; i < n; i++)
    {
        C[i] = A[i] * B[i];
        printf("%d ",C[i]);
    }
    
    
} 