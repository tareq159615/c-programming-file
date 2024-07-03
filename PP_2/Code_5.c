// - Write a program to convert Fahrenheit to Centigrade. Formula: C = (F − 32) × 5/9
#include<stdio.h>

int main() {
    float F;
    scanf("%f", &F); 

    float C = (F - 32) * 5/9;

    printf("%.2f Degree Fahrenheit = %.2f Degree Celsius", F, C);

    return 0;
}
