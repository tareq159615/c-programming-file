// 14 - Write a program to print even numbers up to N using a for loop.
#include<stdio.h>
int main () { 
    int N,i;
    scanf("%d",&N);
    for (int i = 0; i <=N; i++)
    {
        if (i%2==0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}