// Write a program to find a cube of any number using a user-defined function. [No Return + Parameter]

#include<stdio.h>
int sum (int a){
    
    int x = a*a*a;

    printf("%d",x);
} 
int main () {
    int b;
    scanf("%d",&b);
    sum(b);
    return 0;
 }