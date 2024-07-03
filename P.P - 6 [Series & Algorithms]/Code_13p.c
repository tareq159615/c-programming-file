
// Problem 13
// Max Score: 1 | Difficulty: Hard
// Write a program to print the second biggest element from an N-sized array.

// Input:
// 5
// 6 9 5 3 8
// Output:
// 8

// You can use the descending sort algorithm to solve 
#include<string.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
       for (int j = 0; j < n-i-1; j++)
       {
         if (arr[j]<arr[j+1])
         {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
         
       }
       
    }
    printf("%d",arr[1]);

    
    return 0;
}