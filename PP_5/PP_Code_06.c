// 6 - Write a program to Print your name n times using a do-while loop.
#include<stdio.h>
int main (){
    int n; 
    scanf("%d",&n);
    int i = 1; 
    do
    {
        printf("%d-Code with Redoy\n",i);
        i++;
    } while (i<=n);
    
    return 0;
}
