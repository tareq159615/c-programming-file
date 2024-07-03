// 7 -Write a program to find the maximum and minimum elements from an N-sized array.
#include<stdio.h>
int main (){ 
    int arr[100],i,size;
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for ( i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    printf("%d %d",max,min);
    
    return 0;
}