// Write a program to find the lexicographically smallest string.
#include<stdio.h>
#include<stdio.h>
int main () { 
    char a[100], b[100];
    scanf("%s %s",a,b);


    int x = strcmp(a,b);
    printf("%d\n",x);

    if (x==0)
    {
        printf("Both are same");
    }
    else if (x<0)
    {
        printf("%s is small.",a);
    }else{
        printf("%s is small.",b);
    }
    return 0;
}
