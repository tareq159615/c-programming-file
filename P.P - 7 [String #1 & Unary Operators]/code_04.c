// Write a program to copy one string to another string (Don’t use built-in function)

#include<stdio.h>
#include<string.h>
int main (){
    char name[6];
    scanf("%s",name);

    char copyname [6];

    for (int  i = 0; i < strlen(name); i++)
    {
        if (name[i] != '\0')
        {
            copyname[i] = name[i];
        }
    }
    printf("%s ", copyname);
    return 0;
}