//3- Write a program to calculate the sum of an N-sized array.
#include<stdio.h>
int main (){
    int size,sum=0;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
   
    return 0;
}