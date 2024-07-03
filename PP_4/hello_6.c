// 6 - Write a program to check whether a number is negative, positive, or zero.
#include<stdio.h>
int main () { 
    int a;
    scanf("%d",&a);
    if (a < 0)
    {
        printf("It's a negative Number.");
    }
    else if (a>0)
    {
        printf("It's a positive Number.");
    }
    else
    {
        printf("Zero");
    }
    
    return 0;
}