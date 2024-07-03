// Implement a function that receives two integer arrays and their sizes as parameters. The function should return a new array that contains the element-wise sum of the two input arrays. Assume both arrays are of the same size.

#include<stdio.h>
int sum_array( int a[], int b[],int n){
     int sum = 0;
     for (int i = 0; i < n; i++)
    {
        sum = a[i]+b[i];
        printf("%d ",sum);
    }
}
int main (){
    int n,m;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
    }
   
    printf("New array: ");
    sum_array(a,b,n);
    return 0;
}