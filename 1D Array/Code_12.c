
// Problem 12
// Max Score: 1 | Difficulty: Medium
// Write a program to print the number of array elements that are divisible by 5 from an N-sized array.

// Constraints:
// 0 <= arr[i] <= 1000;

// Input:
// 10
// 1 2 3 4 5 6 7 8 9 10
// Ouput:
// 2
#include<stdio.h>
int main () {
    int n,c=0;
    scanf("%d",&n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] % 5 == 0){
            c++;
        }
    }
    printf("%d",c);
    
    return 0;
}
