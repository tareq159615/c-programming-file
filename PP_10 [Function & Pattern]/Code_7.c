// Design a function that takes two integer arrays and their sizes as parameters. The function should check if both arrays are equal (i.e., they have the same elements in the same order) and return 1 if they are equal, or 0 otherwise.

#include<stdio.h>
int array(int x,int y){
    if (x == y)
    {
        printf("They are equal.");
    }else{
        printf("They are not equal.");
    }
    
    
}
int main(){
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
    array(n,m);
    return 0;
}