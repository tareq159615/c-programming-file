// 1- Write a program to find the maximum number between two numbers.
#include<stdio.h>
int main () { 
    int a,b;
    scanf("%d %d", &a, &b);
    if (a<b)
    {
        printf("%d is the maximum.",b);
    }
    else{
        printf("%d is the maximum.",a);
    } 
    return 0;
}