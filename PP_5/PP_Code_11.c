// 11 - Write a program to calculate the sum of 1 to 10 numbers using a while loop.
#include<stdio.h>
int main (){
    
    int i = 1;
    int sum = 0;
    while (i <= 10) {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
}