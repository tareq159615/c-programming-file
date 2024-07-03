// You will be given an integer array A of size N. You need to print the prefix sum array of the array A in reverse order.

// Test Case 1:
// Input format
// 5
// 2 4 1 5 3
// Output format
// 15 12 7 6 2

// Test Case 2:
// Input format
// 3
// 1000000000 1000000000 1000000000
// Output format
// 3000000000 2000000000 1000000000

// Hints: Be careful about data 
#include<stdio.h>

int main () { 
    int N; 
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++){
        scanf("%d", &A[i]); 
    }

    int sum = 0;
    for (int i = N-1; i >= 0; i--){
        sum += A[i];
        printf("%d ", sum);
    }
    return 0;
}
