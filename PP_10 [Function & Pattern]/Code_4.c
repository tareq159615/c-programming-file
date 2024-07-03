// Write a program to check whether a number is even or odd using a user-defined function.

#include<stdio.h>
int even_odd (int n){
    if (n%2 == 0){
        printf("%d is an even number.",n);
    }else{
        printf("%d is an odd number.",n);
    }
}

int main (){
    int a; 
    scanf("%d",&a);
    even_odd(a);
    return 0; 
}