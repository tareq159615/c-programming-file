// 10 - Write a program to calculate the sum of 1 to N numbers using a for loop.
#include<stdio.h>
int main (){
    int N,sum=0;
    scanf("%d",&N);
    for (int i = 1; i <=N; i++)
    {
        sum += i;
    }
    printf("Summation of 1 to %d: %d",N,sum);
    return 0;
}