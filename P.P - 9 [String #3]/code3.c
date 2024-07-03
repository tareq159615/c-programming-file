#include<stdio.h>
#include<string.h>
int main (){
    char s[100];
    scanf("%s",s);
    
    for(int i = 0; s[i] != '\0';i++){
        if(isupper(s[i])){
            printf("NO");
            return 0; 
        }
    }

    printf("YES");
    return 0;
}