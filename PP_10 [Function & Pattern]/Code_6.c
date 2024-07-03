// Create a function that accepts an integer array and its size as parameters. The function should find and return the maximum element from the array.
#include<stdio.h>
int array_sum(int a[], int s){
    int max = a[0];
    for (int i = 1; i < s; i++)
    {
        if (a[i]>max)
        {
            max = a[i]; 
        }
       
    }
    return max; 
}
int main () {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",array_sum(arr,n));
    return 0;
}