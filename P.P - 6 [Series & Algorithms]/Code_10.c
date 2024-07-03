// 10 - Write a program to take input of a character from the user and print the next character of it. (Input must be taken from the user.)
#include<stdio.h>
int main () { 
    char ch; 
    scanf("%c",&ch);
    if (ch == 'a')
    {
        printf("b");
    }
    else if (ch == 'z')
    {
        printf("a");
    }else if (ch == 'Z')
    {
        printf("A");
    }
    
     return 0;
}