//  Write a program to convert Centigrade to Fahrenheit. Formula: F = (C × 9/5) + 32
#include<stdio.h>

int main () { 
    int C;
    scanf("%d", &C); 

    float F = (C * 9/5) + 32;

    printf("%.2f Degree Celsius = %.2f Degree Fahrenheit\n", (float)C, F);

    return 0;
}