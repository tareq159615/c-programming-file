// 3- Write a program to check whether a number is an odd number or not.

#include<stdio.h>
int main () { 
    int a;
    scanf("%d",&a);
    if (a % 2 != 0)
    {
        printf("%d is an Odd number.",a);
    }
    return 0;
}