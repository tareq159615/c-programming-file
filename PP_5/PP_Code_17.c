// 17 - Write a program to print odd numbers up to N using a while loop.
#include<stdio.h>
int main (){
    int N;
    scanf("%d",&N);
    int i=0; 
    while (i<=N)
    {
        if (i%2!=0)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}