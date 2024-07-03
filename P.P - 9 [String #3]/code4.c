#include<stdio.h>
#include<string.h>
int main (){
    int a,b;
    scanf("%d ",&a);
    char s[a];
    scanf("%s",s);
    scanf("%d ",&b);
    char s1[b];
    scanf("%s",s1);
    strcat(s, s1);
    printf("%s",s);
    return 0;
}