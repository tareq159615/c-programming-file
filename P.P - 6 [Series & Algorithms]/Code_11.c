// You will be given an array A and the size of that array N. You need to make a copy of this array named B. Then sort the array B in ascending order.
// After that, you need to make another array C, where each index i (0 <= i < N) of array C is the absolute difference between array A[i] and B[i].
// That means,
// C[0] = | A[0] - B[0] |
// C[1] = | A[1] - B[1] |
// C[2] = | A[2] - B[2] |
// .....
// .....
// C[N-1] = |A[N-1] - B[N-1]|
// Here, || means the absolute value. After making the array C, print that array.

// Test Case 1:
// Input format
// 2
// 5
// 5 4 3 2 1
// 6
// 2 4 5 6 5 1
// Output format
// 4 2 0 2 4
// 1 2 1 1 0 5
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int N;
        scanf("%d", &N);

        int A[N], B[N], C[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < N; i++) {
            B[i] = A[i];
        }

        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (B[j] > B[j + 1]) {
                    int temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < N; i++) {
            int x = A[i] - B[i];
            C[i] = (x >= 0) ? x : -x;
        }

        for (int i = 0; i < N; i++) {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
