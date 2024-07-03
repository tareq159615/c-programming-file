
// Problem 10
// Max Score: 1 | Difficulty: Easy
// Write a program to reverse an N-sized array.

// Input
// 5
// 1 -5 -6 3 8
// Output
// 8 3 -6 -5 1
#include<stdio.h>
int main () {
    int count,i;
    scanf("%d",&count);
    int a [count];
    for ( i = 0; i < count; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < count/2; i++)
    {
        int temp = a[i];
        a[i] = a[count - 1 -i];
        a[count -1 -i] = temp;
    }
     for ( i = 0; i < count; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}