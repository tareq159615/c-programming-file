// Write a program to concatenate two strings. You need to take the sizes of two strings from the user. (Don’t use built-in function)

#include<stdio.h>
int main () { 
    int n,m;
    scanf("%d",&n);
    char name[n];
    scanf("%s",name);
    scanf("%d",&m);
    char name1[n];
    scanf("%s",name1);
    printf("%s%s",name,name1);
    return 0;
}