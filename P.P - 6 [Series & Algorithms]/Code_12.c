// You will be given an array A of size N. You need to tell if the array is already sorted or not. If the array is sorted in ascending order print "YES", otherwise print "NO".

// Input Format
// The first line will contain T, the number of test cases.
// The first line of each test case will contain N.
// The second line of each test case will contain the array A.

// Constraints
// 1 <= T <= 1000
// 1 <= N <= 1000
// 0 <= A[i] <= 1000; Where 0 <= i < N

// Output Format
// Output "YES" or "NO" without the quotation marks according to the problem statement.

// Test Case 1:

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int a = 1; 
        for (int i = 1; i < N; i++) {
            if (A[i] < A[i - 1]) {
                a = 0; 
                break; 
            }
        }

        if (a) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
