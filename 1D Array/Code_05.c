// 5 - Write a program to print the positive and negative numbers from an N-sized array.

#include<stdio.h>
int main (){
    int i,size;
    scanf("%d",&size);
    int array[size];
    for ( i = 0; i < size; i++)
    {
        scanf(" %d", &array[i]);
    }

    printf("Positive numbers:");
    for ( i = 0; i < size; i++)
    {
        if ( array[i] >= 0){
            printf(" %d",array[i]);
        }
    }

    printf("\nNegative numbers:");
    for ( i = 0; i < size; i++)
    {
        if ( array[i] < 0){
            printf(" %d",array[i]);
        }
    }
    return 0;
}