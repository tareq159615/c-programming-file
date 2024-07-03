#include<stdio.h>
#include<string.h>
int main (){
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    int i = 0; 
    while(1){
        if(s1[i]=='\0' && s2[i] == '\0'){
            printf("Both are equal");
            break ; 
        }
        i++;
    } 
    return 0; 
} 
