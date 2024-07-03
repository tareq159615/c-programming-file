
// Problem 9
// Max Score: 1 | Difficulty: Medium
// Write a program to delete an element from an array.

// Input
// 5
// 3
// 1 -5 -6 3 8
// Output
// 1 -5 3 8

// Note:
// *Here 5 is the size of the array.
// *3 is the delete position.
// *Main array.
#include<stdio.h>
int main (){
    int i,size,p;

    scanf("%d",&size);
    scanf("%d",&p);
    int arr[size];
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for ( i = p-1; i <= size-1 ; i++)
    {
        arr[i] = arr[i+1];
    }
    size --;

    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0 
}