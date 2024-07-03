// Write a program to find the prefix sum of an array.

#include<stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n  ; i++)
    {
        scanf("%d",&a[i]);
       
    }
    int sum=0;
    for (int i = 0; i < n  ; i++)
    {
        sum += a[i];
    }
    // for (int i = n; i >0  ; i--)
    //  {
    //      sum += a[i];
    // }
    printf("%d",sum);
    return 0;
}