// Write a program to search an element from a given N sized array.

// Input:
// 5
// 1 2 3 10 5
// 10
// Output:
// 10 is available in the array.
// Input:
// 5
// 1 2 3 11 5
// 20
// Output:
// 20 isn't available in the array.
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int c = 0; 

    for (int i = 0; i < n; i++)
    {
      if (a[i] == x)
      {
        c= 1;
        break;
      }
    }
     if (c)
       {
        printf("%d is available in the array.",x);
       }else{
        printf("%d isn't available in the array.",x);
       }
    return 0;
} 