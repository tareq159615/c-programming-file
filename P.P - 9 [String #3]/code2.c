#include<stdio.h>
#include<string.h>
int main (){
    char s[100];
    scanf("%s",s);
    int x=0,y=0,z=0;
    for(int i = 0; s[i] != '\0';i++){
        if(isdigit(s[i])){
            x++;
        }else if (isalpha(s[i])){
            y++;
        }else{
            z++;
        }
    }
    printf("Total number of alphabets: %d\n", y);
    printf("Total number of digits: %d\n", x);
    printf("Total number of special characters: %d\n", z);
    return 0;
}