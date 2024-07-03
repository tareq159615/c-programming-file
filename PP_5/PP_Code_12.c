// 12 - Write a program to calculate the sum of 1 to 10 numbers using a do-while loop.

#include<stdio.h>
int main (){
    
    int i = 1; 
    int sum = 0 ;
    do
    {    
        sum += i;
        i++;
    } while (i<=10);
    printf("%d\n",sum);
    return 0; 
}