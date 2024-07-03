// 8 - Write a program to input any character and check whether it is the alphabet, digit, or special character.
#include<stdio.h>
int main (){
    char ch;
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    {
        printf("%c is an alphabet",ch);
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("%c is an alphabet",ch);
    }
    else if (ch>= '0' && ch<='9')
    {
        printf("%c is a digit",ch);
    }
    else{
        printf("%c is a special character",ch);
    }
    
    
}