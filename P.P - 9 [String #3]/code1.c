#include <stdio.h>
#include <string.h>
int main () { 
    char ch[100];
    scanf("%s",&ch);
    for(int i = 0; ch[i] != '\0'; i++){
        if(islower(ch[i])){
            ch[i] = toupper(ch[i]);
        }else if (isupper(ch[i])){
            ch[i] = tolower(ch[i]);
        } 
    }
    printf("%s\n",ch);
    return 0; 
}
