// Write a program to calculate the sum of two numbers using a user-defined function. [Return + Parameter]
#include<stdio.h>
int sum(int a, int b) {
    return a+b;
}
int main () {
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    printf("%d\n",sum(num1,num2));
}