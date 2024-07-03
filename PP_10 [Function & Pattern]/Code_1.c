// Write a program to calculate the sum of two numbers using a user-defined function. [No Return + No Parameter]

#include<stdio.h>
int sum() {
    int a,b,total_sum;
    scanf("%d %d",&a,&b);
    total_sum = a+b;
    printf("%d",total_sum);
}
int main (){
    sum();
    return 0;
}