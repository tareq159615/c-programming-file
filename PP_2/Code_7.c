// Write a program to calculate the perimeter and area of a circle with a given radius.
#include<stdio.h>
int main () { 
    int a=10; 
    float Perimeter,Area;
    Perimeter = 2*a*3.14;
    Area = a*a*3.14;
    printf("Perimeter of a Circle = %.2f \nArea of a Circle = %.2f ",Perimeter,Area);
    return 0;
}