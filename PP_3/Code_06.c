// Implement a program that initializes a variable called num with 25 and then uses an assignment operator to calculate the remainder when divided by 7. Print the remainder.
#include<stdio.h>
int main () { 
    int number,ans;
    scanf("%d",&number);
    ans = number % 7;
    printf("%d",ans);
}