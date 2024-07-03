//4 - Write a program to calculate the sum and average of an N sized array.

#include<stdio.h>
int main () {
    int count,sum=0,i;
    scanf("%d",&count);
    int arr[count];
    for ( i = 0; i < count; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < count; i++)
    {
        sum += arr[i];
    }
    printf("%d\n",sum);
    printf("%d",sum/count);
    
    return 0;
}