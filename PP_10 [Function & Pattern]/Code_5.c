// Write a C function that takes an integer array as a parameter and returns the sum of all elements in the array.
#include <stdio.h>

int MAX(int arr[], int n) {
    int sum = 0;
    int max = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }
 printf("Maximum element is %d.\n", max);
    return sum;
}

int main() {
    int n; 
    scanf("%d",&n);
    int arr[n]; 
    for(int i = 0; i< n; i++){
        scanf("%d",&arr[i]);
    }
    int sum = MAX(arr, n);
}
