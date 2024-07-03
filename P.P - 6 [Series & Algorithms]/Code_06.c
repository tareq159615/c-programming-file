// Write a program to find whether the Sum of Two Values is Equal to 30 or not from an array. (The size of the array and elements should be taken from the user)
#include<stdio.h>
int main () { 
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] + a[j] == 30)
            {
                printf("%d + %d = %d ",a[i],a[j],a[i]+a[j]);
                break;
            }   
        } 
    }
    return 0; 
}