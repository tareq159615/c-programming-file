//4-Write a program to check whether a number is an even number or an odd number.
#include<stdio.h>
int main () { 
    int a;
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("%d is an even number.",a);
    }
    else
    {
        printf("%d is an odd number.",a);
    }
    
    return 0;
}