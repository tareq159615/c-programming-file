// 7 - Write a program to check whether a number is divisible by 5 or 11.
#include<stdio.h>
int main () { 
    int a;
    scanf("%d",&a);
    if (a%5==0 || a%11==0)
    {
        printf("%d is divisible by 5 or 11",a);
    }
    else
    {
        printf("%d is not divisible by 5 or 11",a);
    }
    return 0;
}