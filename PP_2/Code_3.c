// Write a Program to enter the marks of two subjects and calculate the total and average.
#include<stdio.h>
int main (){
    int a,b,total;
    float average;
    a = 80;
    b = 80;
    total = a + b; 
    average = (a+b)/2;
    printf(" Total Marks = %d\n Average Marks = %.2f\n",total, average); 
    return 0;
}
