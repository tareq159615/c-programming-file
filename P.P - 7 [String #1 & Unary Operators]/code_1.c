// Problem 1
// Max Score: 1 | Difficulty: Easy
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

// Hints: Be careful about data type.
#include<stdio.h>
int main (){
    int n; 
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%lld",&a[i]);
    }
 
    long long sum = 0;
    long long temp[n];
    for (int i = 0; i < n ; i++){
        sum += a[i];
        temp[i] = sum;  
    }
       
    for (int i = 0; i<n-1 ;i++){
        for (int j = 0; j < n-1-i; j++){
            if (temp[j]<temp[j+1]){
               int v = temp[j];
               temp[j] = temp[j+1];
               temp[j+1] = v;
            }
        }
        }
    for (int i = 0; i < n ; i++){
    printf("%lld ",temp[i]);       
    }
    return 0;
    
}
