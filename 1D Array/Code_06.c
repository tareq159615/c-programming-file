// 6- Write a program to copy all elements from an N-sized array to another array.

#include<stdio.h>
int main (){
    int size, i, array1[100], array2[100]; 
    scanf("%d",&size);

    for ( i = 0; i < size; i++)
    {
        scanf("%d",&array1[i]);
    }
    
    for ( i = 0; i < size; i++){
        printf(" %d",array1[i]);
        array2[i] = array1[i];
    }

  
    for ( i = 0; i < size; i++)
    {
        printf(" %d", array2[i]);
    }
    
}