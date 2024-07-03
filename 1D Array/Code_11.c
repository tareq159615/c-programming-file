// Write a program to delete an element from an N-sized array. If the element isn't exist in the array, print NO. Otherwise print the updated array.

// Test case-1:
// Input
// 5
// 1 -5 -6 3 8
// 3
// Output
// 1 -5 -6 8

// Test case-2:
// Input
// 5
// 1 -5 -6 3 8
// 30
// Output
// NO

// Hints:
// For the test case-1, 5 is the array size and 3 will be deleted.
// For the test case-2, As 30 isn't exist in the array the output is N
#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int x;
    int found = 0;
    scanf("%d",&x);

     for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            found = 1;
            for (int j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;
            break;
        }
    }

     if (found) {
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    } else {
        printf("NO");
    }
    
    return 0;
} 

   
    
  