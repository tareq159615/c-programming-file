// F. Digits Summation
#include<stdio.h>
int main () { 
    long long a,b,x,y,sum;
    //printf("Enter your first number and second number : ");
    scanf("%lld %lld", &a, &b);

    x = a % 10;
    y = b % 10;

    sum = x+y;
    printf("%lld",sum);
}