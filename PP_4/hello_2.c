// 2- Write a program to check whether a number is an even number or not.
#include<stdio.h>
int main () { 
    int a;
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("%d is an Even number.",a);
    }
    return 0;
}