// Write a program that reads the value of the distance traveled by a car and the time taken for the same. Next, compute the speed at which the car traveled.
#include<stdio.h>
int main (){
    int V = 10, t =2;
    float S = V/t;
    printf("The speed of the car is %.2f kilometers per hour",S);
    return 0;
}