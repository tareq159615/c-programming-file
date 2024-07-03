// 1- Write a program to read the elements of an array from the user using any loop and print the elements of an array using any loop.
#include<stdio.h>
int main () {
    int arr[6] = {1,2,3,4,5,6};
       for (int i = 0; i < 6; i++)
       {
            printf("%d ",arr[i]);
       }
       return 0; 
}