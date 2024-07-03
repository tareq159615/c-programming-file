// 3 - Write a program that takes the integer number of a student and finds out the grade using a switch case statement following the grading system.
// 	A = 90-100
// 	B+ = 80-89
// 	B = 70-79
// 	B- = 60-69
// 	F = Below 60
#include<stdio.h>
int main (){
    int x; 

    scanf("%d", &x);

    switch (x/10)
    {
    case 10:
        printf("A");
        break;
    case 9:
        printf("A");
        break;
    case 8:
        printf("B+");
        break;
    case 7:
        printf("B");
        break;
    case 6:
        printf("B");
        break;
    case 5:
        printf("F");
        break;
    case 4:
        printf("F");
        break;
    case 3:
        printf("F");
        break;
    case 2:
        printf("F");
        break;
    case 1:
        printf("F");
    default:
    printf("Invalid marks entered.");
        break;
    }
    return 0;
}
     